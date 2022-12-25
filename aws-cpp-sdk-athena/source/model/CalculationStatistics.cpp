/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CalculationStatistics.h>
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

CalculationStatistics::CalculationStatistics() : 
    m_dpuExecutionInMillis(0),
    m_dpuExecutionInMillisHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CalculationStatistics::CalculationStatistics(JsonView jsonValue) : 
    m_dpuExecutionInMillis(0),
    m_dpuExecutionInMillisHasBeenSet(false),
    m_progressHasBeenSet(false)
{
  *this = jsonValue;
}

CalculationStatistics& CalculationStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DpuExecutionInMillis"))
  {
    m_dpuExecutionInMillis = jsonValue.GetInt64("DpuExecutionInMillis");

    m_dpuExecutionInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Progress"))
  {
    m_progress = jsonValue.GetString("Progress");

    m_progressHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculationStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_dpuExecutionInMillisHasBeenSet)
  {
   payload.WithInt64("DpuExecutionInMillis", m_dpuExecutionInMillis);

  }

  if(m_progressHasBeenSet)
  {
   payload.WithString("Progress", m_progress);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
