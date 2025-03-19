/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainUnitPolicyGrantPrincipal.h>
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

DomainUnitPolicyGrantPrincipal::DomainUnitPolicyGrantPrincipal(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainUnitPolicyGrantPrincipal& DomainUnitPolicyGrantPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainUnitDesignation"))
  {
    m_domainUnitDesignation = DomainUnitDesignationMapper::GetDomainUnitDesignationForName(jsonValue.GetString("domainUnitDesignation"));
    m_domainUnitDesignationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainUnitGrantFilter"))
  {
    m_domainUnitGrantFilter = jsonValue.GetObject("domainUnitGrantFilter");
    m_domainUnitGrantFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainUnitIdentifier"))
  {
    m_domainUnitIdentifier = jsonValue.GetString("domainUnitIdentifier");
    m_domainUnitIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainUnitPolicyGrantPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_domainUnitDesignationHasBeenSet)
  {
   payload.WithString("domainUnitDesignation", DomainUnitDesignationMapper::GetNameForDomainUnitDesignation(m_domainUnitDesignation));
  }

  if(m_domainUnitGrantFilterHasBeenSet)
  {
   payload.WithObject("domainUnitGrantFilter", m_domainUnitGrantFilter.Jsonize());

  }

  if(m_domainUnitIdentifierHasBeenSet)
  {
   payload.WithString("domainUnitIdentifier", m_domainUnitIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
