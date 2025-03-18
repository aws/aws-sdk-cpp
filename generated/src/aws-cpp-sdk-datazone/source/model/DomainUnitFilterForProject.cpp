/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainUnitFilterForProject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DomainUnitFilterForProject::DomainUnitFilterForProject(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainUnitFilterForProject& DomainUnitFilterForProject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainUnit"))
  {
    m_domainUnit = jsonValue.GetString("domainUnit");
    m_domainUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("includeChildDomainUnits"))
  {
    m_includeChildDomainUnits = jsonValue.GetBool("includeChildDomainUnits");
    m_includeChildDomainUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainUnitFilterForProject::Jsonize() const
{
  JsonValue payload;

  if(m_domainUnitHasBeenSet)
  {
   payload.WithString("domainUnit", m_domainUnit);

  }

  if(m_includeChildDomainUnitsHasBeenSet)
  {
   payload.WithBool("includeChildDomainUnits", m_includeChildDomainUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
