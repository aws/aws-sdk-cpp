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
#include <aws/organizations/model/PolicyType.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API CreatePolicyRequest : public OrganizationsRequest
  {
  public:
    CreatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline CreatePolicyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline CreatePolicyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The policy content to add to the new policy. For example, if you create a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">service
     * control policy</a> (SCP), this string must be JSON text that specifies the
     * permissions that admins in attached accounts can delegate to their users,
     * groups, and roles. For more information about the SCP syntax, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_reference_scp-syntax.html">Service
     * Control Policy Syntax</a> in the <i>AWS Organizations User Guide.</i> </p>
     */
    inline CreatePolicyRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description to assign to the policy.</p>
     */
    inline CreatePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name to assign to the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline CreatePolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline const PolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline CreatePolicyRequest& WithType(const PolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of policy to create.</p> <note> <p>In the current release, the only
     * type of policy that you can create is a service control policy (SCP).</p>
     * </note>
     */
    inline CreatePolicyRequest& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    PolicyType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
