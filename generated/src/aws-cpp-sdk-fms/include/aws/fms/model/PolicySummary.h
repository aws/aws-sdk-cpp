/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServiceType.h>
#include <aws/fms/model/CustomerPolicyStatus.h>
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
   * <p>Details of the Firewall Manager policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicySummary">AWS
   * API Reference</a></p>
   */
  class PolicySummary
  {
  public:
    AWS_FMS_API PolicySummary() = default;
    AWS_FMS_API PolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    PolicySummary& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    PolicySummary& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PolicySummary& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    PolicySummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy.</p>
     */
    inline SecurityServiceType GetSecurityServiceType() const { return m_securityServiceType; }
    inline bool SecurityServiceTypeHasBeenSet() const { return m_securityServiceTypeHasBeenSet; }
    inline void SetSecurityServiceType(SecurityServiceType value) { m_securityServiceTypeHasBeenSet = true; m_securityServiceType = value; }
    inline PolicySummary& WithSecurityServiceType(SecurityServiceType value) { SetSecurityServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const { return m_remediationEnabled; }
    inline bool RemediationEnabledHasBeenSet() const { return m_remediationEnabledHasBeenSet; }
    inline void SetRemediationEnabled(bool value) { m_remediationEnabledHasBeenSet = true; m_remediationEnabled = value; }
    inline PolicySummary& WithRemediationEnabled(bool value) { SetRemediationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Firewall Manager should automatically remove protections
     * from resources that leave the policy scope and clean up resources that Firewall
     * Manager is managing for accounts when those accounts leave policy scope. For
     * example, Firewall Manager will disassociate a Firewall Manager managed web ACL
     * from a protected customer resource when the customer resource leaves policy
     * scope. </p> <p>By default, Firewall Manager doesn't remove protections or delete
     * Firewall Manager managed resources. </p> <p>This option is not available for
     * Shield Advanced or WAF Classic policies.</p>
     */
    inline bool GetDeleteUnusedFMManagedResources() const { return m_deleteUnusedFMManagedResources; }
    inline bool DeleteUnusedFMManagedResourcesHasBeenSet() const { return m_deleteUnusedFMManagedResourcesHasBeenSet; }
    inline void SetDeleteUnusedFMManagedResources(bool value) { m_deleteUnusedFMManagedResourcesHasBeenSet = true; m_deleteUnusedFMManagedResources = value; }
    inline PolicySummary& WithDeleteUnusedFMManagedResources(bool value) { SetDeleteUnusedFMManagedResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy is in or out of an admin's policy or Region
     * scope.</p> <ul> <li> <p> <code>ACTIVE</code> - The administrator can manage and
     * delete the policy.</p> </li> <li> <p> <code>OUT_OF_ADMIN_SCOPE</code> - The
     * administrator can view the policy, but they can't edit or delete the policy.
     * Existing policy protections stay in place. Any new resources that come into
     * scope of the policy won't be protected.</p> </li> </ul>
     */
    inline CustomerPolicyStatus GetPolicyStatus() const { return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    inline void SetPolicyStatus(CustomerPolicyStatus value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline PolicySummary& WithPolicyStatus(CustomerPolicyStatus value) { SetPolicyStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    SecurityServiceType m_securityServiceType{SecurityServiceType::NOT_SET};
    bool m_securityServiceTypeHasBeenSet = false;

    bool m_remediationEnabled{false};
    bool m_remediationEnabledHasBeenSet = false;

    bool m_deleteUnusedFMManagedResources{false};
    bool m_deleteUnusedFMManagedResourcesHasBeenSet = false;

    CustomerPolicyStatus m_policyStatus{CustomerPolicyStatus::NOT_SET};
    bool m_policyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
