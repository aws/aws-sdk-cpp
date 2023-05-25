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


    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetVerifiedAccessEndpointId() const{ return m_verifiedAccessEndpointId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool VerifiedAccessEndpointIdHasBeenSet() const { return m_verifiedAccessEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const Aws::String& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(Aws::String&& value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointId(const char* value) { m_verifiedAccessEndpointIdHasBeenSet = true; m_verifiedAccessEndpointId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(const Aws::String& value) { SetVerifiedAccessEndpointId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(Aws::String&& value) { SetVerifiedAccessEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithVerifiedAccessEndpointId(const char* value) { SetVerifiedAccessEndpointId(value); return *this;}


    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline const Aws::String& GetApplicationDomain() const{ return m_applicationDomain; }

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline bool ApplicationDomainHasBeenSet() const { return m_applicationDomainHasBeenSet; }

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline void SetApplicationDomain(const Aws::String& value) { m_applicationDomainHasBeenSet = true; m_applicationDomain = value; }

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline void SetApplicationDomain(Aws::String&& value) { m_applicationDomainHasBeenSet = true; m_applicationDomain = std::move(value); }

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline void SetApplicationDomain(const char* value) { m_applicationDomainHasBeenSet = true; m_applicationDomain.assign(value); }

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline VerifiedAccessEndpoint& WithApplicationDomain(const Aws::String& value) { SetApplicationDomain(value); return *this;}

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline VerifiedAccessEndpoint& WithApplicationDomain(Aws::String&& value) { SetApplicationDomain(std::move(value)); return *this;}

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline VerifiedAccessEndpoint& WithApplicationDomain(const char* value) { SetApplicationDomain(value); return *this;}


    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline const VerifiedAccessEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline void SetEndpointType(const VerifiedAccessEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline void SetEndpointType(VerifiedAccessEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline VerifiedAccessEndpoint& WithEndpointType(const VerifiedAccessEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint. Incoming
     * application requests will be sent to an IP address, load balancer or a network
     * interface depending on the endpoint type specified.</p>
     */
    inline VerifiedAccessEndpoint& WithEndpointType(VerifiedAccessEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline const VerifiedAccessEndpointAttachmentType& GetAttachmentType() const{ return m_attachmentType; }

    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }

    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline void SetAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }

    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline void SetAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }

    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline VerifiedAccessEndpoint& WithAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { SetAttachmentType(value); return *this;}

    /**
     * <p>The type of attachment used to provide connectivity between the Amazon Web
     * Services Verified Access endpoint and the application.</p>
     */
    inline VerifiedAccessEndpoint& WithAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}


    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline const Aws::String& GetDomainCertificateArn() const{ return m_domainCertificateArn; }

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline bool DomainCertificateArnHasBeenSet() const { return m_domainCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline void SetDomainCertificateArn(const Aws::String& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = value; }

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline void SetDomainCertificateArn(Aws::String&& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = std::move(value); }

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline void SetDomainCertificateArn(const char* value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn.assign(value); }

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(const Aws::String& value) { SetDomainCertificateArn(value); return *this;}

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(Aws::String&& value) { SetDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a public TLS/SSL certificate imported into or created with
     * ACM.</p>
     */
    inline VerifiedAccessEndpoint& WithDomainCertificateArn(const char* value) { SetDomainCertificateArn(value); return *this;}


    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline const Aws::String& GetEndpointDomain() const{ return m_endpointDomain; }

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline bool EndpointDomainHasBeenSet() const { return m_endpointDomainHasBeenSet; }

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline void SetEndpointDomain(const Aws::String& value) { m_endpointDomainHasBeenSet = true; m_endpointDomain = value; }

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline void SetEndpointDomain(Aws::String&& value) { m_endpointDomainHasBeenSet = true; m_endpointDomain = std::move(value); }

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline void SetEndpointDomain(const char* value) { m_endpointDomainHasBeenSet = true; m_endpointDomain.assign(value); }

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithEndpointDomain(const Aws::String& value) { SetEndpointDomain(value); return *this;}

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithEndpointDomain(Aws::String&& value) { SetEndpointDomain(std::move(value)); return *this;}

    /**
     * <p>A DNS name that is generated for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithEndpointDomain(const char* value) { SetEndpointDomain(value); return *this;}


    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline const Aws::String& GetDeviceValidationDomain() const{ return m_deviceValidationDomain; }

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline bool DeviceValidationDomainHasBeenSet() const { return m_deviceValidationDomainHasBeenSet; }

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline void SetDeviceValidationDomain(const Aws::String& value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain = value; }

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline void SetDeviceValidationDomain(Aws::String&& value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain = std::move(value); }

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline void SetDeviceValidationDomain(const char* value) { m_deviceValidationDomainHasBeenSet = true; m_deviceValidationDomain.assign(value); }

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(const Aws::String& value) { SetDeviceValidationDomain(value); return *this;}

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(Aws::String&& value) { SetDeviceValidationDomain(std::move(value)); return *this;}

    /**
     * <p>Returned if endpoint has a device trust provider attached.</p>
     */
    inline VerifiedAccessEndpoint& WithDeviceValidationDomain(const char* value) { SetDeviceValidationDomain(value); return *this;}


    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups for the endpoint.</p>
     */
    inline VerifiedAccessEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline const VerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const{ return m_loadBalancerOptions; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(const VerifiedAccessEndpointLoadBalancerOptions& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = value; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(VerifiedAccessEndpointLoadBalancerOptions&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::move(value); }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline VerifiedAccessEndpoint& WithLoadBalancerOptions(const VerifiedAccessEndpointLoadBalancerOptions& value) { SetLoadBalancerOptions(value); return *this;}

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline VerifiedAccessEndpoint& WithLoadBalancerOptions(VerifiedAccessEndpointLoadBalancerOptions&& value) { SetLoadBalancerOptions(std::move(value)); return *this;}


    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline const VerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const{ return m_networkInterfaceOptions; }

    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }

    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline void SetNetworkInterfaceOptions(const VerifiedAccessEndpointEniOptions& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = value; }

    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline void SetNetworkInterfaceOptions(VerifiedAccessEndpointEniOptions&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::move(value); }

    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithNetworkInterfaceOptions(const VerifiedAccessEndpointEniOptions& value) { SetNetworkInterfaceOptions(value); return *this;}

    /**
     * <p>The options for network-interface type endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithNetworkInterfaceOptions(VerifiedAccessEndpointEniOptions&& value) { SetNetworkInterfaceOptions(std::move(value)); return *this;}


    /**
     * <p>The endpoint status.</p>
     */
    inline const VerifiedAccessEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The endpoint status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The endpoint status.</p>
     */
    inline void SetStatus(const VerifiedAccessEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The endpoint status.</p>
     */
    inline void SetStatus(VerifiedAccessEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The endpoint status.</p>
     */
    inline VerifiedAccessEndpoint& WithStatus(const VerifiedAccessEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The endpoint status.</p>
     */
    inline VerifiedAccessEndpoint& WithStatus(VerifiedAccessEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline VerifiedAccessEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessEndpoint& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessEndpoint& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessEndpoint& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last updated time.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessEndpoint& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The deletion time.</p>
     */
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessEndpoint& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessEndpoint& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessEndpoint& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessEndpoint& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessEndpoint& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessEndpoint& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessEndpoint& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
