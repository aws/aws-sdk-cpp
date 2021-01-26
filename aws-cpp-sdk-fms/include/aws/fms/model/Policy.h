/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServicePolicyData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fms/model/ResourceTag.h>
#include <aws/fms/model/CustomerPolicyScopeIdType.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>An AWS Firewall Manager policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/Policy">AWS API
   * Reference</a></p>
   */
  class AWS_FMS_API Policy
  {
  public:
    Policy();
    Policy(Aws::Utils::Json::JsonView jsonValue);
    Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline const Aws::String& GetPolicyUpdateToken() const{ return m_policyUpdateToken; }

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline bool PolicyUpdateTokenHasBeenSet() const { return m_policyUpdateTokenHasBeenSet; }

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline void SetPolicyUpdateToken(const Aws::String& value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken = value; }

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline void SetPolicyUpdateToken(Aws::String&& value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken = std::move(value); }

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline void SetPolicyUpdateToken(const char* value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken.assign(value); }

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline Policy& WithPolicyUpdateToken(const Aws::String& value) { SetPolicyUpdateToken(value); return *this;}

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline Policy& WithPolicyUpdateToken(Aws::String&& value) { SetPolicyUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline Policy& WithPolicyUpdateToken(const char* value) { SetPolicyUpdateToken(value); return *this;}


    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline const SecurityServicePolicyData& GetSecurityServicePolicyData() const{ return m_securityServicePolicyData; }

    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline bool SecurityServicePolicyDataHasBeenSet() const { return m_securityServicePolicyDataHasBeenSet; }

    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline void SetSecurityServicePolicyData(const SecurityServicePolicyData& value) { m_securityServicePolicyDataHasBeenSet = true; m_securityServicePolicyData = value; }

    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline void SetSecurityServicePolicyData(SecurityServicePolicyData&& value) { m_securityServicePolicyDataHasBeenSet = true; m_securityServicePolicyData = std::move(value); }

    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline Policy& WithSecurityServicePolicyData(const SecurityServicePolicyData& value) { SetSecurityServicePolicyData(value); return *this;}

    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline Policy& WithSecurityServicePolicyData(SecurityServicePolicyData&& value) { SetSecurityServicePolicyData(std::move(value)); return *this;}


    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline Policy& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline Policy& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For AWS WAF and Shield Advanced, examples include
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> and
     * <code>AWS::CloudFront::Distribution</code>. For a security group common policy,
     * valid values are <code>AWS::EC2::NetworkInterface</code> and
     * <code>AWS::EC2::Instance</code>. For a security group content audit policy,
     * valid values are <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and <code>AWS::EC2::Instance</code>.
     * For a security group usage audit policy, the value is
     * <code>AWS::EC2::SecurityGroup</code>. For an AWS Network Firewall policy, the
     * value is <code>AWS::EC2::VPC</code>.</p>
     */
    inline Policy& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeList() const{ return m_resourceTypeList; }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline bool ResourceTypeListHasBeenSet() const { return m_resourceTypeListHasBeenSet; }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline void SetResourceTypeList(const Aws::Vector<Aws::String>& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = value; }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline void SetResourceTypeList(Aws::Vector<Aws::String>&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = std::move(value); }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline Policy& WithResourceTypeList(const Aws::Vector<Aws::String>& value) { SetResourceTypeList(value); return *this;}

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline Policy& WithResourceTypeList(Aws::Vector<Aws::String>&& value) { SetResourceTypeList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline Policy& AddResourceTypeList(const Aws::String& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline Policy& AddResourceTypeList(Aws::String&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of <code>ResourceType</code>.</p>
     */
    inline Policy& AddResourceTypeList(const char* value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }


    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline Policy& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline Policy& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline Policy& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline Policy& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline bool GetExcludeResourceTags() const{ return m_excludeResourceTags; }

    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }

    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline void SetExcludeResourceTags(bool value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }

    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline Policy& WithExcludeResourceTags(bool value) { SetExcludeResourceTags(value); return *this;}


    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const{ return m_remediationEnabled; }

    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool RemediationEnabledHasBeenSet() const { return m_remediationEnabledHasBeenSet; }

    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline void SetRemediationEnabled(bool value) { m_remediationEnabledHasBeenSet = true; m_remediationEnabled = value; }

    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline Policy& WithRemediationEnabled(bool value) { SetRemediationEnabled(value); return *this;}


    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetIncludeMap() const{ return m_includeMap; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline bool IncludeMapHasBeenSet() const { return m_includeMapHasBeenSet; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline void SetIncludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { m_includeMapHasBeenSet = true; m_includeMap = value; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline void SetIncludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { m_includeMapHasBeenSet = true; m_includeMap = std::move(value); }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& WithIncludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { SetIncludeMap(value); return *this;}

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& WithIncludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { SetIncludeMap(std::move(value)); return *this;}

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddIncludeMap(const CustomerPolicyScopeIdType& key, const Aws::Vector<Aws::String>& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(key, value); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddIncludeMap(CustomerPolicyScopeIdType&& key, const Aws::Vector<Aws::String>& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddIncludeMap(const CustomerPolicyScopeIdType& key, Aws::Vector<Aws::String>&& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to include in the policy. Specifying an OU is the equivalent of specifying
     * all accounts in the OU and in any of its child OUs, including any child OUs and
     * accounts that are added at a later time.</p> <p>You can specify inclusions or
     * exclusions, but not both. If you specify an <code>IncludeMap</code>, AWS
     * Firewall Manager applies the policy to all accounts specified by the
     * <code>IncludeMap</code>, and does not evaluate any <code>ExcludeMap</code>
     * specifications. If you do not specify an <code>IncludeMap</code>, then Firewall
     * Manager applies the policy to all accounts except for those specified by the
     * <code>ExcludeMap</code>.</p> <p>You can specify account IDs, OUs, or a
     * combination: </p> <ul> <li> <p>Specify account IDs by setting the key to
     * <code>ACCOUNT</code>. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”]}</code>.</p> </li> <li>
     * <p>Specify OUs by setting the key to <code>ORG_UNIT</code>. For example, the
     * following is a valid map: <code>{“ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> <li> <p>Specify accounts and OUs together in a
     * single map, separated with a comma. For example, the following is a valid map:
     * <code>{“ACCOUNT” : [“accountID1”, “accountID2”], “ORG_UNIT” : [“ouid111”,
     * “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddIncludeMap(CustomerPolicyScopeIdType&& key, Aws::Vector<Aws::String>&& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetExcludeMap() const{ return m_excludeMap; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline bool ExcludeMapHasBeenSet() const { return m_excludeMapHasBeenSet; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline void SetExcludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { m_excludeMapHasBeenSet = true; m_excludeMap = value; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline void SetExcludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap = std::move(value); }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& WithExcludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { SetExcludeMap(value); return *this;}

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& WithExcludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { SetExcludeMap(std::move(value)); return *this;}

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddExcludeMap(const CustomerPolicyScopeIdType& key, const Aws::Vector<Aws::String>& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(key, value); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddExcludeMap(CustomerPolicyScopeIdType&& key, const Aws::Vector<Aws::String>& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddExcludeMap(const CustomerPolicyScopeIdType& key, Aws::Vector<Aws::String>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the AWS account IDs and AWS Organizations organizational units
     * (OUs) to exclude from the policy. Specifying an OU is the equivalent of
     * specifying all accounts in the OU and in any of its child OUs, including any
     * child OUs and accounts that are added at a later time.</p> <p>You can specify
     * inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, AWS Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline Policy& AddExcludeMap(CustomerPolicyScopeIdType&& key, Aws::Vector<Aws::String>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyUpdateToken;
    bool m_policyUpdateTokenHasBeenSet;

    SecurityServicePolicyData m_securityServicePolicyData;
    bool m_securityServicePolicyDataHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_resourceTypeList;
    bool m_resourceTypeListHasBeenSet;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet;

    bool m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet;

    bool m_remediationEnabled;
    bool m_remediationEnabledHasBeenSet;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_includeMap;
    bool m_includeMapHasBeenSet;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_excludeMap;
    bool m_excludeMapHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
