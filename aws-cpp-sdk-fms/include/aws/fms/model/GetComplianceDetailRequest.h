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
  class AWS_FMS_API GetComplianceDetailRequest : public FMSRequest
  {
  public:
    GetComplianceDetailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetail"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account that owns the resources that you want to get the details
     * for.</p>
     */
    inline GetComplianceDetailRequest& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
