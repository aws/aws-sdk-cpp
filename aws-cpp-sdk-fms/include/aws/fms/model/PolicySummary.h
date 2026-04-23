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
#include <aws/fms/model/SecurityServiceType.h>
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
   * <p>Details of the AWS Firewall Manager policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicySummary">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API PolicySummary
  {
  public:
    PolicySummary();
    PolicySummary(Aws::Utils::Json::JsonView jsonValue);
    PolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The ID of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the specified policy.</p>
     */
    inline PolicySummary& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline PolicySummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline PolicySummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to protect with the policy. This is in the format shown
     * in <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a>. For example:
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> or
     * <code>AWS::CloudFront::Distribution</code>.</p>
     */
    inline PolicySummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline const SecurityServiceType& GetSecurityServiceType() const{ return m_securityServiceType; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline bool SecurityServiceTypeHasBeenSet() const { return m_securityServiceTypeHasBeenSet; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline void SetSecurityServiceType(const SecurityServiceType& value) { m_securityServiceTypeHasBeenSet = true; m_securityServiceType = value; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline void SetSecurityServiceType(SecurityServiceType&& value) { m_securityServiceTypeHasBeenSet = true; m_securityServiceType = std::move(value); }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline PolicySummary& WithSecurityServiceType(const SecurityServiceType& value) { SetSecurityServiceType(value); return *this;}

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either a WAF policy or Shield Advanced
     * policy.</p>
     */
    inline PolicySummary& WithSecurityServiceType(SecurityServiceType&& value) { SetSecurityServiceType(std::move(value)); return *this;}


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
    inline PolicySummary& WithRemediationEnabled(bool value) { SetRemediationEnabled(value); return *this;}

  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    SecurityServiceType m_securityServiceType;
    bool m_securityServiceTypeHasBeenSet;

    bool m_remediationEnabled;
    bool m_remediationEnabledHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
