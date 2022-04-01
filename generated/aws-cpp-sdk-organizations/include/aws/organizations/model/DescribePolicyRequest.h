﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DescribePolicyRequest : public OrganizationsRequest
  {
  public:
    DescribePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline DescribePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline DescribePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline DescribePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
