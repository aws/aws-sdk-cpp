/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DeletePolicyRequest : public OrganizationsRequest
  {
  public:
    DeletePolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to delete. You can get
     * the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lower-case letters or digits.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

  private:
    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
