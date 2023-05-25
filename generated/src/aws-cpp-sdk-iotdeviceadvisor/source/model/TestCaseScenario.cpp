/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseScenario.h>
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

TestCaseScenario::TestCaseScenario() : 
    m_testCaseScenarioIdHasBeenSet(false),
    m_testCaseScenarioType(TestCaseScenarioType::NOT_SET),
    m_testCaseScenarioTypeHasBeenSet(false),
    m_status(TestCaseScenarioStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureHasBeenSet(false),
    m_systemMessageHasBeenSet(false)
{
}

TestCaseScenario::TestCaseScenario(JsonView jsonValue) : 
    m_testCaseScenarioIdHasBeenSet(false),
    m_testCaseScenarioType(TestCaseScenarioType::NOT_SET),
    m_testCaseScenarioTypeHasBeenSet(false),
    m_status(TestCaseScenarioStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureHasBeenSet(false),
    m_systemMessageHasBeenSet(false)
{
  *this = jsonValue;
}

TestCaseScenario& TestCaseScenario::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testCaseScenarioId"))
  {
    m_testCaseScenarioId = jsonValue.GetString("testCaseScenarioId");

    m_testCaseScenarioIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testCaseScenarioType"))
  {
    m_testCaseScenarioType = TestCaseScenarioTypeMapper::GetTestCaseScenarioTypeForName(jsonValue.GetString("testCaseScenarioType"));

    m_testCaseScenarioTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TestCaseScenarioStatusMapper::GetTestCaseScenarioStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failure"))
  {
    m_failure = jsonValue.GetString("failure");

    m_failureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemMessage"))
  {
    m_systemMessage = jsonValue.GetString("systemMessage");

    m_systemMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCaseScenario::Jsonize() const
{
  JsonValue payload;

  if(m_testCaseScenarioIdHasBeenSet)
  {
   payload.WithString("testCaseScenarioId", m_testCaseScenarioId);

  }

  if(m_testCaseScenarioTypeHasBeenSet)
  {
   payload.WithString("testCaseScenarioType", TestCaseScenarioTypeMapper::GetNameForTestCaseScenarioType(m_testCaseScenarioType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestCaseScenarioStatusMapper::GetNameForTestCaseScenarioStatus(m_status));
  }

  if(m_failureHasBeenSet)
  {
   payload.WithString("failure", m_failure);

  }

  if(m_systemMessageHasBeenSet)
  {
   payload.WithString("systemMessage", m_systemMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
