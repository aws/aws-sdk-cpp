/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/Change.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

Change::Change() : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Change::Change(JsonView jsonValue) : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

Change& Change::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeType"))
  {
    m_changeType = jsonValue.GetString("ChangeType");

    m_changeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entity"))
  {
    m_entity = jsonValue.GetObject("Entity");

    m_entityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Change::Jsonize() const
{
  JsonValue payload;

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("ChangeType", m_changeType);

  }

  if(m_entityHasBeenSet)
  {
   payload.WithObject("Entity", m_entity.Jsonize());

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
