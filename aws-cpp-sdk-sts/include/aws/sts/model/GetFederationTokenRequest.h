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
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sts/model/PolicyDescriptorType.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AWS_STS_API GetFederationTokenRequest : public STSRequest
  {
  public:
    GetFederationTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFederationToken"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline GetFederationTokenRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline GetFederationTokenRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the federated user. The name is used as an identifier for the
     * temporary security credentials (such as <code>Bob</code>). For example, you can
     * reference the federated user name in a resource-based policy, such as in an
     * Amazon S3 bucket policy.</p> <p>The regex used to validate this parameter is a
     * string of characters consisting of upper- and lower-case alphanumeric characters
     * with no spaces. You can also include underscores or any of the following
     * characters: =,.@-</p>
     */
    inline GetFederationTokenRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline GetFederationTokenRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline GetFederationTokenRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>You must pass an inline or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies.</p> <p>This parameter is optional. However, if
     * you do not pass any session policies, then the resulting federated user session
     * has no permissions. The only exception is when the credentials are used to
     * access a resource that has a resource-based policy that specifically references
     * the federated user session in the <code>Principal</code> element of the
     * policy.</p> <p>When you pass session policies, the session permissions are the
     * intersection of the IAM user policies and the session policies that you pass.
     * This gives you a way to further restrict the permissions for a federated user.
     * You cannot use session policies to grant more permissions than those that are
     * defined in the permissions policy of the IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <p>The plain text that you use
     * for both inline and managed session policies shouldn't exceed 2048 characters.
     * The JSON policy characters can be any ASCII character from the space character
     * to the end of the valid character list (\u0020 through \u00FF). It can also
     * include the tab (\u0009), linefeed (\u000A), and carriage return (\u000D)
     * characters.</p> <note> <p>The characters in this parameter count towards the
     * 2048 character session policy guideline. However, an AWS conversion compresses
     * the session policies into a packed binary format that has a separate limit. This
     * is the enforced limit. The <code>PackedPolicySize</code> response element
     * indicates by percentage how close the policy is to the upper size limit.</p>
     * </note>
     */
    inline GetFederationTokenRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline const Aws::Vector<PolicyDescriptorType>& GetPolicyArns() const{ return m_policyArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline bool PolicyArnsHasBeenSet() const { return m_policyArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline void SetPolicyArns(const Aws::Vector<PolicyDescriptorType>& value) { m_policyArnsHasBeenSet = true; m_policyArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline void SetPolicyArns(Aws::Vector<PolicyDescriptorType>&& value) { m_policyArnsHasBeenSet = true; m_policyArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline GetFederationTokenRequest& WithPolicyArns(const Aws::Vector<PolicyDescriptorType>& value) { SetPolicyArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline GetFederationTokenRequest& WithPolicyArns(Aws::Vector<PolicyDescriptorType>&& value) { SetPolicyArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline GetFederationTokenRequest& AddPolicyArns(const PolicyDescriptorType& value) { m_policyArnsHasBeenSet = true; m_policyArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as a managed session policy. The policies must exist in the same account as
     * the IAM user that is requesting federated access.</p> <p>You must pass an inline
     * or managed <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">session
     * policy</a> to this operation. You can pass a single JSON policy document to use
     * as an inline session policy. You can also specify up to 10 managed policies to
     * use as managed session policies. The plain text that you use for both inline and
     * managed session policies shouldn't exceed 2048 characters. You can provide up to
     * 10 managed policy ARNs. For more information about ARNs, see <a
     * href="general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the AWS General Reference.</p> <p>This
     * parameter is optional. However, if you do not pass any session policies, then
     * the resulting federated user session has no permissions. The only exception is
     * when the credentials are used to access a resource that has a resource-based
     * policy that specifically references the federated user session in the
     * <code>Principal</code> element of the policy.</p> <p>When you pass session
     * policies, the session permissions are the intersection of the IAM user policies
     * and the session policies that you pass. This gives you a way to further restrict
     * the permissions for a federated user. You cannot use session policies to grant
     * more permissions than those that are defined in the permissions policy of the
     * IAM user. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p> <note> <p>The characters in this
     * parameter count towards the 2048 character session policy guideline. However, an
     * AWS conversion compresses the session policies into a packed binary format that
     * has a separate limit. This is the enforced limit. The
     * <code>PackedPolicySize</code> response element indicates by percentage how close
     * the policy is to the upper size limit.</p> </note>
     */
    inline GetFederationTokenRequest& AddPolicyArns(PolicyDescriptorType&& value) { m_policyArnsHasBeenSet = true; m_policyArns.push_back(std::move(value)); return *this; }


    /**
     * <p>The duration, in seconds, that the session should last. Acceptable durations
     * for federation sessions range from 900 seconds (15 minutes) to 129,600 seconds
     * (36 hours), with 43,200 seconds (12 hours) as the default. Sessions obtained
     * using AWS account root user credentials are restricted to a maximum of 3,600
     * seconds (one hour). If the specified duration is longer than one hour, the
     * session obtained by using root user credentials defaults to one hour.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds, that the session should last. Acceptable durations
     * for federation sessions range from 900 seconds (15 minutes) to 129,600 seconds
     * (36 hours), with 43,200 seconds (12 hours) as the default. Sessions obtained
     * using AWS account root user credentials are restricted to a maximum of 3,600
     * seconds (one hour). If the specified duration is longer than one hour, the
     * session obtained by using root user credentials defaults to one hour.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The duration, in seconds, that the session should last. Acceptable durations
     * for federation sessions range from 900 seconds (15 minutes) to 129,600 seconds
     * (36 hours), with 43,200 seconds (12 hours) as the default. Sessions obtained
     * using AWS account root user credentials are restricted to a maximum of 3,600
     * seconds (one hour). If the specified duration is longer than one hour, the
     * session obtained by using root user credentials defaults to one hour.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds, that the session should last. Acceptable durations
     * for federation sessions range from 900 seconds (15 minutes) to 129,600 seconds
     * (36 hours), with 43,200 seconds (12 hours) as the default. Sessions obtained
     * using AWS account root user credentials are restricted to a maximum of 3,600
     * seconds (one hour). If the specified duration is longer than one hour, the
     * session obtained by using root user credentials defaults to one hour.</p>
     */
    inline GetFederationTokenRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::Vector<PolicyDescriptorType> m_policyArns;
    bool m_policyArnsHasBeenSet;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
