/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/SecurityPolicy.h>
#include <aws/apigateway/model/MutualTlsAuthenticationInput.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to create a new domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDomainNameRequest">AWS
   * API Reference</a></p>
   */
  class CreateDomainNameRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateDomainNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainName"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateDomainNameRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateDomainNameRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline CreateDomainNameRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline CreateDomainNameRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint for this domain name provided by your certificate
     * authority.</p>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::move(value); }
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }
    inline CreateDomainNameRequest& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}
    inline CreateDomainNameRequest& WithCertificateBody(Aws::String&& value) { SetCertificateBody(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline const Aws::String& GetCertificatePrivateKey() const{ return m_certificatePrivateKey; }
    inline bool CertificatePrivateKeyHasBeenSet() const { return m_certificatePrivateKeyHasBeenSet; }
    inline void SetCertificatePrivateKey(const Aws::String& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = value; }
    inline void SetCertificatePrivateKey(Aws::String&& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = std::move(value); }
    inline void SetCertificatePrivateKey(const char* value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey.assign(value); }
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const Aws::String& value) { SetCertificatePrivateKey(value); return *this;}
    inline CreateDomainNameRequest& WithCertificatePrivateKey(Aws::String&& value) { SetCertificatePrivateKey(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithCertificatePrivateKey(const char* value) { SetCertificatePrivateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] The intermediate certificates and optionally the root
     * certificate, one after the other without any blank lines, used by an
     * edge-optimized endpoint for this domain name. If you include the root
     * certificate, your certificate chain must start with intermediate certificates
     * and end with the root certificate. Use the intermediate certificates that were
     * provided by your certificate authority. Do not include any intermediaries that
     * are not in the chain of trust path.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }
    inline CreateDomainNameRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}
    inline CreateDomainNameRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline CreateDomainNameRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CreateDomainNameRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const{ return m_regionalCertificateName; }
    inline bool RegionalCertificateNameHasBeenSet() const { return m_regionalCertificateNameHasBeenSet; }
    inline void SetRegionalCertificateName(const Aws::String& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = value; }
    inline void SetRegionalCertificateName(Aws::String&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::move(value); }
    inline void SetRegionalCertificateName(const char* value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName.assign(value); }
    inline CreateDomainNameRequest& WithRegionalCertificateName(const Aws::String& value) { SetRegionalCertificateName(value); return *this;}
    inline CreateDomainNameRequest& WithRegionalCertificateName(Aws::String&& value) { SetRegionalCertificateName(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithRegionalCertificateName(const char* value) { SetRegionalCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by regional endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const{ return m_regionalCertificateArn; }
    inline bool RegionalCertificateArnHasBeenSet() const { return m_regionalCertificateArnHasBeenSet; }
    inline void SetRegionalCertificateArn(const Aws::String& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = value; }
    inline void SetRegionalCertificateArn(Aws::String&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::move(value); }
    inline void SetRegionalCertificateArn(const char* value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn.assign(value); }
    inline CreateDomainNameRequest& WithRegionalCertificateArn(const Aws::String& value) { SetRegionalCertificateArn(value); return *this;}
    inline CreateDomainNameRequest& WithRegionalCertificateArn(Aws::String&& value) { SetRegionalCertificateArn(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithRegionalCertificateArn(const char* value) { SetRegionalCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types of
     * the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline CreateDomainNameRequest& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline CreateDomainNameRequest& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDomainNameRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDomainNameRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDomainNameRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainNameRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline const SecurityPolicy& GetSecurityPolicy() const{ return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    inline void SetSecurityPolicy(const SecurityPolicy& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline void SetSecurityPolicy(SecurityPolicy&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::move(value); }
    inline CreateDomainNameRequest& WithSecurityPolicy(const SecurityPolicy& value) { SetSecurityPolicy(value); return *this;}
    inline CreateDomainNameRequest& WithSecurityPolicy(SecurityPolicy&& value) { SetSecurityPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MutualTlsAuthenticationInput& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    inline void SetMutualTlsAuthentication(const MutualTlsAuthenticationInput& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }
    inline void SetMutualTlsAuthentication(MutualTlsAuthenticationInput&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }
    inline CreateDomainNameRequest& WithMutualTlsAuthentication(const MutualTlsAuthenticationInput& value) { SetMutualTlsAuthentication(value); return *this;}
    inline CreateDomainNameRequest& WithMutualTlsAuthentication(MutualTlsAuthenticationInput&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const{ return m_ownershipVerificationCertificateArn; }
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }
    inline void SetOwnershipVerificationCertificateArn(const Aws::String& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = value; }
    inline void SetOwnershipVerificationCertificateArn(Aws::String&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::move(value); }
    inline void SetOwnershipVerificationCertificateArn(const char* value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn.assign(value); }
    inline CreateDomainNameRequest& WithOwnershipVerificationCertificateArn(const Aws::String& value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    inline CreateDomainNameRequest& WithOwnershipVerificationCertificateArn(Aws::String&& value) { SetOwnershipVerificationCertificateArn(std::move(value)); return *this;}
    inline CreateDomainNameRequest& WithOwnershipVerificationCertificateArn(const char* value) { SetOwnershipVerificationCertificateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet = false;

    Aws::String m_certificatePrivateKey;
    bool m_certificatePrivateKeyHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_regionalCertificateName;
    bool m_regionalCertificateNameHasBeenSet = false;

    Aws::String m_regionalCertificateArn;
    bool m_regionalCertificateArnHasBeenSet = false;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    SecurityPolicy m_securityPolicy;
    bool m_securityPolicyHasBeenSet = false;

    MutualTlsAuthenticationInput m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    Aws::String m_ownershipVerificationCertificateArn;
    bool m_ownershipVerificationCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
