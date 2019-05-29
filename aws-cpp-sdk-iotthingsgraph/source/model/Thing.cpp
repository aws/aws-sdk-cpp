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

#include <aws/iotthingsgraph/model/Thing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

Thing::Thing() : 
    m_thingArnHasBeenSet(false),
    m_thingNameHasBeenSet(false)
{
}

Thing::Thing(JsonView jsonValue) : 
    m_thingArnHasBeenSet(false),
    m_thingNameHasBeenSet(false)
{
  *this = jsonValue;
}

Thing& Thing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingArn"))
  {
    m_thingArn = jsonValue.GetString("thingArn");

    m_thingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Thing::Jsonize() const
{
  JsonValue payload;

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
