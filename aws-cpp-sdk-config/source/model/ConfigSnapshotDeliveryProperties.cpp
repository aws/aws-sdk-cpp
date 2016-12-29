/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/config/model/ConfigSnapshotDeliveryProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigSnapshotDeliveryProperties::ConfigSnapshotDeliveryProperties() : 
    m_deliveryFrequency(MaximumExecutionFrequency::NOT_SET),
    m_deliveryFrequencyHasBeenSet(false)
{
}

ConfigSnapshotDeliveryProperties::ConfigSnapshotDeliveryProperties(const JsonValue& jsonValue) : 
    m_deliveryFrequency(MaximumExecutionFrequency::NOT_SET),
    m_deliveryFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigSnapshotDeliveryProperties& ConfigSnapshotDeliveryProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("deliveryFrequency"))
  {
    m_deliveryFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("deliveryFrequency"));

    m_deliveryFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigSnapshotDeliveryProperties::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryFrequencyHasBeenSet)
  {
   payload.WithString("deliveryFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_deliveryFrequency));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws