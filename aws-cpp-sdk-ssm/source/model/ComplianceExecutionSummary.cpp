/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

ComplianceExecutionSummary::ComplianceExecutionSummary(const JsonValue& jsonValue) : 
    m_executionTimeHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_executionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceExecutionSummary& ComplianceExecutionSummary::operator =(const JsonValue& jsonValue)
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
