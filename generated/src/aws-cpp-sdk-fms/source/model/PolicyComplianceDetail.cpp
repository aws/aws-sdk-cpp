/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PolicyComplianceDetail.h>
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

PolicyComplianceDetail::PolicyComplianceDetail() : 
    m_policyOwnerHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_violatorsHasBeenSet(false),
    m_evaluationLimitExceeded(false),
    m_evaluationLimitExceededHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_issueInfoMapHasBeenSet(false)
{
}

PolicyComplianceDetail::PolicyComplianceDetail(JsonView jsonValue) : 
    m_policyOwnerHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_violatorsHasBeenSet(false),
    m_evaluationLimitExceeded(false),
    m_evaluationLimitExceededHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_issueInfoMapHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyComplianceDetail& PolicyComplianceDetail::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("MemberAccount"))
  {
    m_memberAccount = jsonValue.GetString("MemberAccount");

    m_memberAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Violators"))
  {
    Aws::Utils::Array<JsonView> violatorsJsonList = jsonValue.GetArray("Violators");
    for(unsigned violatorsIndex = 0; violatorsIndex < violatorsJsonList.GetLength(); ++violatorsIndex)
    {
      m_violators.push_back(violatorsJsonList[violatorsIndex].AsObject());
    }
    m_violatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationLimitExceeded"))
  {
    m_evaluationLimitExceeded = jsonValue.GetBool("EvaluationLimitExceeded");

    m_evaluationLimitExceededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiredAt"))
  {
    m_expiredAt = jsonValue.GetDouble("ExpiredAt");

    m_expiredAtHasBeenSet = true;
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

JsonValue PolicyComplianceDetail::Jsonize() const
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

  if(m_memberAccountHasBeenSet)
  {
   payload.WithString("MemberAccount", m_memberAccount);

  }

  if(m_violatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> violatorsJsonList(m_violators.size());
   for(unsigned violatorsIndex = 0; violatorsIndex < violatorsJsonList.GetLength(); ++violatorsIndex)
   {
     violatorsJsonList[violatorsIndex].AsObject(m_violators[violatorsIndex].Jsonize());
   }
   payload.WithArray("Violators", std::move(violatorsJsonList));

  }

  if(m_evaluationLimitExceededHasBeenSet)
  {
   payload.WithBool("EvaluationLimitExceeded", m_evaluationLimitExceeded);

  }

  if(m_expiredAtHasBeenSet)
  {
   payload.WithDouble("ExpiredAt", m_expiredAt.SecondsWithMSPrecision());
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
