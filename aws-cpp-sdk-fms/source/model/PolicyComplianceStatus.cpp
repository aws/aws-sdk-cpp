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

#include <aws/fms/model/PolicyComplianceStatus.h>
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

PolicyComplianceStatus::PolicyComplianceStatus() : 
    m_policyOwnerHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_evaluationResultsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

PolicyComplianceStatus::PolicyComplianceStatus(const JsonValue& jsonValue) : 
    m_policyOwnerHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_evaluationResultsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyComplianceStatus& PolicyComplianceStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PolicyOwner"))
  {
    m_policyOwner = jsonValue.GetString("PolicyOwner");

    m_policyOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberAccount"))
  {
    m_memberAccount = jsonValue.GetString("MemberAccount");

    m_memberAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationResults"))
  {
    Array<JsonValue> evaluationResultsJsonList = jsonValue.GetArray("EvaluationResults");
    for(unsigned evaluationResultsIndex = 0; evaluationResultsIndex < evaluationResultsJsonList.GetLength(); ++evaluationResultsIndex)
    {
      m_evaluationResults.push_back(evaluationResultsJsonList[evaluationResultsIndex].AsObject());
    }
    m_evaluationResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyComplianceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_policyOwnerHasBeenSet)
  {
   payload.WithString("PolicyOwner", m_policyOwner);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_memberAccountHasBeenSet)
  {
   payload.WithString("MemberAccount", m_memberAccount);

  }

  if(m_evaluationResultsHasBeenSet)
  {
   Array<JsonValue> evaluationResultsJsonList(m_evaluationResults.size());
   for(unsigned evaluationResultsIndex = 0; evaluationResultsIndex < evaluationResultsJsonList.GetLength(); ++evaluationResultsIndex)
   {
     evaluationResultsJsonList[evaluationResultsIndex].AsObject(m_evaluationResults[evaluationResultsIndex].Jsonize());
   }
   payload.WithArray("EvaluationResults", std::move(evaluationResultsJsonList));

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
