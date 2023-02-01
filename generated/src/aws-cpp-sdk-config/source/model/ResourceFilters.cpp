/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceFilters.h>
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

ResourceFilters::ResourceFilters() : 
    m_accountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

ResourceFilters::ResourceFilters(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceFilters& ResourceFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceFilters::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
