/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TagResourceRequest::TagResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagsModelHasBeenSet(false)
{
}

Aws::String TagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagsModelHasBeenSet)
  {
   payload = m_tagsModel.Jsonize();
  }

  return payload.View().WriteReadable();
}




