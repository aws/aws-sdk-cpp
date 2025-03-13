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
    AWS_FMS_API GetViolationDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetViolationDetails"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Firewall Manager policy that you want the details for. You can
     * get violation details for the following policy types:</p> <ul> <li> <p>WAF</p>
     * </li> <li> <p>DNS Firewall</p> </li> <li> <p>Imported Network Firewall</p> </li>
     * <li> <p>Network Firewall</p> </li> <li> <p>Security group content audit</p>
     * </li> <li> <p>Network ACL</p> </li> <li> <p>Third-party firewall</p> </li> </ul>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    GetViolationDetailsRequest& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that you want the details for.</p>
     */
    inline const Aws::String& GetMemberAccount() const { return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    template<typename MemberAccountT = Aws::String>
    void SetMemberAccount(MemberAccountT&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::forward<MemberAccountT>(value); }
    template<typename MemberAccountT = Aws::String>
    GetViolationDetailsRequest& WithMemberAccount(MemberAccountT&& value) { SetMemberAccount(std::forward<MemberAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource that has violations.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    GetViolationDetailsRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. This is in the format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. Supported resource types are:
     * <code>AWS::WAFv2::WebACL</code>, <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::NetworkInterface</code>, <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::NetworkFirewall::FirewallPolicy</code>, and
     * <code>AWS::EC2::Subnet</code>. </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    GetViolationDetailsRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}
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
