/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseRun.h>
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

TestCaseRun::TestCaseRun() : 
    m_testCaseRunIdHasBeenSet(false),
    m_testCaseDefinitionIdHasBeenSet(false),
    m_testCaseDefinitionNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_failureHasBeenSet(false),
    m_testScenariosHasBeenSet(false)
{
}

TestCaseRun::TestCaseRun(JsonView jsonValue) : 
    m_testCaseRunIdHasBeenSet(false),
    m_testCaseDefinitionIdHasBeenSet(false),
    m_testCaseDefinitionNameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_failureHasBeenSet(false),
    m_testScenariosHasBeenSet(false)
{
  *this = jsonValue;
}

TestCaseRun& TestCaseRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testCaseRunId"))
  {
    m_testCaseRunId = jsonValue.GetString("testCaseRunId");

    m_testCaseRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testCaseDefinitionId"))
  {
    m_testCaseDefinitionId = jsonValue.GetString("testCaseDefinitionId");

    m_testCaseDefinitionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testCaseDefinitionName"))
  {
    m_testCaseDefinitionName = jsonValue.GetString("testCaseDefinitionName");

    m_testCaseDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logUrl"))
  {
    m_logUrl = jsonValue.GetString("logUrl");

    m_logUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warnings"))
  {
    m_warnings = jsonValue.GetString("warnings");

    m_warningsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failure"))
  {
    m_failure = jsonValue.GetString("failure");

    m_failureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testScenarios"))
  {
    Aws::Utils::Array<JsonView> testScenariosJsonList = jsonValue.GetArray("testScenarios");
    for(unsigned testScenariosIndex = 0; testScenariosIndex < testScenariosJsonList.GetLength(); ++testScenariosIndex)
    {
      m_testScenarios.push_back(testScenariosJsonList[testScenariosIndex].AsObject());
    }
    m_testScenariosHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCaseRun::Jsonize() const
{
  JsonValue payload;

  if(m_testCaseRunIdHasBeenSet)
  {
   payload.WithString("testCaseRunId", m_testCaseRunId);

  }

  if(m_testCaseDefinitionIdHasBeenSet)
  {
   payload.WithString("testCaseDefinitionId", m_testCaseDefinitionId);

  }

  if(m_testCaseDefinitionNameHasBeenSet)
  {
   payload.WithString("testCaseDefinitionName", m_testCaseDefinitionName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_logUrlHasBeenSet)
  {
   payload.WithString("logUrl", m_logUrl);

  }

  if(m_warningsHasBeenSet)
  {
   payload.WithString("warnings", m_warnings);

  }

  if(m_failureHasBeenSet)
  {
   payload.WithString("failure", m_failure);

  }

  if(m_testScenariosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> testScenariosJsonList(m_testScenarios.size());
   for(unsigned testScenariosIndex = 0; testScenariosIndex < testScenariosJsonList.GetLength(); ++testScenariosIndex)
   {
     testScenariosJsonList[testScenariosIndex].AsObject(m_testScenarios[testScenariosIndex].Jsonize());
   }
   payload.WithArray("testScenarios", std::move(testScenariosJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
