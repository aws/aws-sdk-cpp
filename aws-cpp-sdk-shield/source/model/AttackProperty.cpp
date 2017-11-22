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

#include <aws/shield/model/AttackProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackProperty::AttackProperty() : 
    m_attackLayer(AttackLayer::NOT_SET),
    m_attackLayerHasBeenSet(false),
    m_attackPropertyIdentifier(AttackPropertyIdentifier::NOT_SET),
    m_attackPropertyIdentifierHasBeenSet(false),
    m_topContributorsHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

AttackProperty::AttackProperty(const JsonValue& jsonValue) : 
    m_attackLayer(AttackLayer::NOT_SET),
    m_attackLayerHasBeenSet(false),
    m_attackPropertyIdentifier(AttackPropertyIdentifier::NOT_SET),
    m_attackPropertyIdentifierHasBeenSet(false),
    m_topContributorsHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

AttackProperty& AttackProperty::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AttackLayer"))
  {
    m_attackLayer = AttackLayerMapper::GetAttackLayerForName(jsonValue.GetString("AttackLayer"));

    m_attackLayerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackPropertyIdentifier"))
  {
    m_attackPropertyIdentifier = AttackPropertyIdentifierMapper::GetAttackPropertyIdentifierForName(jsonValue.GetString("AttackPropertyIdentifier"));

    m_attackPropertyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopContributors"))
  {
    Array<JsonValue> topContributorsJsonList = jsonValue.GetArray("TopContributors");
    for(unsigned topContributorsIndex = 0; topContributorsIndex < topContributorsJsonList.GetLength(); ++topContributorsIndex)
    {
      m_topContributors.push_back(topContributorsJsonList[topContributorsIndex].AsObject());
    }
    m_topContributorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInt64("Total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackProperty::Jsonize() const
{
  JsonValue payload;

  if(m_attackLayerHasBeenSet)
  {
   payload.WithString("AttackLayer", AttackLayerMapper::GetNameForAttackLayer(m_attackLayer));
  }

  if(m_attackPropertyIdentifierHasBeenSet)
  {
   payload.WithString("AttackPropertyIdentifier", AttackPropertyIdentifierMapper::GetNameForAttackPropertyIdentifier(m_attackPropertyIdentifier));
  }

  if(m_topContributorsHasBeenSet)
  {
   Array<JsonValue> topContributorsJsonList(m_topContributors.size());
   for(unsigned topContributorsIndex = 0; topContributorsIndex < topContributorsJsonList.GetLength(); ++topContributorsIndex)
   {
     topContributorsJsonList[topContributorsIndex].AsObject(m_topContributors[topContributorsIndex].Jsonize());
   }
   payload.WithArray("TopContributors", std::move(topContributorsJsonList));

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_totalHasBeenSet)
  {
   payload.WithInt64("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
