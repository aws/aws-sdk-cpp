/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/UserType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserType::UserType() : 
    m_usernameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userCreateDateHasBeenSet(false),
    m_userLastModifiedDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_userStatus(UserStatusType::NOT_SET),
    m_userStatusHasBeenSet(false),
    m_mFAOptionsHasBeenSet(false)
{
}

UserType::UserType(const JsonValue& jsonValue) : 
    m_usernameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userCreateDateHasBeenSet(false),
    m_userLastModifiedDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_userStatus(UserStatusType::NOT_SET),
    m_userStatusHasBeenSet(false),
    m_mFAOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

UserType& UserType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Array<JsonValue> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserCreateDate"))
  {
    m_userCreateDate = jsonValue.GetDouble("UserCreateDate");

    m_userCreateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserLastModifiedDate"))
  {
    m_userLastModifiedDate = jsonValue.GetDouble("UserLastModifiedDate");

    m_userLastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserStatus"))
  {
    m_userStatus = UserStatusTypeMapper::GetUserStatusTypeForName(jsonValue.GetString("UserStatus"));

    m_userStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MFAOptions"))
  {
    Array<JsonValue> mFAOptionsJsonList = jsonValue.GetArray("MFAOptions");
    for(unsigned mFAOptionsIndex = 0; mFAOptionsIndex < mFAOptionsJsonList.GetLength(); ++mFAOptionsIndex)
    {
      m_mFAOptions.push_back(mFAOptionsJsonList[mFAOptionsIndex].AsObject());
    }
    m_mFAOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue UserType::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_userCreateDateHasBeenSet)
  {
   payload.WithDouble("UserCreateDate", m_userCreateDate.SecondsWithMSPrecision());
  }

  if(m_userLastModifiedDateHasBeenSet)
  {
   payload.WithDouble("UserLastModifiedDate", m_userLastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_userStatusHasBeenSet)
  {
   payload.WithString("UserStatus", UserStatusTypeMapper::GetNameForUserStatusType(m_userStatus));
  }

  if(m_mFAOptionsHasBeenSet)
  {
   Array<JsonValue> mFAOptionsJsonList(m_mFAOptions.size());
   for(unsigned mFAOptionsIndex = 0; mFAOptionsIndex < mFAOptionsJsonList.GetLength(); ++mFAOptionsIndex)
   {
     mFAOptionsJsonList[mFAOptionsIndex].AsObject(m_mFAOptions[mFAOptionsIndex].Jsonize());
   }
   payload.WithArray("MFAOptions", std::move(mFAOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws