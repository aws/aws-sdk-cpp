/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/SSORequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SSO
{
namespace Model
{

  /**
   */
  class GetRoleCredentialsRequest : public SSORequest
  {
  public:
    AWS_SSO_API GetRoleCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRoleCredentials"; }

    AWS_SSO_API Aws::String SerializePayload() const override;

    AWS_SSO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_SSO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS account that is assigned to the user.</p>
     */
    inline GetRoleCredentialsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline GetRoleCredentialsRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline GetRoleCredentialsRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The token issued by the <code>CreateToken</code> API call. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/API_CreateToken.html">CreateToken</a>
     * in the <i>IAM Identity Center OIDC API Reference Guide</i>.</p>
     */
    inline GetRoleCredentialsRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
