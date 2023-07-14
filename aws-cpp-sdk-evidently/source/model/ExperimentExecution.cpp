/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ExperimentExecution::ExperimentExecution() : 
    m_endedTimeHasBeenSet(false),
    m_startedTimeHasBeenSet(false)
{
}

ExperimentExecution::ExperimentExecution(JsonView jsonValue) : 
    m_endedTimeHasBeenSet(false),
    m_startedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentExecution& ExperimentExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endedTime"))
  {
    m_endedTime = jsonValue.GetDouble("endedTime");

    m_endedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedTime"))
  {
    m_startedTime = jsonValue.GetDouble("startedTime");

    m_startedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentExecution::Jsonize() const
{
  JsonValue payload;

  if(m_endedTimeHasBeenSet)
  {
   payload.WithDouble("endedTime", m_endedTime.SecondsWithMSPrecision());
  }

  if(m_startedTimeHasBeenSet)
  {
   payload.WithDouble("startedTime", m_startedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
