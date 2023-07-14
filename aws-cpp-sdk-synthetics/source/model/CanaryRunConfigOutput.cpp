/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunConfigOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRunConfigOutput::CanaryRunConfigOutput() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false),
    m_activeTracing(false),
    m_activeTracingHasBeenSet(false)
{
}

CanaryRunConfigOutput::CanaryRunConfigOutput(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false),
    m_activeTracing(false),
    m_activeTracingHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryRunConfigOutput& CanaryRunConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("TimeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryInMB"))
  {
    m_memoryInMB = jsonValue.GetInteger("MemoryInMB");

    m_memoryInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveTracing"))
  {
    m_activeTracing = jsonValue.GetBool("ActiveTracing");

    m_activeTracingHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryRunConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_memoryInMBHasBeenSet)
  {
   payload.WithInteger("MemoryInMB", m_memoryInMB);

  }

  if(m_activeTracingHasBeenSet)
  {
   payload.WithBool("ActiveTracing", m_activeTracing);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
