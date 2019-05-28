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

#include <aws/groundstation/model/DataflowEndpointConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DataflowEndpointConfig::DataflowEndpointConfig() : 
    m_dataflowEndpointNameHasBeenSet(false)
{
}

DataflowEndpointConfig::DataflowEndpointConfig(JsonView jsonValue) : 
    m_dataflowEndpointNameHasBeenSet(false)
{
  *this = jsonValue;
}

DataflowEndpointConfig& DataflowEndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataflowEndpointName"))
  {
    m_dataflowEndpointName = jsonValue.GetString("dataflowEndpointName");

    m_dataflowEndpointNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DataflowEndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataflowEndpointNameHasBeenSet)
  {
   payload.WithString("dataflowEndpointName", m_dataflowEndpointName);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
