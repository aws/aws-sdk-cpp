/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CopyJobTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyJobTemplateRequest::CopyJobTemplateRequest() : 
    m_farmIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_targetS3LocationHasBeenSet(false)
{
}

Aws::String CopyJobTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetS3LocationHasBeenSet)
  {
   payload.WithObject("targetS3Location", m_targetS3Location.Jsonize());

  }

  return payload.View().WriteReadable();
}




