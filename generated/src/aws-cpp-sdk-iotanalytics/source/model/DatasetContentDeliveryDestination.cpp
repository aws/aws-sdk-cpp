﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetContentDeliveryDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatasetContentDeliveryDestination::DatasetContentDeliveryDestination() : 
    m_iotEventsDestinationConfigurationHasBeenSet(false),
    m_s3DestinationConfigurationHasBeenSet(false)
{
}

DatasetContentDeliveryDestination::DatasetContentDeliveryDestination(JsonView jsonValue) : 
    m_iotEventsDestinationConfigurationHasBeenSet(false),
    m_s3DestinationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetContentDeliveryDestination& DatasetContentDeliveryDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iotEventsDestinationConfiguration"))
  {
    m_iotEventsDestinationConfiguration = jsonValue.GetObject("iotEventsDestinationConfiguration");

    m_iotEventsDestinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3DestinationConfiguration"))
  {
    m_s3DestinationConfiguration = jsonValue.GetObject("s3DestinationConfiguration");

    m_s3DestinationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetContentDeliveryDestination::Jsonize() const
{
  JsonValue payload;

  if(m_iotEventsDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("iotEventsDestinationConfiguration", m_iotEventsDestinationConfiguration.Jsonize());

  }

  if(m_s3DestinationConfigurationHasBeenSet)
  {
   payload.WithObject("s3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
