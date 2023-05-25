/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/DescribeAcceleratorOfferingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAcceleratorOfferingsRequest::DescribeAcceleratorOfferingsRequest() : 
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false)
{
}

Aws::String DescribeAcceleratorOfferingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationTypeHasBeenSet)
  {
   payload.WithString("locationType", LocationTypeMapper::GetNameForLocationType(m_locationType));
  }

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(m_acceleratorTypes[acceleratorTypesIndex]);
   }
   payload.WithArray("acceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  return payload.View().WriteReadable();
}




