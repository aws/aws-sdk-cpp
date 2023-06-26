/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class GetViolationDetailsRequest : public FMSRequest
  {
  public:
    AWS_FMS_API GetViolationDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetViolationDetails"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline GetViolationDetailsRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline GetViolationDetailsRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. This
     * currently only supports security group content audit policies.</p>
     */
    inline GetViolationDetailsRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline GetViolationDetailsRequest& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline GetViolationDetailsRequest& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline GetViolationDetailsRequest& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}


    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline GetViolationDetailsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline GetViolationDetailsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline GetViolationDetailsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline GetViolationDetailsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline GetViolationDetailsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::EC2::Instance</code>, <code>AWS::EC2::NetworkInterface</code>,
     * <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline GetViolationDetailsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
