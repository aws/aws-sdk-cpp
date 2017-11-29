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
#include <aws/cognito-idp/model/SmsMfaConfigType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaConfigType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
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
  class AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolMfaConfigResult
  {
  public:
    SetUserPoolMfaConfigResult();
    SetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SetUserPoolMfaConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfiguration = value; }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfiguration = std::move(value); }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The software token MFA configuration.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfiguration = value; }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfiguration = std::move(value); }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The MFA configuration.</p>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>The MFA configuration.</p>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfiguration = value; }

    /**
     * <p>The MFA configuration.</p>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfiguration = std::move(value); }

    /**
     * <p>The MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>The MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigResult& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}

  private:

    SmsMfaConfigType m_smsMfaConfiguration;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;

    UserPoolMfaType m_mfaConfiguration;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
