/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartRecommendationsRequestEntry.h>
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

StartRecommendationsRequestEntry::StartRecommendationsRequestEntry() : 
    m_databaseIdHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

StartRecommendationsRequestEntry::StartRecommendationsRequestEntry(JsonView jsonValue) : 
    m_databaseIdHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

StartRecommendationsRequestEntry& StartRecommendationsRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");

    m_databaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue StartRecommendationsRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
