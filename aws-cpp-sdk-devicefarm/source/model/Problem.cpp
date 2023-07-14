/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Problem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Problem::Problem() : 
    m_runHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_suiteHasBeenSet(false),
    m_testHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

Problem::Problem(JsonView jsonValue) : 
    m_runHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_suiteHasBeenSet(false),
    m_testHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

Problem& Problem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("run"))
  {
    m_run = jsonValue.GetObject("run");

    m_runHasBeenSet = true;
  }

  if(jsonValue.ValueExists("job"))
  {
    m_job = jsonValue.GetObject("job");

    m_jobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suite"))
  {
    m_suite = jsonValue.GetObject("suite");

    m_suiteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("test"))
  {
    m_test = jsonValue.GetObject("test");

    m_testHasBeenSet = true;
  }

  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetObject("device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = ExecutionResultMapper::GetExecutionResultForName(jsonValue.GetString("result"));

    m_resultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue Problem::Jsonize() const
{
  JsonValue payload;

  if(m_runHasBeenSet)
  {
   payload.WithObject("run", m_run.Jsonize());

  }

  if(m_jobHasBeenSet)
  {
   payload.WithObject("job", m_job.Jsonize());

  }

  if(m_suiteHasBeenSet)
  {
   payload.WithObject("suite", m_suite.Jsonize());

  }

  if(m_testHasBeenSet)
  {
   payload.WithObject("test", m_test.Jsonize());

  }

  if(m_deviceHasBeenSet)
  {
   payload.WithObject("device", m_device.Jsonize());

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", ExecutionResultMapper::GetNameForExecutionResult(m_result));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
