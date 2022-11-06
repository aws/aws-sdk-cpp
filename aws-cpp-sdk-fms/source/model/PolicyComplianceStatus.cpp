/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_lastUpdatedHasBeenSet(false),
    m_issueInfoMapHasBeenSet(false)
{
}

PolicyComplianceStatus::PolicyComplianceStatus(JsonView jsonValue) : 
    m_policyOwnerHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_evaluationResultsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_issueInfoMapHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyComplianceStatus& PolicyComplianceStatus::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> evaluationResultsJsonList = jsonValue.GetArray("EvaluationResults");
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

  if(jsonValue.ValueExists("IssueInfoMap"))
  {
    Aws::Map<Aws::String, JsonView> issueInfoMapJsonMap = jsonValue.GetObject("IssueInfoMap").GetAllObjects();
    for(auto& issueInfoMapItem : issueInfoMapJsonMap)
    {
      m_issueInfoMap[DependentServiceNameMapper::GetDependentServiceNameForName(issueInfoMapItem.first)] = issueInfoMapItem.second.AsString();
    }
    m_issueInfoMapHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> evaluationResultsJsonList(m_evaluationResults.size());
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

  if(m_issueInfoMapHasBeenSet)
  {
   JsonValue issueInfoMapJsonMap;
   for(auto& issueInfoMapItem : m_issueInfoMap)
   {
     issueInfoMapJsonMap.WithString(DependentServiceNameMapper::GetNameForDependentServiceName(issueInfoMapItem.first), issueInfoMapItem.second);
   }
   payload.WithObject("IssueInfoMap", std::move(issueInfoMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
