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
    AWS_FMS_API GetComplianceDetailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetail"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline GetComplianceDetailRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline GetComplianceDetailRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy that you want to get the details for.
     * <code>PolicyId</code> is returned by <code>PutPolicy</code> and by
     * <code>ListPolicies</code>.</p>
     */
    inline GetComplianceDetailRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the resources that you want to get
     * the details for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
