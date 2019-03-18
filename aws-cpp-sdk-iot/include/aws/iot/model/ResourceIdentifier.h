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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PolicyVersionIdentifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Information identifying the non-compliant resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ResourceIdentifier
  {
  public:
    ResourceIdentifier();
    ResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    ResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline const Aws::String& GetDeviceCertificateId() const{ return m_deviceCertificateId; }

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline bool DeviceCertificateIdHasBeenSet() const { return m_deviceCertificateIdHasBeenSet; }

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline void SetDeviceCertificateId(const Aws::String& value) { m_deviceCertificateIdHasBeenSet = true; m_deviceCertificateId = value; }

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline void SetDeviceCertificateId(Aws::String&& value) { m_deviceCertificateIdHasBeenSet = true; m_deviceCertificateId = std::move(value); }

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline void SetDeviceCertificateId(const char* value) { m_deviceCertificateIdHasBeenSet = true; m_deviceCertificateId.assign(value); }

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateId(const Aws::String& value) { SetDeviceCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateId(Aws::String&& value) { SetDeviceCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateId(const char* value) { SetDeviceCertificateId(value); return *this;}


    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const{ return m_caCertificateId; }

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline void SetCaCertificateId(const Aws::String& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = value; }

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline void SetCaCertificateId(Aws::String&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::move(value); }

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline void SetCaCertificateId(const char* value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId.assign(value); }

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline ResourceIdentifier& WithCaCertificateId(const Aws::String& value) { SetCaCertificateId(value); return *this;}

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline ResourceIdentifier& WithCaCertificateId(Aws::String&& value) { SetCaCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline ResourceIdentifier& WithCaCertificateId(const char* value) { SetCaCertificateId(value); return *this;}


    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const{ return m_cognitoIdentityPoolId; }

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline void SetCognitoIdentityPoolId(const Aws::String& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = value; }

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline void SetCognitoIdentityPoolId(Aws::String&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::move(value); }

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline void SetCognitoIdentityPoolId(const char* value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId.assign(value); }

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline ResourceIdentifier& WithCognitoIdentityPoolId(const Aws::String& value) { SetCognitoIdentityPoolId(value); return *this;}

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline ResourceIdentifier& WithCognitoIdentityPoolId(Aws::String&& value) { SetCognitoIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Cognito Identity Pool.</p>
     */
    inline ResourceIdentifier& WithCognitoIdentityPoolId(const char* value) { SetCognitoIdentityPoolId(value); return *this;}


    /**
     * <p>The client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID.</p>
     */
    inline ResourceIdentifier& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline ResourceIdentifier& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline ResourceIdentifier& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline const PolicyVersionIdentifier& GetPolicyVersionIdentifier() const{ return m_policyVersionIdentifier; }

    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline bool PolicyVersionIdentifierHasBeenSet() const { return m_policyVersionIdentifierHasBeenSet; }

    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline void SetPolicyVersionIdentifier(const PolicyVersionIdentifier& value) { m_policyVersionIdentifierHasBeenSet = true; m_policyVersionIdentifier = value; }

    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline void SetPolicyVersionIdentifier(PolicyVersionIdentifier&& value) { m_policyVersionIdentifierHasBeenSet = true; m_policyVersionIdentifier = std::move(value); }

    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline ResourceIdentifier& WithPolicyVersionIdentifier(const PolicyVersionIdentifier& value) { SetPolicyVersionIdentifier(value); return *this;}

    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline ResourceIdentifier& WithPolicyVersionIdentifier(PolicyVersionIdentifier&& value) { SetPolicyVersionIdentifier(std::move(value)); return *this;}


    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline ResourceIdentifier& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline ResourceIdentifier& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline ResourceIdentifier& WithAccount(const char* value) { SetAccount(value); return *this;}

  private:

    Aws::String m_deviceCertificateId;
    bool m_deviceCertificateIdHasBeenSet;

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet;

    Aws::String m_cognitoIdentityPoolId;
    bool m_cognitoIdentityPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    PolicyVersionIdentifier m_policyVersionIdentifier;
    bool m_policyVersionIdentifierHasBeenSet;

    Aws::String m_account;
    bool m_accountHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
