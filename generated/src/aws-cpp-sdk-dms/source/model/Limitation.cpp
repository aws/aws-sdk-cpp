/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Limitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Limitation::Limitation() : 
    m_databaseIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Limitation::Limitation(JsonView jsonValue) : 
    m_databaseIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Limitation& Limitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");

    m_databaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineName"))
  {
    m_engineName = jsonValue.GetString("EngineName");

    m_engineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = jsonValue.GetString("Impact");

    m_impactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Limitation::Jsonize() const
{
  JsonValue payload;

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_engineNameHasBeenSet)
  {
   payload.WithString("EngineName", m_engineName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_impactHasBeenSet)
  {
   payload.WithString("Impact", m_impact);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
