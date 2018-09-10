﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/config/model/DeliveryChannelStatus.h>
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

DeliveryChannelStatus::DeliveryChannelStatus() : 
    m_nameHasBeenSet(false),
    m_configSnapshotDeliveryInfoHasBeenSet(false),
    m_configHistoryDeliveryInfoHasBeenSet(false),
    m_configStreamDeliveryInfoHasBeenSet(false)
{
}

DeliveryChannelStatus::DeliveryChannelStatus(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_configSnapshotDeliveryInfoHasBeenSet(false),
    m_configHistoryDeliveryInfoHasBeenSet(false),
    m_configStreamDeliveryInfoHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryChannelStatus& DeliveryChannelStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configSnapshotDeliveryInfo"))
  {
    m_configSnapshotDeliveryInfo = jsonValue.GetObject("configSnapshotDeliveryInfo");

    m_configSnapshotDeliveryInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configHistoryDeliveryInfo"))
  {
    m_configHistoryDeliveryInfo = jsonValue.GetObject("configHistoryDeliveryInfo");

    m_configHistoryDeliveryInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configStreamDeliveryInfo"))
  {
    m_configStreamDeliveryInfo = jsonValue.GetObject("configStreamDeliveryInfo");

    m_configStreamDeliveryInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryChannelStatus::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_configSnapshotDeliveryInfoHasBeenSet)
  {
   payload.WithObject("configSnapshotDeliveryInfo", m_configSnapshotDeliveryInfo.Jsonize());

  }

  if(m_configHistoryDeliveryInfoHasBeenSet)
  {
   payload.WithObject("configHistoryDeliveryInfo", m_configHistoryDeliveryInfo.Jsonize());

  }

  if(m_configStreamDeliveryInfoHasBeenSet)
  {
   payload.WithObject("configStreamDeliveryInfo", m_configStreamDeliveryInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
