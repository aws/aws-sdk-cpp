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

#include <aws/cognito-idp/model/AdminGetUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdminGetUserResult::AdminGetUserResult() : 
    m_enabled(false),
    m_userStatus(UserStatusType::NOT_SET)
{
}

AdminGetUserResult::AdminGetUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enabled(false),
    m_userStatus(UserStatusType::NOT_SET)
{
  *this = result;
}

AdminGetUserResult& AdminGetUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

  }

  if(jsonValue.ValueExists("UserAttributes"))
  {
    Array<JsonValue> userAttributesJsonList = jsonValue.GetArray("UserAttributes");
    for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
    {
      m_userAttributes.push_back(userAttributesJsonList[userAttributesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UserCreateDate"))
  {
    m_userCreateDate = jsonValue.GetDouble("UserCreateDate");

  }

  if(jsonValue.ValueExists("UserLastModifiedDate"))
  {
    m_userLastModifiedDate = jsonValue.GetDouble("UserLastModifiedDate");

  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

  }

  if(jsonValue.ValueExists("UserStatus"))
  {
    m_userStatus = UserStatusTypeMapper::GetUserStatusTypeForName(jsonValue.GetString("UserStatus"));

  }

  if(jsonValue.ValueExists("MFAOptions"))
  {
    Array<JsonValue> mFAOptionsJsonList = jsonValue.GetArray("MFAOptions");
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
    Array<JsonValue> userMFASettingListJsonList = jsonValue.GetArray("UserMFASettingList");
    for(unsigned userMFASettingListIndex = 0; userMFASettingListIndex < userMFASettingListJsonList.GetLength(); ++userMFASettingListIndex)
    {
      m_userMFASettingList.push_back(userMFASettingListJsonList[userMFASettingListIndex].AsString());
    }
  }



  return *this;
}
