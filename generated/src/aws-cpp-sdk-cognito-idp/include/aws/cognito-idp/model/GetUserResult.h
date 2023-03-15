﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetUserResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline GetUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
     */
    inline GetUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user you want to retrieve from the get user request.</p>
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
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptions = value; }

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptions = std::move(value); }

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline GetUserResult& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline GetUserResult& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline GetUserResult& AddMFAOptions(const MFAOptionType& value) { m_mFAOptions.push_back(value); return *this; }

    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
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
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserMFASettingList() const{ return m_userMFASettingList; }

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline void SetUserMFASettingList(const Aws::Vector<Aws::String>& value) { m_userMFASettingList = value; }

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline void SetUserMFASettingList(Aws::Vector<Aws::String>&& value) { m_userMFASettingList = std::move(value); }

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline GetUserResult& WithUserMFASettingList(const Aws::Vector<Aws::String>& value) { SetUserMFASettingList(value); return *this;}

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline GetUserResult& WithUserMFASettingList(Aws::Vector<Aws::String>&& value) { SetUserMFASettingList(std::move(value)); return *this;}

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline GetUserResult& AddUserMFASettingList(const Aws::String& value) { m_userMFASettingList.push_back(value); return *this; }

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline GetUserResult& AddUserMFASettingList(Aws::String&& value) { m_userMFASettingList.push_back(std::move(value)); return *this; }

    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code> and <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline GetUserResult& AddUserMFASettingList(const char* value) { m_userMFASettingList.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_username;

    Aws::Vector<AttributeType> m_userAttributes;

    Aws::Vector<MFAOptionType> m_mFAOptions;

    Aws::String m_preferredMfaSetting;

    Aws::Vector<Aws::String> m_userMFASettingList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
