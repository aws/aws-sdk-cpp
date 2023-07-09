/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Tenant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

Tenant::Tenant() : 
    m_tenantIdentifierHasBeenSet(false),
    m_tenantDisplayNameHasBeenSet(false)
{
}

Tenant::Tenant(JsonView jsonValue) : 
    m_tenantIdentifierHasBeenSet(false),
    m_tenantDisplayNameHasBeenSet(false)
{
  *this = jsonValue;
}

Tenant& Tenant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tenantIdentifier"))
  {
    m_tenantIdentifier = jsonValue.GetString("tenantIdentifier");

    m_tenantIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenantDisplayName"))
  {
    m_tenantDisplayName = jsonValue.GetString("tenantDisplayName");

    m_tenantDisplayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Tenant::Jsonize() const
{
  JsonValue payload;

  if(m_tenantIdentifierHasBeenSet)
  {
   payload.WithString("tenantIdentifier", m_tenantIdentifier);

  }

  if(m_tenantDisplayNameHasBeenSet)
  {
   payload.WithString("tenantDisplayName", m_tenantDisplayName);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
