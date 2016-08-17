/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/devicefarm/model/Counters.h>
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

Counters::Counters() : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_warned(0),
    m_warnedHasBeenSet(false),
    m_errored(0),
    m_erroredHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
}

Counters::Counters(const JsonValue& jsonValue) : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_passed(0),
    m_passedHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_warned(0),
    m_warnedHasBeenSet(false),
    m_errored(0),
    m_erroredHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
  *this = jsonValue;
}

Counters& Counters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");

    m_totalHasBeenSet = true;
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

  if(jsonValue.ValueExists("warned"))
  {
    m_warned = jsonValue.GetInteger("warned");

    m_warnedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errored"))
  {
    m_errored = jsonValue.GetInteger("errored");

    m_erroredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopped"))
  {
    m_stopped = jsonValue.GetInteger("stopped");

    m_stoppedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipped"))
  {
    m_skipped = jsonValue.GetInteger("skipped");

    m_skippedHasBeenSet = true;
  }

  return *this;
}

JsonValue Counters::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  if(m_passedHasBeenSet)
  {
   payload.WithInteger("passed", m_passed);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_warnedHasBeenSet)
  {
   payload.WithInteger("warned", m_warned);

  }

  if(m_erroredHasBeenSet)
  {
   payload.WithInteger("errored", m_errored);

  }

  if(m_stoppedHasBeenSet)
  {
   payload.WithInteger("stopped", m_stopped);

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithInteger("skipped", m_skipped);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws