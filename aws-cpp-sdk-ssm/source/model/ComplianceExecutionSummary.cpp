/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ComplianceExecutionSummary::ComplianceExecutionSummary() : 
    m_executionTimeHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_executionTypeHasBeenSet(false)
{
}

ComplianceExecutionSummary::ComplianceExecutionSummary(JsonView jsonValue) : 
    m_executionTimeHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_executionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceExecutionSummary& ComplianceExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetDouble("ExecutionTime");

    m_executionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionType"))
  {
    m_executionType = jsonValue.GetString("ExecutionType");

    m_executionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionTime", m_executionTime.SecondsWithMSPrecision());
  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_executionTypeHasBeenSet)
  {
   payload.WithString("ExecutionType", m_executionType);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
