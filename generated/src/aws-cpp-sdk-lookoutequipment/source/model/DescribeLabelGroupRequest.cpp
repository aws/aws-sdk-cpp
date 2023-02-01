/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeLabelGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLabelGroupRequest::DescribeLabelGroupRequest() : 
    m_labelGroupNameHasBeenSet(false)
{
}

Aws::String DescribeLabelGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLabelGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.DescribeLabelGroup"));
  return headers;

}




