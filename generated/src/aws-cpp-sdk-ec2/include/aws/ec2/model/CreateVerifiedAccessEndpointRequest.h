/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessEndpointType.h>
#include <aws/ec2/model/VerifiedAccessEndpointAttachmentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointLoadBalancerOptions.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointEniOptions.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointRdsOptions.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointCidrOptions.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateVerifiedAccessEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVerifiedAccessEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const { return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    void SetVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::forward<VerifiedAccessGroupIdT>(value); }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { SetVerifiedAccessGroupId(std::forward<VerifiedAccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Verified Access endpoint to create.</p>
     */
    inline VerifiedAccessEndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(VerifiedAccessEndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline CreateVerifiedAccessEndpointRequest& WithEndpointType(VerifiedAccessEndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment.</p>
     */
    inline VerifiedAccessEndpointAttachmentType GetAttachmentType() const { return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(VerifiedAccessEndpointAttachmentType value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline CreateVerifiedAccessEndpointRequest& WithAttachmentType(VerifiedAccessEndpointAttachmentType value) { SetAttachmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline const Aws::String& GetDomainCertificateArn() const { return m_domainCertificateArn; }
    inline bool DomainCertificateArnHasBeenSet() const { return m_domainCertificateArnHasBeenSet; }
    template<typename DomainCertificateArnT = Aws::String>
    void SetDomainCertificateArn(DomainCertificateArnT&& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = std::forward<DomainCertificateArnT>(value); }
    template<typename DomainCertificateArnT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithDomainCertificateArn(DomainCertificateArnT&& value) { SetDomainCertificateArn(std::forward<DomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline const Aws::String& GetApplicationDomain() const { return m_applicationDomain; }
    inline bool ApplicationDomainHasBeenSet() const { return m_applicationDomainHasBeenSet; }
    template<typename ApplicationDomainT = Aws::String>
    void SetApplicationDomain(ApplicationDomainT&& value) { m_applicationDomainHasBeenSet = true; m_applicationDomain = std::forward<ApplicationDomainT>(value); }
    template<typename ApplicationDomainT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithApplicationDomain(ApplicationDomainT&& value) { SetApplicationDomain(std::forward<ApplicationDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom identifier that is prepended to the DNS name that is generated for
     * the endpoint.</p>
     */
    inline const Aws::String& GetEndpointDomainPrefix() const { return m_endpointDomainPrefix; }
    inline bool EndpointDomainPrefixHasBeenSet() const { return m_endpointDomainPrefixHasBeenSet; }
    template<typename EndpointDomainPrefixT = Aws::String>
    void SetEndpointDomainPrefix(EndpointDomainPrefixT&& value) { m_endpointDomainPrefixHasBeenSet = true; m_endpointDomainPrefix = std::forward<EndpointDomainPrefixT>(value); }
    template<typename EndpointDomainPrefixT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithEndpointDomainPrefix(EndpointDomainPrefixT&& value) { SetEndpointDomainPrefix(std::forward<EndpointDomainPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups to associate with the Verified Access
     * endpoint. Required if <code>AttachmentType</code> is set to
     * <code>vpc</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateVerifiedAccessEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateVerifiedAccessEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load balancer details. This parameter is required if the endpoint type is
     * <code>load-balancer</code>.</p>
     */
    inline const CreateVerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const { return m_loadBalancerOptions; }
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }
    template<typename LoadBalancerOptionsT = CreateVerifiedAccessEndpointLoadBalancerOptions>
    void SetLoadBalancerOptions(LoadBalancerOptionsT&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::forward<LoadBalancerOptionsT>(value); }
    template<typename LoadBalancerOptionsT = CreateVerifiedAccessEndpointLoadBalancerOptions>
    CreateVerifiedAccessEndpointRequest& WithLoadBalancerOptions(LoadBalancerOptionsT&& value) { SetLoadBalancerOptions(std::forward<LoadBalancerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface details. This parameter is required if the endpoint
     * type is <code>network-interface</code>.</p>
     */
    inline const CreateVerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const { return m_networkInterfaceOptions; }
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }
    template<typename NetworkInterfaceOptionsT = CreateVerifiedAccessEndpointEniOptions>
    void SetNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::forward<NetworkInterfaceOptionsT>(value); }
    template<typename NetworkInterfaceOptionsT = CreateVerifiedAccessEndpointEniOptions>
    CreateVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { SetNetworkInterfaceOptions(std::forward<NetworkInterfaceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the Verified Access endpoint.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVerifiedAccessEndpointRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVerifiedAccessEndpointRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVerifiedAccessEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVerifiedAccessEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationRequest& GetSseSpecification() const { return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationRequest>
    void SetSseSpecification(SseSpecificationT&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::forward<SseSpecificationT>(value); }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationRequest>
    CreateVerifiedAccessEndpointRequest& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS details. This parameter is required if the endpoint type is
     * <code>rds</code>.</p>
     */
    inline const CreateVerifiedAccessEndpointRdsOptions& GetRdsOptions() const { return m_rdsOptions; }
    inline bool RdsOptionsHasBeenSet() const { return m_rdsOptionsHasBeenSet; }
    template<typename RdsOptionsT = CreateVerifiedAccessEndpointRdsOptions>
    void SetRdsOptions(RdsOptionsT&& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = std::forward<RdsOptionsT>(value); }
    template<typename RdsOptionsT = CreateVerifiedAccessEndpointRdsOptions>
    CreateVerifiedAccessEndpointRequest& WithRdsOptions(RdsOptionsT&& value) { SetRdsOptions(std::forward<RdsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR options. This parameter is required if the endpoint type is
     * <code>cidr</code>.</p>
     */
    inline const CreateVerifiedAccessEndpointCidrOptions& GetCidrOptions() const { return m_cidrOptions; }
    inline bool CidrOptionsHasBeenSet() const { return m_cidrOptionsHasBeenSet; }
    template<typename CidrOptionsT = CreateVerifiedAccessEndpointCidrOptions>
    void SetCidrOptions(CidrOptionsT&& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = std::forward<CidrOptionsT>(value); }
    template<typename CidrOptionsT = CreateVerifiedAccessEndpointCidrOptions>
    CreateVerifiedAccessEndpointRequest& WithCidrOptions(CidrOptionsT&& value) { SetCidrOptions(std::forward<CidrOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    VerifiedAccessEndpointType m_endpointType{VerifiedAccessEndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    VerifiedAccessEndpointAttachmentType m_attachmentType{VerifiedAccessEndpointAttachmentType::NOT_SET};
    bool m_attachmentTypeHasBeenSet = false;

    Aws::String m_domainCertificateArn;
    bool m_domainCertificateArnHasBeenSet = false;

    Aws::String m_applicationDomain;
    bool m_applicationDomainHasBeenSet = false;

    Aws::String m_endpointDomainPrefix;
    bool m_endpointDomainPrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    CreateVerifiedAccessEndpointLoadBalancerOptions m_loadBalancerOptions;
    bool m_loadBalancerOptionsHasBeenSet = false;

    CreateVerifiedAccessEndpointEniOptions m_networkInterfaceOptions;
    bool m_networkInterfaceOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    VerifiedAccessSseSpecificationRequest m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    CreateVerifiedAccessEndpointRdsOptions m_rdsOptions;
    bool m_rdsOptionsHasBeenSet = false;

    CreateVerifiedAccessEndpointCidrOptions m_cidrOptions;
    bool m_cidrOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
