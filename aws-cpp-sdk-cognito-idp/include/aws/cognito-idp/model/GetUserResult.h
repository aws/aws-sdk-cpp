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

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/MFAOptionType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server from the request to get information
   * about the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API GetUserResult
  {
  public:
    GetUserResult();
    GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline GetUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline GetUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user you wish to retrieve from the get user request.</p>
     */
    inline GetUserResult& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline GetUserResult& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline GetUserResult& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline GetUserResult& AddUserAttributes(const AttributeType& value) { m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline GetUserResult& AddUserAttributes(AttributeType&& value) { m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptions = value; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptions = std::move(value); }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline GetUserResult& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline GetUserResult& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline GetUserResult& AddMFAOptions(const MFAOptionType& value) { m_mFAOptions.push_back(value); return *this; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline GetUserResult& AddMFAOptions(MFAOptionType&& value) { m_mFAOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const{ return m_preferredMfaSetting; }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(const Aws::String& value) { m_preferredMfaSetting = value; }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(Aws::String&& value) { m_preferredMfaSetting = std::move(value); }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(const char* value) { m_preferredMfaSetting.assign(value); }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline GetUserResult& WithPreferredMfaSetting(const Aws::String& value) { SetPreferredMfaSetting(value); return *this;}

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline GetUserResult& WithPreferredMfaSetting(Aws::String&& value) { SetPreferredMfaSetting(std::move(value)); return *this;}

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline GetUserResult& WithPreferredMfaSetting(const char* value) { SetPreferredMfaSetting(value); return *this;}


    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserMFASettingList() const{ return m_userMFASettingList; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline void SetUserMFASettingList(const Aws::Vector<Aws::String>& value) { m_userMFASettingList = value; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline void SetUserMFASettingList(Aws::Vector<Aws::String>&& value) { m_userMFASettingList = std::move(value); }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline GetUserResult& WithUserMFASettingList(const Aws::Vector<Aws::String>& value) { SetUserMFASettingList(value); return *this;}

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline GetUserResult& WithUserMFASettingList(Aws::Vector<Aws::String>&& value) { SetUserMFASettingList(std::move(value)); return *this;}

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline GetUserResult& AddUserMFASettingList(const Aws::String& value) { m_userMFASettingList.push_back(value); return *this; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline GetUserResult& AddUserMFASettingList(Aws::String&& value) { m_userMFASettingList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline GetUserResult& AddUserMFASettingList(const char* value) { m_userMFASettingList.push_back(value); return *this; }

  private:

    Aws::String m_username;

    Aws::Vector<AttributeType> m_userAttributes;

    Aws::Vector<MFAOptionType> m_mFAOptions;

    Aws::String m_preferredMfaSetting;

    Aws::Vector<Aws::String> m_userMFASettingList;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
