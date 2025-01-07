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
    AWS_EC2_API VerifiedAccessEndpoint();
    AWS_EC2_API VerifiedAccessEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline const Aws::String& GetApplicationDomain() const{ return m_applicationDomain; }
    inline bool ApplicationDomainHasBeenSet() const { return m_applicationDomainHasBeenSet; }
    inline void SetApplicationDomain(const Aws::String& value) { m_applicationDomainHasBeenSet = true; m_applicationDomain = value; }
    inline void SetApplicationDomain(Aws::String&& value) { m_applicationDomainHasBeenSet = true; m_applicationDomain = std::move(value); }
    inline void SetApplicationDomain(const char* value) { m_applicationDomainHasBeenSet = true; m_applicationDomain.assign(value); }
    inline VerifiedAccessEndpoint& WithApplicationDomain(const Aws::String& value) { SetApplicationDomain(value); return *this;}
    inline VerifiedAccessEndpoint& WithApplicationDomain(Aws::String&& value) { SetApplicationDomain(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithApplicationDomain(const char* value) { SetApplicationDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline const VerifiedAccessEndpointType& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const VerifiedAccessEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(VerifiedAccessEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline VerifiedAccessEndpoint& WithEndpointType(const VerifiedAccessEndpointType& value) { SetEndpointType(value); return *this;}
    inline VerifiedAccessEndpoint& WithEndpointType(VerifiedAccessEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline const VerifiedAccessEndpointAttachmentType& GetAttachmentType() const{ return m_attachmentType; }
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
    inline void SetAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }
    inline void SetAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }
    inline VerifiedAccessEndpoint& WithAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { SetAttachmentType(value); return *this;}
    inline VerifiedAccessEndpoint& WithAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline const Aws::String& GetDomainCertificateArn() const{ return m_domainCertificateArn; }
    inline bool DomainCertificateArnHasBeenSet() const { return m_domainCertificateArnHasBeenSet; }
    inline void SetDomainCertificateArn(const Aws::String& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = value; }
    inline void SetDomainCertificateArn(Aws::String&& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = std::move(value); }
    inline void SetDomainCertificateArn(const char* value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn.assign(value); }
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(const Aws::String& value) { SetDomainCertificateArn(value); return *this;}
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(Aws::String&& value) { SetDomainCertificateArn(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(const char* value) { SetDomainCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline const Aws::String& GetEndpointDomain() const{ return m_endpointDomain; }
    inline bool EndpointDomainHasBeenSet() const { return m_endpointDomainHasBeenSet; }
    inline void SetEndpointDomain(const Aws::String& value) { m_endpointDomainHasBeenSet = true; m_endpointDomain = value; }
    inline void SetEndpointDomain(Aws::String&& value) { m_endpointDomainHasBeenSet = true; m_endpointDomain = std::move(value); }
    inline void SetEndpointDomain(const char* value) { m_endpointDomainHasBeenSet = true; m_endpointDomain.assign(value); }
    inline VerifiedAccessEndpoint& WithEndpointDomain(const Aws::String& value) { SetEndpointDomain(value); return *this;}
    inline VerifiedAccessEndpoint& WithEndpointDomain(Aws::String&& value) { SetEndpointDomain(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithEndpointDomain(const char* value) { SetEndpointDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline const Aws::String& GetDeviceValidationDomain() const{ return m_deviceValidationDomain; }
    inline bool DeviceValidationDomainHasBeenSet() const { return m_deviceValidationDomainHasBeenSet; }
    inline void SetDeviceValidationDomain(const Aws::String& value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain = value; }
    inline void SetDeviceValidationDomain(Aws::String&& value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain = std::move(value); }
    inline void SetDeviceValidationDomain(const char* value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain.assign(value); }
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(const Aws::String& value) { SetDeviceValidationDomain(value); return *this;}
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(Aws::String&& value) { SetDeviceValidationDomain(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(const char* value) { SetDeviceValidationDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VerifiedAccessEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VerifiedAccessEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline const VerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const{ return m_loadBalancerOptions; }
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }
    inline void SetLoadBalancerOptions(const VerifiedAccessEndpointLoadBalancerOptions& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = value; }
    inline void SetLoadBalancerOptions(VerifiedAccessEndpointLoadBalancerOptions&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::move(value); }
    inline VerifiedAccessEndpoint& WithLoadBalancerOptions(const VerifiedAccessEndpointLoadBalancerOptions& value) { SetLoadBalancerOptions(value); return *this;}
    inline VerifiedAccessEndpoint& WithLoadBalancerOptions(VerifiedAccessEndpointLoadBalancerOptions&& value) { SetLoadBalancerOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline const VerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const{ return m_networkInterfaceOptions; }
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }
    inline void SetNetworkInterfaceOptions(const VerifiedAccessEndpointEniOptions& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = value; }
    inline void SetNetworkInterfaceOptions(VerifiedAccessEndpointEniOptions&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::move(value); }
    inline VerifiedAccessEndpoint& WithNetworkInterfaceOptions(const VerifiedAccessEndpointEniOptions& value) { SetNetworkInterfaceOptions(value); return *this;}
    inline VerifiedAccessEndpoint& WithNetworkInterfaceOptions(VerifiedAccessEndpointEniOptions&& value) { SetNetworkInterfaceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint status.</p>
     */
    inline const VerifiedAccessEndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VerifiedAccessEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VerifiedAccessEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VerifiedAccessEndpoint& WithStatus(const VerifiedAccessEndpointStatus& value) { SetStatus(value); return *this;}
    inline VerifiedAccessEndpoint& WithStatus(VerifiedAccessEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VerifiedAccessEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VerifiedAccessEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline VerifiedAccessEndpoint& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline VerifiedAccessEndpoint& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }
    inline VerifiedAccessEndpoint& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}
    inline VerifiedAccessEndpoint& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VerifiedAccessEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VerifiedAccessEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VerifiedAccessEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VerifiedAccessEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const{ return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::move(value); }
    inline VerifiedAccessEndpoint& WithSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { SetSseSpecification(value); return *this;}
    inline VerifiedAccessEndpoint& WithSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { SetSseSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an RDS endpoint.</p>
     */
    inline const VerifiedAccessEndpointRdsOptions& GetRdsOptions() const{ return m_rdsOptions; }
    inline bool RdsOptionsHasBeenSet() const { return m_rdsOptionsHasBeenSet; }
    inline void SetRdsOptions(const VerifiedAccessEndpointRdsOptions& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = value; }
    inline void SetRdsOptions(VerifiedAccessEndpointRdsOptions&& value) { m_rdsOptionsHasBeenSet = true; m_rdsOptions = std::move(value); }
    inline VerifiedAccessEndpoint& WithRdsOptions(const VerifiedAccessEndpointRdsOptions& value) { SetRdsOptions(value); return *this;}
    inline VerifiedAccessEndpoint& WithRdsOptions(VerifiedAccessEndpointRdsOptions&& value) { SetRdsOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a CIDR endpoint.</p>
     */
    inline const VerifiedAccessEndpointCidrOptions& GetCidrOptions() const{ return m_cidrOptions; }
    inline bool CidrOptionsHasBeenSet() const { return m_cidrOptionsHasBeenSet; }
    inline void SetCidrOptions(const VerifiedAccessEndpointCidrOptions& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = value; }
    inline void SetCidrOptions(VerifiedAccessEndpointCidrOptions&& value) { m_cidrOptionsHasBeenSet = true; m_cidrOptions = std::move(value); }
    inline VerifiedAccessEndpoint& WithCidrOptions(const VerifiedAccessEndpointCidrOptions& value) { SetCidrOptions(value); return *this;}
    inline VerifiedAccessEndpoint& WithCidrOptions(VerifiedAccessEndpointCidrOptions&& value) { SetCidrOptions(std::move(value)); return *this;}
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

    VerifiedAccessEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    VerifiedAccessEndpointAttachmentType m_attachmentType;
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
