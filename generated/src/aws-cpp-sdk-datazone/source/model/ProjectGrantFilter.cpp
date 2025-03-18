/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectGrantFilter.h>
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

ProjectGrantFilter::ProjectGrantFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectGrantFilter& ProjectGrantFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainUnitFilter"))
  {
    m_domainUnitFilter = jsonValue.GetObject("domainUnitFilter");
    m_domainUnitFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectGrantFilter::Jsonize() const
{
  JsonValue payload;

  if(m_domainUnitFilterHasBeenSet)
  {
   payload.WithObject("domainUnitFilter", m_domainUnitFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
