/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/MigrationTaskSummary.h>
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

MigrationTaskSummary::MigrationTaskSummary() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
}

MigrationTaskSummary::MigrationTaskSummary(JsonView jsonValue) : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationTaskSummary& MigrationTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressUpdateStream"))
  {
    m_progressUpdateStream = jsonValue.GetString("ProgressUpdateStream");

    m_progressUpdateStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationTaskName"))
  {
    m_migrationTaskName = jsonValue.GetString("MigrationTaskName");

    m_migrationTaskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetInteger("ProgressPercent");

    m_progressPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");

    m_statusDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("UpdateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithInteger("ProgressPercent", m_progressPercent);

  }

  if(m_statusDetailHasBeenSet)
  {
   payload.WithString("StatusDetail", m_statusDetail);

  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
