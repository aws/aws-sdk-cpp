/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SessionStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

SessionStatistics::SessionStatistics() : 
    m_dpuExecutionInMillis(0),
    m_dpuExecutionInMillisHasBeenSet(false)
{
}

SessionStatistics::SessionStatistics(JsonView jsonValue) : 
    m_dpuExecutionInMillis(0),
    m_dpuExecutionInMillisHasBeenSet(false)
{
  *this = jsonValue;
}

SessionStatistics& SessionStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DpuExecutionInMillis"))
  {
    m_dpuExecutionInMillis = jsonValue.GetInt64("DpuExecutionInMillis");

    m_dpuExecutionInMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_dpuExecutionInMillisHasBeenSet)
  {
   payload.WithInt64("DpuExecutionInMillis", m_dpuExecutionInMillis);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
