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
  class AWS_STS_API AssumeRoleWithWebIdentityRequest : public STSRequest
  {
  public:
    AssumeRoleWithWebIdentityRequest();
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
    inline AssumeRoleWithWebIdentityRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline const Aws::String& GetRoleSessionName() const{ return m_roleSessionName; }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline void SetRoleSessionName(const Aws::String& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = value; }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline void SetRoleSessionName(Aws::String&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = value; }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline void SetRoleSessionName(const char* value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName.assign(value); }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleSessionName(const Aws::String& value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleSessionName(Aws::String&& value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleSessionName(const char* value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline const Aws::String& GetWebIdentityToken() const{ return m_webIdentityToken; }

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline void SetWebIdentityToken(const Aws::String& value) { m_webIdentityTokenHasBeenSet = true; m_webIdentityToken = value; }

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline void SetWebIdentityToken(Aws::String&& value) { m_webIdentityTokenHasBeenSet = true; m_webIdentityToken = value; }

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline void SetWebIdentityToken(const char* value) { m_webIdentityTokenHasBeenSet = true; m_webIdentityToken.assign(value); }

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithWebIdentityToken(const Aws::String& value) { SetWebIdentityToken(value); return *this;}

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithWebIdentityToken(Aws::String&& value) { SetWebIdentityToken(value); return *this;}

    /**
     * <p>The OAuth 2.0 access token or OpenID Connect ID token that is provided by the
     * identity provider. Your application must get this token by authenticating the
     * user who is using your application with a web identity provider before the
     * application makes an <code>AssumeRoleWithWebIdentity</code> call. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithWebIdentityToken(const char* value) { SetWebIdentityToken(value); return *this;}

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline const Aws::String& GetProviderId() const{ return m_providerId; }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline void SetProviderId(const Aws::String& value) { m_providerIdHasBeenSet = true; m_providerId = value; }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline void SetProviderId(Aws::String&& value) { m_providerIdHasBeenSet = true; m_providerId = value; }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline void SetProviderId(const char* value) { m_providerIdHasBeenSet = true; m_providerId.assign(value); }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(const Aws::String& value) { SetProviderId(value); return *this;}

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(Aws::String&& value) { SetProviderId(value); return *this;}

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(const char* value) { SetProviderId(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
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
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
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
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
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
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
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
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i><b>and</b></i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <note>The
     * policy plain text must be 2048 bytes or shorter. However, an internal conversion
     * compresses it into a packed binary format with a separate limit. The
     * PackedPolicySize response element indicates by percentage how close to the upper
     * size limit the policy is, with 100% equaling the maximum allowed size. </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. </p>
     */
    inline long GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. </p>
     */
    inline void SetDurationSeconds(long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to
     * 3600 seconds. </p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithDurationSeconds(long value) { SetDurationSeconds(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    Aws::String m_roleSessionName;
    bool m_roleSessionNameHasBeenSet;
    Aws::String m_webIdentityToken;
    bool m_webIdentityTokenHasBeenSet;
    Aws::String m_providerId;
    bool m_providerIdHasBeenSet;
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    long m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
