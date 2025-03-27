/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UpdatePreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePreferencesResult::UpdatePreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePreferencesResult& UpdatePreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("managementAccountRateTypeSelections"))
  {
    Aws::Utils::Array<JsonView> managementAccountRateTypeSelectionsJsonList = jsonValue.GetArray("managementAccountRateTypeSelections");
    for(unsigned managementAccountRateTypeSelectionsIndex = 0; managementAccountRateTypeSelectionsIndex < managementAccountRateTypeSelectionsJsonList.GetLength(); ++managementAccountRateTypeSelectionsIndex)
    {
      m_managementAccountRateTypeSelections.push_back(RateTypeMapper::GetRateTypeForName(managementAccountRateTypeSelectionsJsonList[managementAccountRateTypeSelectionsIndex].AsString()));
    }
    m_managementAccountRateTypeSelectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memberAccountRateTypeSelections"))
  {
    Aws::Utils::Array<JsonView> memberAccountRateTypeSelectionsJsonList = jsonValue.GetArray("memberAccountRateTypeSelections");
    for(unsigned memberAccountRateTypeSelectionsIndex = 0; memberAccountRateTypeSelectionsIndex < memberAccountRateTypeSelectionsJsonList.GetLength(); ++memberAccountRateTypeSelectionsIndex)
    {
      m_memberAccountRateTypeSelections.push_back(RateTypeMapper::GetRateTypeForName(memberAccountRateTypeSelectionsJsonList[memberAccountRateTypeSelectionsIndex].AsString()));
    }
    m_memberAccountRateTypeSelectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("standaloneAccountRateTypeSelections"))
  {
    Aws::Utils::Array<JsonView> standaloneAccountRateTypeSelectionsJsonList = jsonValue.GetArray("standaloneAccountRateTypeSelections");
    for(unsigned standaloneAccountRateTypeSelectionsIndex = 0; standaloneAccountRateTypeSelectionsIndex < standaloneAccountRateTypeSelectionsJsonList.GetLength(); ++standaloneAccountRateTypeSelectionsIndex)
    {
      m_standaloneAccountRateTypeSelections.push_back(RateTypeMapper::GetRateTypeForName(standaloneAccountRateTypeSelectionsJsonList[standaloneAccountRateTypeSelectionsIndex].AsString()));
    }
    m_standaloneAccountRateTypeSelectionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
