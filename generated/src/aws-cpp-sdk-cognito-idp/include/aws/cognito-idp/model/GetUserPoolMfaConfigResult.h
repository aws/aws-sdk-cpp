/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/SmsMfaConfigType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaConfigType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetUserPoolMfaConfigResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SMS text message multi-factor authentication (MFA) configuration.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) configuration.</p>
     */
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfiguration = value; }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) configuration.</p>
     */
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfiguration = std::move(value); }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) configuration.</p>
     */
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}

    /**
     * <p>The SMS text message multi-factor authentication (MFA) configuration.</p>
     */
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The software token multi-factor authentication (MFA) configuration.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }

    /**
     * <p>The software token multi-factor authentication (MFA) configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfiguration = value; }

    /**
     * <p>The software token multi-factor authentication (MFA) configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfiguration = std::move(value); }

    /**
     * <p>The software token multi-factor authentication (MFA) configuration.</p>
     */
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}

    /**
     * <p>The software token multi-factor authentication (MFA) configuration.</p>
     */
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfiguration = value; }

    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfiguration = std::move(value); }

    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUserPoolMfaConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUserPoolMfaConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUserPoolMfaConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SmsMfaConfigType m_smsMfaConfiguration;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;

    UserPoolMfaType m_mfaConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
