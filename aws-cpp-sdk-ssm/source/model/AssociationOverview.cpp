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

#include <aws/ssm/model/AssociationOverview.h>
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

AssociationOverview::AssociationOverview() : 
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_associationStatusAggregatedCountHasBeenSet(false)
{
}

AssociationOverview::AssociationOverview(const JsonValue& jsonValue) : 
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_associationStatusAggregatedCountHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationOverview& AssociationOverview::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatusAggregatedCount"))
  {
    Aws::Map<Aws::String, JsonValue> associationStatusAggregatedCountJsonMap = jsonValue.GetObject("AssociationStatusAggregatedCount").GetAllObjects();
    for(auto& associationStatusAggregatedCountItem : associationStatusAggregatedCountJsonMap)
    {
      m_associationStatusAggregatedCount[associationStatusAggregatedCountItem.first] = associationStatusAggregatedCountItem.second.AsInteger();
    }
    m_associationStatusAggregatedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationOverview::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_associationStatusAggregatedCountHasBeenSet)
  {
   JsonValue associationStatusAggregatedCountJsonMap;
   for(auto& associationStatusAggregatedCountItem : m_associationStatusAggregatedCount)
   {
     associationStatusAggregatedCountJsonMap.WithInteger(associationStatusAggregatedCountItem.first, associationStatusAggregatedCountItem.second);
   }
   payload.WithObject("AssociationStatusAggregatedCount", std::move(associationStatusAggregatedCountJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws