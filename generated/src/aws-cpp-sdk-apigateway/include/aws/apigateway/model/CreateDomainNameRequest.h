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
#include <aws/apigateway/model/RoutingMode.h>
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
    AWS_APIGATEWAY_API CreateDomainNameRequest() = default;

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
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainNameRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by edge-optimized
     * endpoint or private endpoint for this domain name.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CreateDomainNameRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] The body of the server certificate that will be used by
     * edge-optimized endpoint or private endpoint for this domain name provided by
     * your certificate authority.</p>
     */
    inline const Aws::String& GetCertificateBody() const { return m_certificateBody; }
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }
    template<typename CertificateBodyT = Aws::String>
    void SetCertificateBody(CertificateBodyT&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::forward<CertificateBodyT>(value); }
    template<typename CertificateBodyT = Aws::String>
    CreateDomainNameRequest& WithCertificateBody(CertificateBodyT&& value) { SetCertificateBody(std::forward<CertificateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] Your edge-optimized endpoint's domain name certificate's private
     * key.</p>
     */
    inline const Aws::String& GetCertificatePrivateKey() const { return m_certificatePrivateKey; }
    inline bool CertificatePrivateKeyHasBeenSet() const { return m_certificatePrivateKeyHasBeenSet; }
    template<typename CertificatePrivateKeyT = Aws::String>
    void SetCertificatePrivateKey(CertificatePrivateKeyT&& value) { m_certificatePrivateKeyHasBeenSet = true; m_certificatePrivateKey = std::forward<CertificatePrivateKeyT>(value); }
    template<typename CertificatePrivateKeyT = Aws::String>
    CreateDomainNameRequest& WithCertificatePrivateKey(CertificatePrivateKeyT&& value) { SetCertificatePrivateKey(std::forward<CertificatePrivateKeyT>(value)); return *this;}
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
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    CreateDomainNameRequest& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by edge-optimized endpoint or private endpoint for this domain name. Certificate
     * Manager is the only supported source.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CreateDomainNameRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the certificate that will be used by regional
     * endpoint for this domain name.</p>
     */
    inline const Aws::String& GetRegionalCertificateName() const { return m_regionalCertificateName; }
    inline bool RegionalCertificateNameHasBeenSet() const { return m_regionalCertificateNameHasBeenSet; }
    template<typename RegionalCertificateNameT = Aws::String>
    void SetRegionalCertificateName(RegionalCertificateNameT&& value) { m_regionalCertificateNameHasBeenSet = true; m_regionalCertificateName = std::forward<RegionalCertificateNameT>(value); }
    template<typename RegionalCertificateNameT = Aws::String>
    CreateDomainNameRequest& WithRegionalCertificateName(RegionalCertificateNameT&& value) { SetRegionalCertificateName(std::forward<RegionalCertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference to an Amazon Web Services-managed certificate that will be used
     * by regional endpoint for this domain name. Certificate Manager is the only
     * supported source.</p>
     */
    inline const Aws::String& GetRegionalCertificateArn() const { return m_regionalCertificateArn; }
    inline bool RegionalCertificateArnHasBeenSet() const { return m_regionalCertificateArnHasBeenSet; }
    template<typename RegionalCertificateArnT = Aws::String>
    void SetRegionalCertificateArn(RegionalCertificateArnT&& value) { m_regionalCertificateArnHasBeenSet = true; m_regionalCertificateArn = std::forward<RegionalCertificateArnT>(value); }
    template<typename RegionalCertificateArnT = Aws::String>
    CreateDomainNameRequest& WithRegionalCertificateArn(RegionalCertificateArnT&& value) { SetRegionalCertificateArn(std::forward<RegionalCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this DomainName showing the endpoint types and
     * IP address types of the domain name. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    CreateDomainNameRequest& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainNameRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDomainNameRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Transport Layer Security (TLS) version + cipher suite for this
     * DomainName. The valid values are <code>TLS_1_0</code> and
     * <code>TLS_1_2</code>.</p>
     */
    inline SecurityPolicy GetSecurityPolicy() const { return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    inline void SetSecurityPolicy(SecurityPolicy value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = value; }
    inline CreateDomainNameRequest& WithSecurityPolicy(SecurityPolicy value) { SetSecurityPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const MutualTlsAuthenticationInput& GetMutualTlsAuthentication() const { return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthenticationInput>
    void SetMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::forward<MutualTlsAuthenticationT>(value); }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthenticationInput>
    CreateDomainNameRequest& WithMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { SetMutualTlsAuthentication(std::forward<MutualTlsAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public certificate issued by ACM to validate ownership of your
     * custom domain. Only required when configuring mutual TLS and using an ACM
     * imported or private CA certificate ARN as the regionalCertificateArn.</p>
     */
    inline const Aws::String& GetOwnershipVerificationCertificateArn() const { return m_ownershipVerificationCertificateArn; }
    inline bool OwnershipVerificationCertificateArnHasBeenSet() const { return m_ownershipVerificationCertificateArnHasBeenSet; }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    void SetOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { m_ownershipVerificationCertificateArnHasBeenSet = true; m_ownershipVerificationCertificateArn = std::forward<OwnershipVerificationCertificateArnT>(value); }
    template<typename OwnershipVerificationCertificateArnT = Aws::String>
    CreateDomainNameRequest& WithOwnershipVerificationCertificateArn(OwnershipVerificationCertificateArnT&& value) { SetOwnershipVerificationCertificateArn(std::forward<OwnershipVerificationCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to the
     * <code>execute-api</code> service for this DomainName regardless of the caller
     * and Method configuration. Supported only for private custom domain names.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    CreateDomainNameRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The routing mode for this domain name. The routing mode determines how API
     * Gateway sends traffic from your custom domain name to your private APIs. </p>
     */
    inline RoutingMode GetRoutingMode() const { return m_routingMode; }
    inline bool RoutingModeHasBeenSet() const { return m_routingModeHasBeenSet; }
    inline void SetRoutingMode(RoutingMode value) { m_routingModeHasBeenSet = true; m_routingMode = value; }
    inline CreateDomainNameRequest& WithRoutingMode(RoutingMode value) { SetRoutingMode(value); return *this;}
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

    SecurityPolicy m_securityPolicy{SecurityPolicy::NOT_SET};
    bool m_securityPolicyHasBeenSet = false;

    MutualTlsAuthenticationInput m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    Aws::String m_ownershipVerificationCertificateArn;
    bool m_ownershipVerificationCertificateArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    RoutingMode m_routingMode{RoutingMode::NOT_SET};
    bool m_routingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
