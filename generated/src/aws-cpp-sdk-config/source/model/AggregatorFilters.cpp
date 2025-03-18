/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregatorFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

AggregatorFilters::AggregatorFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregatorFilters& AggregatorFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetObject("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetObject("ServicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregatorFilters::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithObject("ResourceType", m_resourceType.Jsonize());

  }

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithObject("ServicePrincipal", m_servicePrincipal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
