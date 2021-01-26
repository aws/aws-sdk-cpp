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
    m_formatOptionsHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

Aws::String UpdateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_formatOptionsHasBeenSet)
  {
   payload.WithObject("FormatOptions", m_formatOptions.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  return payload.View().WriteReadable();
}




