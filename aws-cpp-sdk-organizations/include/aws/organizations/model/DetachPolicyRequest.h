/**
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
  class DetachPolicyRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DetachPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachPolicy"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline DetachPolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline DetachPolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy you want to detach. You can get the
     * ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy
     * ID string requires "p-" followed by from 8 to 128 lowercase or uppercase
     * letters, digits, or the underscore character (_).</p>
     */
    inline DetachPolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline DetachPolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline DetachPolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * detach the policy from. You can get the ID from the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A
     * string that begins with "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p> </li> <li> <p> <b>Account</b> - A string that consists of exactly 12
     * digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b> - A string that
     * begins with "ou-" followed by from 4 to 32 lowercase letters or digits (the ID
     * of the root that the OU is in). This string is followed by a second "-" dash and
     * from 8 to 32 additional lowercase letters or digits.</p> </li> </ul>
     */
    inline DetachPolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
