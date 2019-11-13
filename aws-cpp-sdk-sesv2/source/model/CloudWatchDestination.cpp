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

#include <aws/sesv2/model/CloudWatchDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

CloudWatchDestination::CloudWatchDestination() : 
    m_dimensionConfigurationsHasBeenSet(false)
{
}

CloudWatchDestination::CloudWatchDestination(JsonView jsonValue) : 
    m_dimensionConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchDestination& CloudWatchDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionConfigurations"))
  {
    Array<JsonView> dimensionConfigurationsJsonList = jsonValue.GetArray("DimensionConfigurations");
    for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
    {
      m_dimensionConfigurations.push_back(dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject());
    }
    m_dimensionConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchDestination::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionConfigurationsHasBeenSet)
  {
   Array<JsonValue> dimensionConfigurationsJsonList(m_dimensionConfigurations.size());
   for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
   {
     dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject(m_dimensionConfigurations[dimensionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DimensionConfigurations", std::move(dimensionConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
