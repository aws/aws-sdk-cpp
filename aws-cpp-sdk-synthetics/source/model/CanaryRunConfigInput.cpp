/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunConfigInput.h>
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

CanaryRunConfigInput::CanaryRunConfigInput() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false)
{
}

CanaryRunConfigInput::CanaryRunConfigInput(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_memoryInMB(0),
    m_memoryInMBHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryRunConfigInput& CanaryRunConfigInput::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue CanaryRunConfigInput::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
