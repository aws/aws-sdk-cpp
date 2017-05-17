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

#include <aws/ssm/model/InstanceAggregatedAssociationOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAggregatedAssociationOverview::InstanceAggregatedAssociationOverview() : 
    m_detailedStatusHasBeenSet(false),
    m_instanceAssociationStatusAggregatedCountHasBeenSet(false)
{
}

InstanceAggregatedAssociationOverview::InstanceAggregatedAssociationOverview(const JsonValue& jsonValue) : 
    m_detailedStatusHasBeenSet(false),
    m_instanceAssociationStatusAggregatedCountHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAggregatedAssociationOverview& InstanceAggregatedAssociationOverview::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceAssociationStatusAggregatedCount"))
  {
    Aws::Map<Aws::String, JsonValue> instanceAssociationStatusAggregatedCountJsonMap = jsonValue.GetObject("InstanceAssociationStatusAggregatedCount").GetAllObjects();
    for(auto& instanceAssociationStatusAggregatedCountItem : instanceAssociationStatusAggregatedCountJsonMap)
    {
      m_instanceAssociationStatusAggregatedCount[instanceAssociationStatusAggregatedCountItem.first] = instanceAssociationStatusAggregatedCountItem.second.AsInteger();
    }
    m_instanceAssociationStatusAggregatedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAggregatedAssociationOverview::Jsonize() const
{
  JsonValue payload;

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_instanceAssociationStatusAggregatedCountHasBeenSet)
  {
   JsonValue instanceAssociationStatusAggregatedCountJsonMap;
   for(auto& instanceAssociationStatusAggregatedCountItem : m_instanceAssociationStatusAggregatedCount)
   {
     instanceAssociationStatusAggregatedCountJsonMap.WithInteger(instanceAssociationStatusAggregatedCountItem.first, instanceAssociationStatusAggregatedCountItem.second);
   }
   payload.WithObject("InstanceAssociationStatusAggregatedCount", std::move(instanceAssociationStatusAggregatedCountJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws