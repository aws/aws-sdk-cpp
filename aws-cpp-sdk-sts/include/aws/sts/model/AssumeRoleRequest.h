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
  class AWS_STS_API AssumeRoleRequest : public STSRequest
  {
  public:
    AssumeRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRole"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline AssumeRoleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline AssumeRoleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to assume.</p>
     */
    inline AssumeRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetRoleSessionName() const{ return m_roleSessionName; }

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline bool RoleSessionNameHasBeenSet() const { return m_roleSessionNameHasBeenSet; }

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(const Aws::String& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = value; }

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(Aws::String&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = std::move(value); }

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(const char* value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName.assign(value); }

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithRoleSessionName(const Aws::String& value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithRoleSessionName(Aws::String&& value) { SetRoleSessionName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the assumed role session.</p> <p>Use the role session name
     * to uniquely identify a session when the same role is assumed by different
     * principals or for different reasons. In cross-account scenarios, the role
     * session name is visible to, and can be logged by the account that owns the role.
     * The role session name is also used in the ARN of the assumed role principal.
     * This means that subsequent cross-account API requests that use the temporary
     * security credentials will expose the role session name to the external account
     * in their AWS CloudTrail logs.</p> <p>The regex used to validate this parameter
     * is a string of characters consisting of upper- and lower-case alphanumeric
     * characters with no spaces. You can also include underscores or any of the
     * following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithRoleSessionName(const char* value) { SetRoleSessionName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<PolicyDescriptorType>& GetPolicyArns() const{ return m_policyArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PolicyArnsHasBeenSet() const { return m_policyArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPolicyArns(const Aws::Vector<PolicyDescriptorType>& value) { m_policyArnsHasBeenSet = true; m_policyArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPolicyArns(Aws::Vector<PolicyDescriptorType>&& value) { m_policyArnsHasBeenSet = true; m_policyArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline AssumeRoleRequest& WithPolicyArns(const Aws::Vector<PolicyDescriptorType>& value) { SetPolicyArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline AssumeRoleRequest& WithPolicyArns(Aws::Vector<PolicyDescriptorType>&& value) { SetPolicyArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline AssumeRoleRequest& AddPolicyArns(const PolicyDescriptorType& value) { m_policyArnsHasBeenSet = true; m_policyArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the IAM managed policies that you want to
     * use as managed session policies. The policies must exist in the same account as
     * the role.</p> <p>This parameter is optional. You can provide up to 10 managed
     * policy ARNs. However, the plain text that you use for both inline and managed
     * session policies shouldn't exceed 2048 characters. For more information about
     * ARNs, see <a href="general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the AWS General
     * Reference.</p> <note> <p>The characters in this parameter count towards the 2048
     * character session policy guideline. However, an AWS conversion compresses the
     * session policies into a packed binary format that has a separate limit. This is
     * the enforced limit. The <code>PackedPolicySize</code> response element indicates
     * by percentage how close the policy is to the upper size limit.</p> </note>
     * <p>Passing policies to this operation returns new temporary credentials. The
     * resulting session's permissions are the intersection of the role's
     * identity-based policy and the session policies. You can use the role's temporary
     * credentials in subsequent AWS API calls to access resources in the account that
     * owns the role. You cannot use session policies to grant more permissions than
     * those allowed by the identity-based policy of the role that is being assumed.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html#policies_session">Session
     * Policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline AssumeRoleRequest& AddPolicyArns(PolicyDescriptorType&& value) { m_policyArnsHasBeenSet = true; m_policyArns.push_back(std::move(value)); return *this; }


    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
    inline AssumeRoleRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
    inline AssumeRoleRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy in JSON format that you want to use as an inline session
     * policy.</p> <p>This parameter is optional. Passing policies to this operation
     * returns new temporary credentials. The resulting session's permissions are the
     * intersection of the role's identity-based policy and the session policies. You
     * can use the role's temporary credentials in subsequent AWS API calls to access
     * resources in the account that owns the role. You cannot use session policies to
     * grant more permissions than those allowed by the identity-based policy of the
     * role that is being assumed. For more information, see <a
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
    inline AssumeRoleRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to <code>3600</code> seconds.
     * </p> <note> <p>The <code>DurationSeconds</code> parameter is separate from the
     * duration of a console session that you might request using the returned
     * credentials. The request to the federation endpoint for a console sign-in token
     * takes a <code>SessionDuration</code> parameter that specifies the maximum length
     * of the console session. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the AWS Management Console</a> in
     * the <i>IAM User Guide</i>.</p> </note>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to <code>3600</code> seconds.
     * </p> <note> <p>The <code>DurationSeconds</code> parameter is separate from the
     * duration of a console session that you might request using the returned
     * credentials. The request to the federation endpoint for a console sign-in token
     * takes a <code>SessionDuration</code> parameter that specifies the maximum length
     * of the console session. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the AWS Management Console</a> in
     * the <i>IAM User Guide</i>.</p> </note>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to <code>3600</code> seconds.
     * </p> <note> <p>The <code>DurationSeconds</code> parameter is separate from the
     * duration of a console session that you might request using the returned
     * credentials. The request to the federation endpoint for a console sign-in token
     * takes a <code>SessionDuration</code> parameter that specifies the maximum length
     * of the console session. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the AWS Management Console</a> in
     * the <i>IAM User Guide</i>.</p> </note>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to <code>3600</code> seconds.
     * </p> <note> <p>The <code>DurationSeconds</code> parameter is separate from the
     * duration of a console session that you might request using the returned
     * credentials. The request to the federation endpoint for a console sign-in token
     * takes a <code>SessionDuration</code> parameter that specifies the maximum length
     * of the console session. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the AWS Management Console</a> in
     * the <i>IAM User Guide</i>.</p> </note>
     */
    inline AssumeRoleRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline AssumeRoleRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline AssumeRoleRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. If the administrator of the account to which the role belongs provided
     * you with an external ID, then provide that value in the <code>ExternalId</code>
     * parameter. This value can be any string, such as a passphrase or account number.
     * A cross-account role is usually set up to trust everyone in an account.
     * Therefore, the administrator of the trusting account might send an external ID
     * to the administrator of the trusted account. That way, only someone with the ID
     * can assume the role, rather than everyone in the account. For more information
     * about the external ID, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to Use an External ID When Granting Access to Your AWS Resources to a Third
     * Party</a> in the <i>IAM User Guide</i>.</p> <p>The regex used to validate this
     * parameter is a string of characters consisting of upper- and lower-case
     * alphanumeric characters with no spaces. You can also include underscores or any
     * of the following characters: =,.@:/-</p>
     */
    inline AssumeRoleRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The identification number of the MFA device that is associated with the user
     * who is making the <code>AssumeRole</code> call. Specify this value if the trust
     * policy of the role being assumed includes a condition that requires MFA
     * authentication. The value is either the serial number for a hardware device
     * (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a
     * virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
     * <p>The regex used to validate this parameter is a string of characters
     * consisting of upper- and lower-case alphanumeric characters with no spaces. You
     * can also include underscores or any of the following characters: =,.@-</p>
     */
    inline AssumeRoleRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline const Aws::String& GetTokenCode() const{ return m_tokenCode; }

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline bool TokenCodeHasBeenSet() const { return m_tokenCodeHasBeenSet; }

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(const Aws::String& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = value; }

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(Aws::String&& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = std::move(value); }

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline void SetTokenCode(const char* value) { m_tokenCodeHasBeenSet = true; m_tokenCode.assign(value); }

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline AssumeRoleRequest& WithTokenCode(const Aws::String& value) { SetTokenCode(value); return *this;}

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline AssumeRoleRequest& WithTokenCode(Aws::String&& value) { SetTokenCode(std::move(value)); return *this;}

    /**
     * <p>The value provided by the MFA device, if the trust policy of the role being
     * assumed requires MFA (that is, if the policy includes a condition that tests for
     * MFA). If the role being assumed requires MFA and if the <code>TokenCode</code>
     * value is missing or expired, the <code>AssumeRole</code> call returns an "access
     * denied" error.</p> <p>The format for this parameter, as described by its regex
     * pattern, is a sequence of six numeric digits.</p>
     */
    inline AssumeRoleRequest& WithTokenCode(const char* value) { SetTokenCode(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet;

    Aws::Vector<PolicyDescriptorType> m_policyArns;
    bool m_policyArnsHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;

    Aws::String m_tokenCode;
    bool m_tokenCodeHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
