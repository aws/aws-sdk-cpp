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
  class GetComplianceDetailRequest : public FMSRequest
  {
  public:
    AWS_FMS_API GetComplianceDetailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetail"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    GetComplianceDetailRequest& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline const Aws::String& GetMemberAccount() const { return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    template<typename MemberAccountT = Aws::String>
    void SetMemberAccount(MemberAccountT&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::forward<MemberAccountT>(value); }
    template<typename MemberAccountT = Aws::String>
    GetComplianceDetailRequest& WithMemberAccount(MemberAccountT&& value) { SetMemberAccount(std::forward<MemberAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
