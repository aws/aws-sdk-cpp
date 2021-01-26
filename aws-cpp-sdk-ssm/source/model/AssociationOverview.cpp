/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AssociationOverview::AssociationOverview(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_associationStatusAggregatedCountHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationOverview& AssociationOverview::operator =(JsonView jsonValue)
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
    Aws::Map<Aws::String, JsonView> associationStatusAggregatedCountJsonMap = jsonValue.GetObject("AssociationStatusAggregatedCount").GetAllObjects();
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
