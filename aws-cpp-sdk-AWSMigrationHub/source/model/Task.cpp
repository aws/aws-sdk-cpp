/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/Task.h>
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

Task::Task() : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false)
{
}

Task::Task(JsonView jsonValue) : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false)
{
  *this = jsonValue;
}

Task& Task::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");

    m_statusDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetInteger("ProgressPercent");

    m_progressPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue Task::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_statusDetailHasBeenSet)
  {
   payload.WithString("StatusDetail", m_statusDetail);

  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithInteger("ProgressPercent", m_progressPercent);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
