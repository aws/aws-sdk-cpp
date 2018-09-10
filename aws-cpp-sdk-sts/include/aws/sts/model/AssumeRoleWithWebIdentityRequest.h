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
  class AWS_STS_API AssumeRoleWithWebIdentityRequest : public STSRequest
  {
  public:
    AssumeRoleWithWebIdentityRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRoleWithWebIdentity"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

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
    inline AssumeRoleWithWebIdentityRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetRoleSessionName() const{ return m_roleSessionName; }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(const Aws::String& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = value; }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(Aws::String&& value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName = std::move(value); }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline void SetRoleSessionName(const char* value) { m_roleSessionNameHasBeenSet = true; m_roleSessionName.assign(value); }

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleSessionName(const Aws::String& value) { SetRoleSessionName(value); return *this;}

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithRoleSessionName(Aws::String&& value) { SetRoleSessionName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the assumed role session. Typically, you pass the name or
     * identifier that is associated with the user who is using your application. That
     * way, the temporary security credentials that your application will use are
     * associated with that user. This session name is included as part of the ARN and
     * assumed role ID in the <code>AssumedRoleUser</code> response element.</p> <p>The
     * regex used to validate this parameter is a string of characters consisting of
     * upper- and lower-case alphanumeric characters with no spaces. You can also
     * include underscores or any of the following characters: =,.@-</p>
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
    inline void SetWebIdentityToken(Aws::String&& value) { m_webIdentityTokenHasBeenSet = true; m_webIdentityToken = std::move(value); }

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
    inline AssumeRoleWithWebIdentityRequest& WithWebIdentityToken(Aws::String&& value) { SetWebIdentityToken(std::move(value)); return *this;}

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
     * tokens.</p>
     */
    inline const Aws::String& GetProviderId() const{ return m_providerId; }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline void SetProviderId(const Aws::String& value) { m_providerIdHasBeenSet = true; m_providerId = value; }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline void SetProviderId(Aws::String&& value) { m_providerIdHasBeenSet = true; m_providerId = std::move(value); }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline void SetProviderId(const char* value) { m_providerIdHasBeenSet = true; m_providerId.assign(value); }

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(const Aws::String& value) { SetProviderId(value); return *this;}

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(Aws::String&& value) { SetProviderId(std::move(value)); return *this;}

    /**
     * <p>The fully qualified host component of the domain name of the identity
     * provider.</p> <p>Specify this value only for OAuth 2.0 access tokens. Currently
     * <code>www.amazon.com</code> and <code>graph.facebook.com</code> are the only
     * supported identity providers for OAuth 2.0 access tokens. Do not include URL
     * schemes and port numbers.</p> <p>Do not specify this value for OpenID Connect ID
     * tokens.</p>
     */
    inline AssumeRoleWithWebIdentityRequest& WithProviderId(const char* value) { SetProviderId(value); return *this;}


    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you
     * pass a policy, the temporary security credentials that are returned by the
     * operation have the permissions that are allowed by both the access policy of the
     * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This
     * gives you a way to further restrict the permissions for the resulting temporary
     * security credentials. You cannot use the passed policy to grant permissions that
     * are in excess of those allowed by the access policy of the role that is being
     * assumed. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
     * for AssumeRoleWithWebIdentity</a> in the <i>IAM User Guide</i>. </p> <p>The
     * format for this parameter, as described by its regex pattern, is a string of
     * characters up to 2048 characters in length. The characters can be any ASCII
     * character from the space character to the end of the valid character list
     * (\u0020-\u00FF). It can also include the tab (\u0009), linefeed (\u000A), and
     * carriage return (\u000D) characters.</p> <note> <p>The policy plain text must be
     * 2048 bytes or shorter. However, an internal conversion compresses it into a
     * packed binary format with a separate limit. The PackedPolicySize response
     * element indicates by percentage how close to the upper size limit the policy is,
     * with 100% equaling the maximum allowed size.</p> </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The duration, in seconds, of the role session. The value can range from 900
     * seconds (15 minutes) up to the maximum session duration setting for the role.
     * This setting can have a value from 1 hour to 12 hours. If you specify a value
     * higher than this setting, the operation fails. For example, if you specify a
     * session duration of 12 hours, but your administrator set the maximum session
     * duration to 6 hours, your operation fails. To learn how to view the maximum
     * value for your role, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to 3600 seconds. </p> <note>
     * <p>The <code>DurationSeconds</code> parameter is separate from the duration of a
     * console session that you might request using the returned credentials. The
     * request to the federation endpoint for a console sign-in token takes a
     * <code>SessionDuration</code> parameter that specifies the maximum length of the
     * console session. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
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
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to 3600 seconds. </p> <note>
     * <p>The <code>DurationSeconds</code> parameter is separate from the duration of a
     * console session that you might request using the returned credentials. The
     * request to the federation endpoint for a console sign-in token takes a
     * <code>SessionDuration</code> parameter that specifies the maximum length of the
     * console session. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
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
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html#id_roles_use_view-role-max-session">View
     * the Maximum Session Duration Setting for a Role</a> in the <i>IAM User
     * Guide</i>.</p> <p>By default, the value is set to 3600 seconds. </p> <note>
     * <p>The <code>DurationSeconds</code> parameter is separate from the duration of a
     * console session that you might request using the returned credentials. The
     * request to the federation endpoint for a console sign-in token takes a
     * <code>SessionDuration</code> parameter that specifies the maximum length of the
     * console session. For more information, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-custom-url.html">Creating
     * a URL that Enables Federated Users to Access the AWS Management Console</a> in
     * the <i>IAM User Guide</i>.</p> </note>
     */
    inline AssumeRoleWithWebIdentityRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

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

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
