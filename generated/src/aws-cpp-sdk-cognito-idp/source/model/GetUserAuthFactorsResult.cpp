/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetUserAuthFactorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserAuthFactorsResult::GetUserAuthFactorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUserAuthFactorsResult& GetUserAuthFactorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredMfaSetting"))
  {
    m_preferredMfaSetting = jsonValue.GetString("PreferredMfaSetting");
    m_preferredMfaSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserMFASettingList"))
  {
    Aws::Utils::Array<JsonView> userMFASettingListJsonList = jsonValue.GetArray("UserMFASettingList");
    for(unsigned userMFASettingListIndex = 0; userMFASettingListIndex < userMFASettingListJsonList.GetLength(); ++userMFASettingListIndex)
    {
      m_userMFASettingList.push_back(userMFASettingListJsonList[userMFASettingListIndex].AsString());
    }
    m_userMFASettingListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfiguredUserAuthFactors"))
  {
    Aws::Utils::Array<JsonView> configuredUserAuthFactorsJsonList = jsonValue.GetArray("ConfiguredUserAuthFactors");
    for(unsigned configuredUserAuthFactorsIndex = 0; configuredUserAuthFactorsIndex < configuredUserAuthFactorsJsonList.GetLength(); ++configuredUserAuthFactorsIndex)
    {
      m_configuredUserAuthFactors.push_back(AuthFactorTypeMapper::GetAuthFactorTypeForName(configuredUserAuthFactorsJsonList[configuredUserAuthFactorsIndex].AsString()));
    }
    m_configuredUserAuthFactorsHasBeenSet = true;
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
