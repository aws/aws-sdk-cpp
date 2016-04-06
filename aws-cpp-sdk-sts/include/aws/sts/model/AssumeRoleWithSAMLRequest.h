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
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AWS_STS_API AssumeRoleWithSAMLRequest : public STSRequest
  {
  public:
    AssumeRoleWithSAMLRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider in IAM that describes the
     * IdP.</p>
     */
    inline AssumeRoleWithSAMLRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetSAMLAssertion() const{ return m_sAMLAssertion; }

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetSAMLAssertion(const Aws::String& value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion = value; }

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetSAMLAssertion(Aws::String&& value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion = value; }

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetSAMLAssertion(const char* value) { m_sAMLAssertionHasBeenSet = true; m_sAMLAssertion.assign(value); }

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline AssumeRoleWithSAMLRequest& WithSAMLAssertion(const Aws::String& value) { SetSAMLAssertion(value); return *this;}

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline AssumeRoleWithSAMLRequest& WithSAMLAssertion(Aws::String&& value) { SetSAMLAssertion(value); return *this;}

    /**
     * <p>The base-64 encoded SAML authentication response provided by the IdP.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/create-role-saml-IdP-tasks.html">Configuring
     * a Relying Party and Adding Claims</a> in the <i>Using IAM</i> guide. </p>
     */
    inline AssumeRoleWithSAMLRequest& WithSAMLAssertion(const char* value) { SetSAMLAssertion(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline AssumeRoleWithSAMLRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline AssumeRoleWithSAMLRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the
     * <i>IAM User Guide</i>. </p> <note>The policy plain text must be 2048 bytes or
     * shorter. However, an internal conversion compresses it into a packed binary
     * format with a separate limit. The PackedPolicySize response element indicates by
     * percentage how close to the upper size limit the policy is, with 100% equaling
     * the maximum allowed size. </note>
     */
    inline AssumeRoleWithSAMLRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. An expiration can also be specified in the SAML authentication
     * response's <code>SessionNotOnOrAfter</code> value. The actual expiration time is
     * whichever value is shorter. </p> <note>The maximum duration for a session is 1
     * hour, and the minimum duration is 15 minutes, even if values outside this range
     * are specified. </note>
     */
    inline long GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. An expiration can also be specified in the SAML authentication
     * response's <code>SessionNotOnOrAfter</code> value. The actual expiration time is
     * whichever value is shorter. </p> <note>The maximum duration for a session is 1
     * hour, and the minimum duration is 15 minutes, even if values outside this range
     * are specified. </note>
     */
    inline void SetDurationSeconds(long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. An expiration can also be specified in the SAML authentication
     * response's <code>SessionNotOnOrAfter</code> value. The actual expiration time is
     * whichever value is shorter. </p> <note>The maximum duration for a session is 1
     * hour, and the minimum duration is 15 minutes, even if values outside this range
     * are specified. </note>
     */
    inline AssumeRoleWithSAMLRequest& WithDurationSeconds(long value) { SetDurationSeconds(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet;
    Aws::String m_sAMLAssertion;
    bool m_sAMLAssertionHasBeenSet;
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    long m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
