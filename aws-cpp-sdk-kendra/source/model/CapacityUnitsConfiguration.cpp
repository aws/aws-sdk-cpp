/*
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

#include <aws/kendra/model/CapacityUnitsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

CapacityUnitsConfiguration::CapacityUnitsConfiguration() : 
    m_storageCapacityUnits(0),
    m_storageCapacityUnitsHasBeenSet(false),
    m_queryCapacityUnits(0),
    m_queryCapacityUnitsHasBeenSet(false)
{
}

CapacityUnitsConfiguration::CapacityUnitsConfiguration(JsonView jsonValue) : 
    m_storageCapacityUnits(0),
    m_storageCapacityUnitsHasBeenSet(false),
    m_queryCapacityUnits(0),
    m_queryCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityUnitsConfiguration& CapacityUnitsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageCapacityUnits"))
  {
    m_storageCapacityUnits = jsonValue.GetInteger("StorageCapacityUnits");

    m_storageCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryCapacityUnits"))
  {
    m_queryCapacityUnits = jsonValue.GetInteger("QueryCapacityUnits");

    m_queryCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityUnitsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("StorageCapacityUnits", m_storageCapacityUnits);

  }

  if(m_queryCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("QueryCapacityUnits", m_queryCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
