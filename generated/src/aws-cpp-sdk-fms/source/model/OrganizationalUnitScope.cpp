/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/OrganizationalUnitScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

OrganizationalUnitScope::OrganizationalUnitScope() : 
    m_organizationalUnitsHasBeenSet(false),
    m_allOrganizationalUnitsEnabled(false),
    m_allOrganizationalUnitsEnabledHasBeenSet(false),
    m_excludeSpecifiedOrganizationalUnits(false),
    m_excludeSpecifiedOrganizationalUnitsHasBeenSet(false)
{
}

OrganizationalUnitScope::OrganizationalUnitScope(JsonView jsonValue) : 
    m_organizationalUnitsHasBeenSet(false),
    m_allOrganizationalUnitsEnabled(false),
    m_allOrganizationalUnitsEnabledHasBeenSet(false),
    m_excludeSpecifiedOrganizationalUnits(false),
    m_excludeSpecifiedOrganizationalUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationalUnitScope& OrganizationalUnitScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationalUnits"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("OrganizationalUnits");
    for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
    {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsString());
    }
    m_organizationalUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllOrganizationalUnitsEnabled"))
  {
    m_allOrganizationalUnitsEnabled = jsonValue.GetBool("AllOrganizationalUnitsEnabled");

    m_allOrganizationalUnitsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeSpecifiedOrganizationalUnits"))
  {
    m_excludeSpecifiedOrganizationalUnits = jsonValue.GetBool("ExcludeSpecifiedOrganizationalUnits");

    m_excludeSpecifiedOrganizationalUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationalUnitScope::Jsonize() const
{
  JsonValue payload;

  if(m_organizationalUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
   for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
   {
     organizationalUnitsJsonList[organizationalUnitsIndex].AsString(m_organizationalUnits[organizationalUnitsIndex]);
   }
   payload.WithArray("OrganizationalUnits", std::move(organizationalUnitsJsonList));

  }

  if(m_allOrganizationalUnitsEnabledHasBeenSet)
  {
   payload.WithBool("AllOrganizationalUnitsEnabled", m_allOrganizationalUnitsEnabled);

  }

  if(m_excludeSpecifiedOrganizationalUnitsHasBeenSet)
  {
   payload.WithBool("ExcludeSpecifiedOrganizationalUnits", m_excludeSpecifiedOrganizationalUnits);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
