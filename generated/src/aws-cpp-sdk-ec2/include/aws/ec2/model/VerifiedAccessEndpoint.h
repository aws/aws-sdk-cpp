/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessEndpointType.h>
#include <aws/ec2/model/VerifiedAccessEndpointAttachmentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessEndpointLoadBalancerOptions.h>
#include <aws/ec2/model/VerifiedAccessEndpointEniOptions.h>
#include <aws/ec2/model/VerifiedAccessEndpointStatus.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
#include <aws/ec2/model/VerifiedAccessEndpointRdsOptions.h>
#include <aws/ec2/model/VerifiedAccessEndpointCidrOptions.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>An Amazon Web Services Verified Access endpoint specifies the application
   * that Amazon Web Services Verified Access provides access to. It must be attached
   * to an Amazon Web Services Verified Access group. An Amazon Web Services Verified
   * Access endpoint must also have an attached access policy before you attached it
   * to a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessEndpoint">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessEndpoint
  {
  public:
    AWS_EC2_API VerifiedAccessEndpoint() = default;
    AWS_EC2_API VerifiedAccessEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const { return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    void SetVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::forward<VerifiedAccessGroupIdT>(value); }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    VerifiedAccessEndpoint& WithVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { SetVerifiedAccessGroupId(std::forward<VerifiedAccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const { return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    void SetVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::forward<VerifiedAccessEndpointIdT>(value); }
    template<typename VerifiedAccessEndpointIdT = Aws::String>
    VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(VerifiedAccessEndpointIdT&& value) { SetVerifiedAccessEndpointId(std::forward<VerifiedAccessEndpointIdT>(value)); return *this;}
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
    VerifiedAccessEndpoint& WithApplicationDomain(ApplicationDomainT&& value) { SetApplicationDomain(std::forward<ApplicationDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline VerifiedAccessEndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(VerifiedAccessEndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline VerifiedAccessEndpoint& WithEndpointType(VerifiedAccessEndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline VerifiedAccessEndpointAttachmentType GetAttachmentType() const { return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(VerifiedAccessEndpointAttachmentType value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline VerifiedAccessEndpoint& WithAttachmentType(VerifiedAccessEndpointAttachmentType value) { SetAttachmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline const Aws::String& GetDomainCertificateArn() const { return m_domainCertificateArn; }
    inline bool DomainCertificateArnHasBeenSet() const { return m_domainCertificateArnHasBeenSet; }
    template<typename DomainCertificateArnT = Aws::String>
    void SetDomainCertificateArn(DomainCertificateArnT&& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = std::forward<DomainCertificateArnT>(value); }
    template<typename DomainCertificateArnT = Aws::String>
    VerifiedAccessEndpoint& WithDomainCertificateArn(DomainCertificateArnT&& value) { SetDomainCertificateArn(std::forward<DomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline const Aws::String& GetEndpointDomain() const { return m_endpointDomain; }
    inline bool EndpointDomainHasBeenSet() const { return m_endpointDomainHasBeenSet; }
    template<typename EndpointDomainT = Aws::String>
    void SetEndpointDomain(EndpointDomainT&& value) { m_endpointDomainHasBeenSet = true; m_endpointDomain = std::forward<EndpointDomainT>(value); }
    template<typename EndpointDomainT = Aws::String>
    VerifiedAccessEndpoint& WithEndpointDomain(EndpointDomainT&& value) { SetEndpointDomain(std::forward<EndpointDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline const Aws::String& GetDeviceValidationDomain() const { return m_deviceValidationDomain; }
    inline bool DeviceValidationDomainHasBeenSet() const { return m_deviceValidationDomainHasBeenSet; }
    template<typename DeviceValidationDomainT = Aws::String>
    void SetDeviceValidationDomain(DeviceValidationDomainT&& value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain = std::forward<DeviceValidationDomainT>(value); }
    template<typename DeviceValidationDomainT = Aws::String>
    VerifiedAccessEndpoint& WithDeviceValidationDomain(DeviceValidationDomainT&& value) { SetDeviceValidationDomain(std::forward<DeviceValidationDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VerifiedAccessEndpoint& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VerifiedAccessEndpoint& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline const VerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const { return m_loadBalancerOptions; }
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }
    template<typename LoadBalancerOptionsT = VerifiedAccessEndpointLoadBalancerOptions>
    void SetLoadBalancerOptions(LoadBalancerOptionsT&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::forward<LoadBalancerOptionsT>(value); }
    template<typename LoadBalancerOptionsT = VerifiedAccessEndpointLoadBalancerOptions>
    VerifiedAccessEndpoint& WithLoadBalancerOptions(LoadBalancerOptionsT&& value) { SetLoadBalancerOptions(std::forward<LoadBalancerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline const VerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const { return m_networkInterfaceOptions; }
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }
    template<typename NetworkInterfaceOptionsT = VerifiedAccessEndpointEniOptions>
    void SetNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::forward<NetworkInterfaceOptionsT>(value); }
    template<typename NetworkInterfaceOptionsT = VerifiedAccessEndpointEniOptions>
    VerifiedAccessEndpoint& WithNetworkInterfaceOptions(NetworkInterfaceOptionsT&& value) { SetNetworkInterfaceOptions(std::forward<NetworkInterfaceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint status.</p>
     */
    inline const VerifiedAccessEndpointStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = VerifiedAccessEndpointStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = VerifiedAccessEndpointStatus>
    VerifiedAccessEndpoint& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VerifiedAccessEndpoint& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    VerifiedAccessEndpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    VerifiedAccessEndpoint& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const { return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    template<typename DeletionTimeT = Aws::String>
    void SetDeletionTime(DeletionTimeT&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::forward<DeletionTimeT>(value); }
    template<typename DeletionTimeT = Aws::String>
    VerifiedAccessEndpoint& WithDeletionTime(DeletionTimeT&& value) { SetDeletionTime(std::forward<DeletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VerifiedAccessEndpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VerifiedAccessEndpoint& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const { return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    void SetSseSpecification(SseSpecificationT&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::forward<SseSpecificationT>(value); }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    VerifiedAccessEndpoint& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an RDS endpoint.</p>
     */
    inline const VerifiedAccessEndpointRdsOptions& GetRdsOptions() const { return m_rdsOptions; }
    inline bool RdsOptionsHasBeenSet() const { return m_rdsOptionsHasBeenSet; }
    template<typename RdsOptionsT = VerifiedAccessEndpointRdsOptions>
    void SetRdsOptions(RdsOptionsT&& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = std::forward<RdsOptionsT>(value); }
    template<typename RdsOptionsT = VerifiedAccessEndpointRdsOptions>
    VerifiedAccessEndpoint& WithRdsOptions(RdsOptionsT&& value) { SetRdsOptions(std::forward<RdsOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a CIDR endpoint.</p>
     */
    inline const VerifiedAccessEndpointCidrOptions& GetCidrOptions() const { return m_cidrOptions; }
    inline bool CidrOptionsHasBeenSet() const { return m_cidrOptionsHasBeenSet; }
    template<typename CidrOptionsT = VerifiedAccessEndpointCidrOptions>
    void SetCidrOptions(CidrOptionsT&& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = std::forward<CidrOptionsT>(value); }
    template<typename CidrOptionsT = VerifiedAccessEndpointCidrOptions>
    VerifiedAccessEndpoint& WithCidrOptions(CidrOptionsT&& value) { SetCidrOptions(std::forward<CidrOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    Aws::String m_verifiedAccessEndpointId;
    bool m_verifiedAccessEndpointIdHasBeenSet = false;

    Aws::String m_applicationDomain;
    bool m_applicationDomainHasBeenSet = false;

    VerifiedAccessEndpointType m_endpointType{VerifiedAccessEndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    VerifiedAccessEndpointAttachmentType m_attachmentType{VerifiedAccessEndpointAttachmentType::NOT_SET};
    bool m_attachmentTypeHasBeenSet = false;

    Aws::String m_domainCertificateArn;
    bool m_domainCertificateArnHasBeenSet = false;

    Aws::String m_endpointDomain;
    bool m_endpointDomainHasBeenSet = false;

    Aws::String m_deviceValidationDomain;
    bool m_deviceValidationDomainHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    VerifiedAccessEndpointLoadBalancerOptions m_loadBalancerOptions;
    bool m_loadBalancerOptionsHasBeenSet = false;

    VerifiedAccessEndpointEniOptions m_networkInterfaceOptions;
    bool m_networkInterfaceOptionsHasBeenSet = false;

    VerifiedAccessEndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_deletionTime;
    bool m_deletionTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VerifiedAccessSseSpecificationResponse m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    VerifiedAccessEndpointRdsOptions m_rdsOptions;
    bool m_rdsOptionsHasBeenSet = false;

    VerifiedAccessEndpointCidrOptions m_cidrOptions;
    bool m_cidrOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
