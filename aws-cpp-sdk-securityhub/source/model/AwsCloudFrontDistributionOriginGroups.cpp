﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroups.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFrontDistributionOriginGroups::AwsCloudFrontDistributionOriginGroups() : 
    m_itemsHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginGroups::AwsCloudFrontDistributionOriginGroups(JsonView jsonValue) : 
    m_itemsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginGroups& AwsCloudFrontDistributionOriginGroups::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Items"))
  {
    Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginGroups::Jsonize() const
{
  JsonValue payload;

  if(m_itemsHasBeenSet)
  {
   Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
