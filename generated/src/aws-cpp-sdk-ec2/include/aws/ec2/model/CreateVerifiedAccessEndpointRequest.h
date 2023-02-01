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
    AWS_EC2_API CreateVerifiedAccessEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVerifiedAccessEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Verified Access group to associate the endpoint with.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}


    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline const VerifiedAccessEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline void SetEndpointType(const VerifiedAccessEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline void SetEndpointType(VerifiedAccessEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithEndpointType(const VerifiedAccessEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services Verified Access endpoint to create.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithEndpointType(VerifiedAccessEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline const VerifiedAccessEndpointAttachmentType& GetAttachmentType() const{ return m_attachmentType; }

    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline void SetAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = value; }

    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline void SetAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { m_attachmentTypeHasBeenSet = true; m_attachmentType = std::move(value); }

    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithAttachmentType(const VerifiedAccessEndpointAttachmentType& value) { SetAttachmentType(value); return *this;}

    /**
     * <p>The Amazon Web Services network component Verified Access attaches to.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithAttachmentType(VerifiedAccessEndpointAttachmentType&& value) { SetAttachmentType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline const Aws::String& GetDomainCertificateArn() const{ return m_domainCertificateArn; }

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline bool DomainCertificateArnHasBeenSet() const { return m_domainCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline void SetDomainCertificateArn(const Aws::String& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = value; }

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline void SetDomainCertificateArn(Aws::String&& value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline void SetDomainCertificateArn(const char* value) { m_domainCertificateArnHasBeenSet = true; m_domainCertificateArn.assign(value); }

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDomainCertificateArn(const Aws::String& value) { SetDomainCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDomainCertificateArn(Aws::String&& value) { SetDomainCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the public TLS/SSL certificate in Amazon Web Services Certificate
     * Manager to associate with the endpoint. The CN in the certificate must match the
     * DNS name your end users will use to reach your application.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDomainCertificateArn(const char* value) { SetDomainCertificateArn(value); return *this;}


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
    inline CreateVerifiedAccessEndpointRequest& WithApplicationDomain(const Aws::String& value) { SetApplicationDomain(value); return *this;}

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithApplicationDomain(Aws::String&& value) { SetApplicationDomain(std::move(value)); return *this;}

    /**
     * <p>The DNS name for users to reach your application.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithApplicationDomain(const char* value) { SetApplicationDomain(value); return *this;}


    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline const Aws::String& GetEndpointDomainPrefix() const{ return m_endpointDomainPrefix; }

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline bool EndpointDomainPrefixHasBeenSet() const { return m_endpointDomainPrefixHasBeenSet; }

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline void SetEndpointDomainPrefix(const Aws::String& value) { m_endpointDomainPrefixHasBeenSet = true; m_endpointDomainPrefix = value; }

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline void SetEndpointDomainPrefix(Aws::String&& value) { m_endpointDomainPrefixHasBeenSet = true; m_endpointDomainPrefix = std::move(value); }

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline void SetEndpointDomainPrefix(const char* value) { m_endpointDomainPrefixHasBeenSet = true; m_endpointDomainPrefix.assign(value); }

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithEndpointDomainPrefix(const Aws::String& value) { SetEndpointDomainPrefix(value); return *this;}

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithEndpointDomainPrefix(Aws::String&& value) { SetEndpointDomainPrefix(std::move(value)); return *this;}

    /**
     * <p>A custom identifier that gets prepended to a DNS name that is generated for
     * the endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithEndpointDomainPrefix(const char* value) { SetEndpointDomainPrefix(value); return *this;}


    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 security groups to associate with the Amazon Web Services
     * Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline const CreateVerifiedAccessEndpointLoadBalancerOptions& GetLoadBalancerOptions() const{ return m_loadBalancerOptions; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline bool LoadBalancerOptionsHasBeenSet() const { return m_loadBalancerOptionsHasBeenSet; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(const CreateVerifiedAccessEndpointLoadBalancerOptions& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = value; }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline void SetLoadBalancerOptions(CreateVerifiedAccessEndpointLoadBalancerOptions&& value) { m_loadBalancerOptionsHasBeenSet = true; m_loadBalancerOptions = std::move(value); }

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithLoadBalancerOptions(const CreateVerifiedAccessEndpointLoadBalancerOptions& value) { SetLoadBalancerOptions(value); return *this;}

    /**
     * <p>The load balancer details if creating the Amazon Web Services Verified Access
     * endpoint as <code>load-balancer</code>type.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithLoadBalancerOptions(CreateVerifiedAccessEndpointLoadBalancerOptions&& value) { SetLoadBalancerOptions(std::move(value)); return *this;}


    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline const CreateVerifiedAccessEndpointEniOptions& GetNetworkInterfaceOptions() const{ return m_networkInterfaceOptions; }

    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline bool NetworkInterfaceOptionsHasBeenSet() const { return m_networkInterfaceOptionsHasBeenSet; }

    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline void SetNetworkInterfaceOptions(const CreateVerifiedAccessEndpointEniOptions& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = value; }

    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline void SetNetworkInterfaceOptions(CreateVerifiedAccessEndpointEniOptions&& value) { m_networkInterfaceOptionsHasBeenSet = true; m_networkInterfaceOptions = std::move(value); }

    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(const CreateVerifiedAccessEndpointEniOptions& value) { SetNetworkInterfaceOptions(value); return *this;}

    /**
     * <p>The network interface details if creating the Amazon Web Services Verified
     * Access endpoint as <code>network-interface</code>type.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithNetworkInterfaceOptions(CreateVerifiedAccessEndpointEniOptions&& value) { SetNetworkInterfaceOptions(std::move(value)); return *this;}


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
    inline CreateVerifiedAccessEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Amazon Web Services Verified Access endpoint.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVerifiedAccessEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    VerifiedAccessEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    VerifiedAccessEndpointAttachmentType m_attachmentType;
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
