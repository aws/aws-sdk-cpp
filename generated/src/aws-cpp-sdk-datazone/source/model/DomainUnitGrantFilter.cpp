/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainUnitGrantFilter.h>
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

DomainUnitGrantFilter::DomainUnitGrantFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainUnitGrantFilter& DomainUnitGrantFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allDomainUnitsGrantFilter"))
  {
    m_allDomainUnitsGrantFilter = jsonValue.GetObject("allDomainUnitsGrantFilter");
    m_allDomainUnitsGrantFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainUnitGrantFilter::Jsonize() const
{
  JsonValue payload;

  if(m_allDomainUnitsGrantFilterHasBeenSet)
  {
   payload.WithObject("allDomainUnitsGrantFilter", m_allDomainUnitsGrantFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
