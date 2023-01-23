/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/SuiteRunInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

SuiteRunInformation::SuiteRunInformation() : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionVersionHasBeenSet(false),
    m_suiteDefinitionNameHasBeenSet(false),
    m_suiteRunIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_status(SuiteRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false)
{
}

SuiteRunInformation::SuiteRunInformation(JsonView jsonValue) : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionVersionHasBeenSet(false),
    m_suiteDefinitionNameHasBeenSet(false),
    m_suiteRunIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_status(SuiteRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false)
{
  *this = jsonValue;
}

SuiteRunInformation& SuiteRunInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("suiteDefinitionId"))
  {
    m_suiteDefinitionId = jsonValue.GetString("suiteDefinitionId");

    m_suiteDefinitionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suiteDefinitionVersion"))
  {
    m_suiteDefinitionVersion = jsonValue.GetString("suiteDefinitionVersion");

    m_suiteDefinitionVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suiteDefinitionName"))
  {
    m_suiteDefinitionName = jsonValue.GetString("suiteDefinitionName");

    m_suiteDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suiteRunId"))
  {
    m_suiteRunId = jsonValue.GetString("suiteRunId");

    m_suiteRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endAt"))
  {
    m_endAt = jsonValue.GetDouble("endAt");

    m_endAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SuiteRunStatusMapper::GetSuiteRunStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passed"))
  {
    m_passed = jsonValue.GetInteger("passed");

    m_passedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");

    m_failedHasBeenSet = true;
  }

  return *this;
}

JsonValue SuiteRunInformation::Jsonize() const
{
  JsonValue payload;

  if(m_suiteDefinitionIdHasBeenSet)
  {
   payload.WithString("suiteDefinitionId", m_suiteDefinitionId);

  }

  if(m_suiteDefinitionVersionHasBeenSet)
  {
   payload.WithString("suiteDefinitionVersion", m_suiteDefinitionVersion);

  }

  if(m_suiteDefinitionNameHasBeenSet)
  {
   payload.WithString("suiteDefinitionName", m_suiteDefinitionName);

  }

  if(m_suiteRunIdHasBeenSet)
  {
   payload.WithString("suiteRunId", m_suiteRunId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_endAtHasBeenSet)
  {
   payload.WithDouble("endAt", m_endAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SuiteRunStatusMapper::GetNameForSuiteRunStatus(m_status));
  }

  if(m_passedHasBeenSet)
  {
   payload.WithInteger("passed", m_passed);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
