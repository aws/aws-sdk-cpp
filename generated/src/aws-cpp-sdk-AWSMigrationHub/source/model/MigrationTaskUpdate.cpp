/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/MigrationTaskUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

MigrationTaskUpdate::MigrationTaskUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

MigrationTaskUpdate& MigrationTaskUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("UpdateDateTime");
    m_updateDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateType"))
  {
    m_updateType = UpdateTypeMapper::GetUpdateTypeForName(jsonValue.GetString("UpdateType"));
    m_updateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MigrationTaskState"))
  {
    m_migrationTaskState = jsonValue.GetObject("MigrationTaskState");
    m_migrationTaskStateHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationTaskUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("UpdateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  if(m_migrationTaskStateHasBeenSet)
  {
   payload.WithObject("MigrationTaskState", m_migrationTaskState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
