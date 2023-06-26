/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Recommendation.h>
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

Recommendation::Recommendation() : 
    m_databaseIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_preferred(false),
    m_preferredHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_databaseIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_preferred(false),
    m_preferredHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Preferred"))
  {
    m_preferred = jsonValue.GetBool("Preferred");

    m_preferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetObject("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
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

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_preferredHasBeenSet)
  {
   payload.WithBool("Preferred", m_preferred);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("Data", m_data.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
