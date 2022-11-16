/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListEntitiesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ListEntitiesFilter::ListEntitiesFilter() : 
    m_parentEntityIdHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

ListEntitiesFilter::ListEntitiesFilter(JsonView jsonValue) : 
    m_parentEntityIdHasBeenSet(false),
    m_componentTypeIdHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListEntitiesFilter& ListEntitiesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parentEntityId"))
  {
    m_parentEntityId = jsonValue.GetString("parentEntityId");

    m_parentEntityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListEntitiesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_parentEntityIdHasBeenSet)
  {
   payload.WithString("parentEntityId", m_parentEntityId);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
