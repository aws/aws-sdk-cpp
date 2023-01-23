/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogSchemaChangePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogSchemaChangePolicy::CatalogSchemaChangePolicy() : 
    m_enableUpdateCatalog(false),
    m_enableUpdateCatalogHasBeenSet(false),
    m_updateBehavior(UpdateCatalogBehavior::NOT_SET),
    m_updateBehaviorHasBeenSet(false)
{
}

CatalogSchemaChangePolicy::CatalogSchemaChangePolicy(JsonView jsonValue) : 
    m_enableUpdateCatalog(false),
    m_enableUpdateCatalogHasBeenSet(false),
    m_updateBehavior(UpdateCatalogBehavior::NOT_SET),
    m_updateBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogSchemaChangePolicy& CatalogSchemaChangePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableUpdateCatalog"))
  {
    m_enableUpdateCatalog = jsonValue.GetBool("EnableUpdateCatalog");

    m_enableUpdateCatalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateBehavior"))
  {
    m_updateBehavior = UpdateCatalogBehaviorMapper::GetUpdateCatalogBehaviorForName(jsonValue.GetString("UpdateBehavior"));

    m_updateBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogSchemaChangePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_enableUpdateCatalogHasBeenSet)
  {
   payload.WithBool("EnableUpdateCatalog", m_enableUpdateCatalog);

  }

  if(m_updateBehaviorHasBeenSet)
  {
   payload.WithString("UpdateBehavior", UpdateCatalogBehaviorMapper::GetNameForUpdateCatalogBehavior(m_updateBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
