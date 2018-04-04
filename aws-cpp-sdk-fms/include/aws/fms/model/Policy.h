/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServicePolicyData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    Policy(const Aws::Utils::Json::JsonValue& jsonValue);
    Policy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

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
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
     */
    inline Policy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the AWS Firewall Manager policy.</p>
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
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline Policy& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline Policy& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to protect with the policy, either an Application Load
     * Balancer or a CloudFront distribution. This is in the format shown in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. Valid values are
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline Policy& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

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
     * the <code>ResourceTag</code> array are not protected by the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are associated with the policy.</p>
     */
    inline bool GetExcludeResourceTags() const{ return m_excludeResourceTags; }

    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not protected by the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are associated with the policy.</p>
     */
    inline void SetExcludeResourceTags(bool value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }

    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not protected by the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are associated with the policy.</p>
     */
    inline Policy& WithExcludeResourceTags(bool value) { SetExcludeResourceTags(value); return *this;}


    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const{ return m_remediationEnabled; }

    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline void SetRemediationEnabled(bool value) { m_remediationEnabledHasBeenSet = true; m_remediationEnabled = value; }

    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline Policy& WithRemediationEnabled(bool value) { SetRemediationEnabled(value); return *this;}

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

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet;

    bool m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet;

    bool m_remediationEnabled;
    bool m_remediationEnabledHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
