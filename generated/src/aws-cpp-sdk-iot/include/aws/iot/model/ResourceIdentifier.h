/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PolicyVersionIdentifier.h>
#include <aws/iot/model/IssuerCertificateIdentifier.h>
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
   * <p>Information that identifies the noncompliant resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class ResourceIdentifier
  {
  public:
    AWS_IOT_API ResourceIdentifier() = default;
    AWS_IOT_API ResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the certificate attached to the resource.</p>
     */
    inline const Aws::String& GetDeviceCertificateId() const { return m_deviceCertificateId; }
    inline bool DeviceCertificateIdHasBeenSet() const { return m_deviceCertificateIdHasBeenSet; }
    template<typename DeviceCertificateIdT = Aws::String>
    void SetDeviceCertificateId(DeviceCertificateIdT&& value) { m_deviceCertificateIdHasBeenSet = true; m_deviceCertificateId = std::forward<DeviceCertificateIdT>(value); }
    template<typename DeviceCertificateIdT = Aws::String>
    ResourceIdentifier& WithDeviceCertificateId(DeviceCertificateIdT&& value) { SetDeviceCertificateId(std::forward<DeviceCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the CA certificate used to authorize the certificate.</p>
     */
    inline const Aws::String& GetCaCertificateId() const { return m_caCertificateId; }
    inline bool CaCertificateIdHasBeenSet() const { return m_caCertificateIdHasBeenSet; }
    template<typename CaCertificateIdT = Aws::String>
    void SetCaCertificateId(CaCertificateIdT&& value) { m_caCertificateIdHasBeenSet = true; m_caCertificateId = std::forward<CaCertificateIdT>(value); }
    template<typename CaCertificateIdT = Aws::String>
    ResourceIdentifier& WithCaCertificateId(CaCertificateIdT&& value) { SetCaCertificateId(std::forward<CaCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const { return m_cognitoIdentityPoolId; }
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }
    template<typename CognitoIdentityPoolIdT = Aws::String>
    void SetCognitoIdentityPoolId(CognitoIdentityPoolIdT&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::forward<CognitoIdentityPoolIdT>(value); }
    template<typename CognitoIdentityPoolIdT = Aws::String>
    ResourceIdentifier& WithCognitoIdentityPoolId(CognitoIdentityPoolIdT&& value) { SetCognitoIdentityPoolId(std::forward<CognitoIdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client ID.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    ResourceIdentifier& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the policy associated with the resource.</p>
     */
    inline const PolicyVersionIdentifier& GetPolicyVersionIdentifier() const { return m_policyVersionIdentifier; }
    inline bool PolicyVersionIdentifierHasBeenSet() const { return m_policyVersionIdentifierHasBeenSet; }
    template<typename PolicyVersionIdentifierT = PolicyVersionIdentifier>
    void SetPolicyVersionIdentifier(PolicyVersionIdentifierT&& value) { m_policyVersionIdentifierHasBeenSet = true; m_policyVersionIdentifier = std::forward<PolicyVersionIdentifierT>(value); }
    template<typename PolicyVersionIdentifierT = PolicyVersionIdentifier>
    ResourceIdentifier& WithPolicyVersionIdentifier(PolicyVersionIdentifierT&& value) { SetPolicyVersionIdentifier(std::forward<PolicyVersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account with which the resource is associated.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    ResourceIdentifier& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ResourceIdentifier& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const { return m_roleAliasArn; }
    inline bool RoleAliasArnHasBeenSet() const { return m_roleAliasArnHasBeenSet; }
    template<typename RoleAliasArnT = Aws::String>
    void SetRoleAliasArn(RoleAliasArnT&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::forward<RoleAliasArnT>(value); }
    template<typename RoleAliasArnT = Aws::String>
    ResourceIdentifier& WithRoleAliasArn(RoleAliasArnT&& value) { SetRoleAliasArn(std::forward<RoleAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline const IssuerCertificateIdentifier& GetIssuerCertificateIdentifier() const { return m_issuerCertificateIdentifier; }
    inline bool IssuerCertificateIdentifierHasBeenSet() const { return m_issuerCertificateIdentifierHasBeenSet; }
    template<typename IssuerCertificateIdentifierT = IssuerCertificateIdentifier>
    void SetIssuerCertificateIdentifier(IssuerCertificateIdentifierT&& value) { m_issuerCertificateIdentifierHasBeenSet = true; m_issuerCertificateIdentifier = std::forward<IssuerCertificateIdentifierT>(value); }
    template<typename IssuerCertificateIdentifierT = IssuerCertificateIdentifier>
    ResourceIdentifier& WithIssuerCertificateIdentifier(IssuerCertificateIdentifierT&& value) { SetIssuerCertificateIdentifier(std::forward<IssuerCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline const Aws::String& GetDeviceCertificateArn() const { return m_deviceCertificateArn; }
    inline bool DeviceCertificateArnHasBeenSet() const { return m_deviceCertificateArnHasBeenSet; }
    template<typename DeviceCertificateArnT = Aws::String>
    void SetDeviceCertificateArn(DeviceCertificateArnT&& value) { m_deviceCertificateArnHasBeenSet = true; m_deviceCertificateArn = std::forward<DeviceCertificateArnT>(value); }
    template<typename DeviceCertificateArnT = Aws::String>
    ResourceIdentifier& WithDeviceCertificateArn(DeviceCertificateArnT&& value) { SetDeviceCertificateArn(std::forward<DeviceCertificateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceCertificateId;
    bool m_deviceCertificateIdHasBeenSet = false;

    Aws::String m_caCertificateId;
    bool m_caCertificateIdHasBeenSet = false;

    Aws::String m_cognitoIdentityPoolId;
    bool m_cognitoIdentityPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    PolicyVersionIdentifier m_policyVersionIdentifier;
    bool m_policyVersionIdentifierHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_roleAliasArn;
    bool m_roleAliasArnHasBeenSet = false;

    IssuerCertificateIdentifier m_issuerCertificateIdentifier;
    bool m_issuerCertificateIdentifierHasBeenSet = false;

    Aws::String m_deviceCertificateArn;
    bool m_deviceCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
