/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/IotTwinMakerSourceConfigurationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

IotTwinMakerSourceConfigurationFilter::IotTwinMakerSourceConfigurationFilter() : 
    m_filterByComponentTypeHasBeenSet(false),
    m_filterByEntityHasBeenSet(false)
{
}

IotTwinMakerSourceConfigurationFilter::IotTwinMakerSourceConfigurationFilter(JsonView jsonValue) : 
    m_filterByComponentTypeHasBeenSet(false),
    m_filterByEntityHasBeenSet(false)
{
  *this = jsonValue;
}

IotTwinMakerSourceConfigurationFilter& IotTwinMakerSourceConfigurationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterByComponentType"))
  {
    m_filterByComponentType = jsonValue.GetObject("filterByComponentType");

    m_filterByComponentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterByEntity"))
  {
    m_filterByEntity = jsonValue.GetObject("filterByEntity");

    m_filterByEntityHasBeenSet = true;
  }

  return *this;
}

JsonValue IotTwinMakerSourceConfigurationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterByComponentTypeHasBeenSet)
  {
   payload.WithObject("filterByComponentType", m_filterByComponentType.Jsonize());

  }

  if(m_filterByEntityHasBeenSet)
  {
   payload.WithObject("filterByEntity", m_filterByEntity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
