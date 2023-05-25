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
    AWS_IOT_API ResourceIdentifier();
    AWS_IOT_API ResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const{ return m_cognitoIdentityPoolId; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetCognitoIdentityPoolId(const Aws::String& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetCognitoIdentityPoolId(Aws::String&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetCognitoIdentityPoolId(const char* value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline ResourceIdentifier& WithCognitoIdentityPoolId(const Aws::String& value) { SetCognitoIdentityPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline ResourceIdentifier& WithCognitoIdentityPoolId(Aws::String&& value) { SetCognitoIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
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


    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline bool RoleAliasArnHasBeenSet() const { return m_roleAliasArnHasBeenSet; }

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = value; }

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::move(value); }

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn.assign(value); }

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role alias that has overly permissive actions.</p>
     */
    inline ResourceIdentifier& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}


    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline const IssuerCertificateIdentifier& GetIssuerCertificateIdentifier() const{ return m_issuerCertificateIdentifier; }

    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline bool IssuerCertificateIdentifierHasBeenSet() const { return m_issuerCertificateIdentifierHasBeenSet; }

    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline void SetIssuerCertificateIdentifier(const IssuerCertificateIdentifier& value) { m_issuerCertificateIdentifierHasBeenSet = true; m_issuerCertificateIdentifier = value; }

    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline void SetIssuerCertificateIdentifier(IssuerCertificateIdentifier&& value) { m_issuerCertificateIdentifierHasBeenSet = true; m_issuerCertificateIdentifier = std::move(value); }

    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline ResourceIdentifier& WithIssuerCertificateIdentifier(const IssuerCertificateIdentifier& value) { SetIssuerCertificateIdentifier(value); return *this;}

    /**
     * <p>The issuer certificate identifier.</p>
     */
    inline ResourceIdentifier& WithIssuerCertificateIdentifier(IssuerCertificateIdentifier&& value) { SetIssuerCertificateIdentifier(std::move(value)); return *this;}


    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline const Aws::String& GetDeviceCertificateArn() const{ return m_deviceCertificateArn; }

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline bool DeviceCertificateArnHasBeenSet() const { return m_deviceCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline void SetDeviceCertificateArn(const Aws::String& value) { m_deviceCertificateArnHasBeenSet = true; m_deviceCertificateArn = value; }

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline void SetDeviceCertificateArn(Aws::String&& value) { m_deviceCertificateArnHasBeenSet = true; m_deviceCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline void SetDeviceCertificateArn(const char* value) { m_deviceCertificateArnHasBeenSet = true; m_deviceCertificateArn.assign(value); }

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateArn(const Aws::String& value) { SetDeviceCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateArn(Aws::String&& value) { SetDeviceCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the identified device certificate.</p>
     */
    inline ResourceIdentifier& WithDeviceCertificateArn(const char* value) { SetDeviceCertificateArn(value); return *this;}

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
