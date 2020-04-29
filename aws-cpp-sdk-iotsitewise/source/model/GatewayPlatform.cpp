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

#include <aws/iotsitewise/model/GatewayPlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

GatewayPlatform::GatewayPlatform() : 
    m_greengrassHasBeenSet(false)
{
}

GatewayPlatform::GatewayPlatform(JsonView jsonValue) : 
    m_greengrassHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayPlatform& GatewayPlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("greengrass"))
  {
    m_greengrass = jsonValue.GetObject("greengrass");

    m_greengrassHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayPlatform::Jsonize() const
{
  JsonValue payload;

  if(m_greengrassHasBeenSet)
  {
   payload.WithObject("greengrass", m_greengrass.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
