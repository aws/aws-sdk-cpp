/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/UpdateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatasetRequest::UpdateDatasetRequest() : 
    m_nameHasBeenSet(false),
    m_format(InputFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_formatOptionsHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_pathOptionsHasBeenSet(false)
{
}

Aws::String UpdateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", InputFormatMapper::GetNameForInputFormat(m_format));
  }

  if(m_formatOptionsHasBeenSet)
  {
   payload.WithObject("FormatOptions", m_formatOptions.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_pathOptionsHasBeenSet)
  {
   payload.WithObject("PathOptions", m_pathOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




