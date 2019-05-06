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
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline GetFederationTokenRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline GetFederationTokenRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy in JSON format. You must pass an IAM permissions policy to
     * <code>GetFederationToken</code>. When you pass a policy to this operation, the
     * resulting temporary credentials are defined by the intersection of your IAM user
     * policies and the policy that you pass. The passed policy defines the permissions
     * of the <i>federated user</i>. AWS allows the federated user's request only when
     * both the attached policy and the IAM user policy explicitly allow the federated
     * user to perform the requested action. The passed policy cannot grant more
     * permissions than those that are defined in the IAM user policy.</p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plaintext must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The <code>PackedPolicySize</code>
     * response element indicates by percentage how close to the upper size limit the
     * policy is, where 100 percent is the maximum allowed size.</p> </note> <p>For
     * more information about how permissions work, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
     * for GetFederationToken</a>.</p>
     */
    inline GetFederationTokenRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


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

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
