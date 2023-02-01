/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserResult::GetUserResult()
{
}

GetUserResult::GetUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUserResult& GetUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

  }

  if(jsonValue.ValueExists("UserAttributes"))
  {
    Aws::Utils::Array<JsonView> userAttributesJsonList = jsonValue.GetArray("UserAttributes");
    for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
    {
      m_userAttributes.push_back(userAttributesJsonList[userAttributesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MFAOptions"))
  {
    Aws::Utils::Array<JsonView> mFAOptionsJsonList = jsonValue.GetArray("MFAOptions");
    for(unsigned mFAOptionsIndex = 0; mFAOptionsIndex < mFAOptionsJsonList.GetLength(); ++mFAOptionsIndex)
    {
      m_mFAOptions.push_back(mFAOptionsJsonList[mFAOptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PreferredMfaSetting"))
  {
    m_preferredMfaSetting = jsonValue.GetString("PreferredMfaSetting");

  }

  if(jsonValue.ValueExists("UserMFASettingList"))
  {
    Aws::Utils::Array<JsonView> userMFASettingListJsonList = jsonValue.GetArray("UserMFASettingList");
    for(unsigned userMFASettingListIndex = 0; userMFASettingListIndex < userMFASettingListJsonList.GetLength(); ++userMFASettingListIndex)
    {
      m_userMFASettingList.push_back(userMFASettingListJsonList[userMFASettingListIndex].AsString());
    }
  }



  return *this;
}
