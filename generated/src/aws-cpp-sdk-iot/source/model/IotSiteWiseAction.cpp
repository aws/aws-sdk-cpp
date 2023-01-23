/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IotSiteWiseAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

IotSiteWiseAction::IotSiteWiseAction() : 
    m_putAssetPropertyValueEntriesHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

IotSiteWiseAction::IotSiteWiseAction(JsonView jsonValue) : 
    m_putAssetPropertyValueEntriesHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseAction& IotSiteWiseAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("putAssetPropertyValueEntries"))
  {
    Aws::Utils::Array<JsonView> putAssetPropertyValueEntriesJsonList = jsonValue.GetArray("putAssetPropertyValueEntries");
    for(unsigned putAssetPropertyValueEntriesIndex = 0; putAssetPropertyValueEntriesIndex < putAssetPropertyValueEntriesJsonList.GetLength(); ++putAssetPropertyValueEntriesIndex)
    {
      m_putAssetPropertyValueEntries.push_back(putAssetPropertyValueEntriesJsonList[putAssetPropertyValueEntriesIndex].AsObject());
    }
    m_putAssetPropertyValueEntriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IotSiteWiseAction::Jsonize() const
{
  JsonValue payload;

  if(m_putAssetPropertyValueEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> putAssetPropertyValueEntriesJsonList(m_putAssetPropertyValueEntries.size());
   for(unsigned putAssetPropertyValueEntriesIndex = 0; putAssetPropertyValueEntriesIndex < putAssetPropertyValueEntriesJsonList.GetLength(); ++putAssetPropertyValueEntriesIndex)
   {
     putAssetPropertyValueEntriesJsonList[putAssetPropertyValueEntriesIndex].AsObject(m_putAssetPropertyValueEntries[putAssetPropertyValueEntriesIndex].Jsonize());
   }
   payload.WithArray("putAssetPropertyValueEntries", std::move(putAssetPropertyValueEntriesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
