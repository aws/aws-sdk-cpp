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

#include <aws/fms/model/EvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

EvaluationResult::EvaluationResult() : 
    m_complianceStatus(PolicyComplianceStatusType::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_violatorCount(0),
    m_violatorCountHasBeenSet(false),
    m_evaluationLimitExceeded(false),
    m_evaluationLimitExceededHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(const JsonValue& jsonValue) : 
    m_complianceStatus(PolicyComplianceStatusType::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_violatorCount(0),
    m_violatorCountHasBeenSet(false),
    m_evaluationLimitExceeded(false),
    m_evaluationLimitExceededHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    m_complianceStatus = PolicyComplianceStatusTypeMapper::GetPolicyComplianceStatusTypeForName(jsonValue.GetString("ComplianceStatus"));

    m_complianceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolatorCount"))
  {
    m_violatorCount = jsonValue.GetInt64("ViolatorCount");

    m_violatorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationLimitExceeded"))
  {
    m_evaluationLimitExceeded = jsonValue.GetBool("EvaluationLimitExceeded");

    m_evaluationLimitExceededHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithString("ComplianceStatus", PolicyComplianceStatusTypeMapper::GetNameForPolicyComplianceStatusType(m_complianceStatus));
  }

  if(m_violatorCountHasBeenSet)
  {
   payload.WithInt64("ViolatorCount", m_violatorCount);

  }

  if(m_evaluationLimitExceededHasBeenSet)
  {
   payload.WithBool("EvaluationLimitExceeded", m_evaluationLimitExceeded);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
