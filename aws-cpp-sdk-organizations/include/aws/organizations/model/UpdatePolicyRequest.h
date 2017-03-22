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
  class AWS_ORGANIZATIONS_API UpdatePolicyRequest : public OrganizationsRequest
  {
  public:
    UpdatePolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy that you want to update.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID
     * string requires "p-" followed by from 8 to 128 lower-case letters or digits.</p>
     */
    inline UpdatePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdatePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdatePolicyRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>If provided, the new name for the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdatePolicyRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline UpdatePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline UpdatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>If provided, the new description for the policy.</p>
     */
    inline UpdatePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline UpdatePolicyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline UpdatePolicyRequest& WithContent(Aws::String&& value) { SetContent(value); return *this;}

    /**
     * <p>If provided, the new content for the policy. The text must be correctly
     * formatted JSON that complies with the syntax for the policy's type. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide</i>.</p>
     */
    inline UpdatePolicyRequest& WithContent(const char* value) { SetContent(value); return *this;}

  private:
    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
