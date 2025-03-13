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
  class DeletePolicyRequest : public FMSRequest
  {
  public:
    AWS_FMS_API DeletePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePolicy"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the policy that you want to delete. You can retrieve this ID from
     * <code>PutPolicy</code> and <code>ListPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    DeletePolicyRequest& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, the request performs cleanup according to the policy
     * type. </p> <p>For WAF and Shield Advanced policies, the cleanup does the
     * following:</p> <ul> <li> <p>Deletes rule groups created by Firewall Manager</p>
     * </li> <li> <p>Removes web ACLs from in-scope resources</p> </li> <li> <p>Deletes
     * web ACLs that contain no rules or rule groups</p> </li> </ul> <p>For security
     * group policies, the cleanup does the following for each security group in the
     * policy:</p> <ul> <li> <p>Disassociates the security group from in-scope
     * resources </p> </li> <li> <p>Deletes the security group if it was created
     * through Firewall Manager and if it's no longer associated with any resources
     * through another policy</p> </li> </ul>  <p>For security group common
     * policies, even if set to <code>False</code>, Firewall Manager deletes all
     * security groups created by Firewall Manager that aren't associated with any
     * other resources through another policy.</p>  <p>After the cleanup,
     * in-scope resources are no longer protected by web ACLs in this policy.
     * Protection of out-of-scope resources remains unchanged. Scope is determined by
     * tags that you create and accounts that you associate with the policy. When
     * creating the policy, if you specify that only resources in specific accounts or
     * with specific tags are in scope of the policy, those accounts and resources are
     * handled by the policy. All others are out of scope. If you don't specify tags or
     * accounts, all resources are in scope. </p>
     */
    inline bool GetDeleteAllPolicyResources() const { return m_deleteAllPolicyResources; }
    inline bool DeleteAllPolicyResourcesHasBeenSet() const { return m_deleteAllPolicyResourcesHasBeenSet; }
    inline void SetDeleteAllPolicyResources(bool value) { m_deleteAllPolicyResourcesHasBeenSet = true; m_deleteAllPolicyResources = value; }
    inline DeletePolicyRequest& WithDeleteAllPolicyResources(bool value) { SetDeleteAllPolicyResources(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    bool m_deleteAllPolicyResources{false};
    bool m_deleteAllPolicyResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
