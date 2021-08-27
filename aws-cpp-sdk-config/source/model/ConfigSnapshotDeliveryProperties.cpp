/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ConfigSnapshotDeliveryProperties::ConfigSnapshotDeliveryProperties(JsonView jsonValue) : 
    m_deliveryFrequency(MaximumExecutionFrequency::NOT_SET),
    m_deliveryFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigSnapshotDeliveryProperties& ConfigSnapshotDeliveryProperties::operator =(JsonView jsonValue)
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
