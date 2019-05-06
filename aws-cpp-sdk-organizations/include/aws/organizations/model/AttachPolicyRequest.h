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
  class AWS_ORGANIZATIONS_API AttachPolicyRequest : public OrganizationsRequest
  {
  public:
    AttachPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline AttachPolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline AttachPolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to attach to the
     * target. You can get the ID for the policy by calling the <a>ListPolicies</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline AttachPolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline AttachPolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline AttachPolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the root, OU, or account that you want to
     * attach the policy to. You can get the ID by calling the <a>ListRoots</a>,
     * <a>ListOrganizationalUnitsForParent</a>, or <a>ListAccounts</a> operations.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target
     * ID string requires one of the following:</p> <ul> <li> <p>Root: a string that
     * begins with "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     * </li> <li> <p>Account: a string that consists of exactly 12 digits.</p> </li>
     * <li> <p>Organizational unit (OU): a string that begins with "ou-" followed by
     * from 4 to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline AttachPolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
