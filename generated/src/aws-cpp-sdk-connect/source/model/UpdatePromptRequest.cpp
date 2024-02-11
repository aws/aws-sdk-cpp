/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePromptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePromptRequest::UpdatePromptRequest() : 
    m_instanceIdHasBeenSet(false),
    m_promptIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

Aws::String UpdatePromptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload.View().WriteReadable();
}




