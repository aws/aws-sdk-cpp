﻿/**
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
    AWS_FMS_API PolicySummary();
    AWS_FMS_API PolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline PolicySummary& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline PolicySummary& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline PolicySummary& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline PolicySummary& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline PolicySummary& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline PolicySummary& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline PolicySummary& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline PolicySummary& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline PolicySummary& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline PolicySummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline PolicySummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline PolicySummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy.</p>
     */
    inline const SecurityServiceType& GetSecurityServiceType() const{ return m_securityServiceType; }
    inline bool SecurityServiceTypeHasBeenSet() const { return m_securityServiceTypeHasBeenSet; }
    inline void SetSecurityServiceType(const SecurityServiceType& value) { m_securityServiceTypeHasBeenSet = true; m_securityServiceType = value; }
    inline void SetSecurityServiceType(SecurityServiceType&& value) { m_securityServiceTypeHasBeenSet = true; m_securityServiceType = std::move(value); }
    inline PolicySummary& WithSecurityServiceType(const SecurityServiceType& value) { SetSecurityServiceType(value); return *this;}
    inline PolicySummary& WithSecurityServiceType(SecurityServiceType&& value) { SetSecurityServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const{ return m_remediationEnabled; }
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
    inline bool GetDeleteUnusedFMManagedResources() const{ return m_deleteUnusedFMManagedResources; }
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
    inline const CustomerPolicyStatus& GetPolicyStatus() const{ return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    inline void SetPolicyStatus(const CustomerPolicyStatus& value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline void SetPolicyStatus(CustomerPolicyStatus&& value) { m_policyStatusHasBeenSet = true; m_policyStatus = std::move(value); }
    inline PolicySummary& WithPolicyStatus(const CustomerPolicyStatus& value) { SetPolicyStatus(value); return *this;}
    inline PolicySummary& WithPolicyStatus(CustomerPolicyStatus&& value) { SetPolicyStatus(std::move(value)); return *this;}
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

    SecurityServiceType m_securityServiceType;
    bool m_securityServiceTypeHasBeenSet = false;

    bool m_remediationEnabled;
    bool m_remediationEnabledHasBeenSet = false;

    bool m_deleteUnusedFMManagedResources;
    bool m_deleteUnusedFMManagedResourcesHasBeenSet = false;

    CustomerPolicyStatus m_policyStatus;
    bool m_policyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
