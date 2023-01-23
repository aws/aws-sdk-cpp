/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeLabelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLabelRequest::DescribeLabelRequest() : 
    m_labelGroupNameHasBeenSet(false),
    m_labelIdHasBeenSet(false)
{
}

Aws::String DescribeLabelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_labelIdHasBeenSet)
  {
   payload.WithString("LabelId", m_labelId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLabelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.DescribeLabel"));
  return headers;

}




