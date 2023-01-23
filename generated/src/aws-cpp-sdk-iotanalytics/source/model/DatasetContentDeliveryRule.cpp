/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetContentDeliveryRule.h>
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

DatasetContentDeliveryRule::DatasetContentDeliveryRule() : 
    m_entryNameHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

DatasetContentDeliveryRule::DatasetContentDeliveryRule(JsonView jsonValue) : 
    m_entryNameHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetContentDeliveryRule& DatasetContentDeliveryRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryName"))
  {
    m_entryName = jsonValue.GetString("entryName");

    m_entryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetContentDeliveryRule::Jsonize() const
{
  JsonValue payload;

  if(m_entryNameHasBeenSet)
  {
   payload.WithString("entryName", m_entryName);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
