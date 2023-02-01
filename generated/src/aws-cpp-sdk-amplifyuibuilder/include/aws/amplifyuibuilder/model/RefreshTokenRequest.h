/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderRequest.h>
#include <aws/amplifyuibuilder/model/TokenProviders.h>
#include <aws/amplifyuibuilder/model/RefreshTokenRequestBody.h>
#include <utility>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   */
  class RefreshTokenRequest : public AmplifyUIBuilderRequest
  {
  public:
    AWS_AMPLIFYUIBUILDER_API RefreshTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshToken"; }

    AWS_AMPLIFYUIBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline const TokenProviders& GetProvider() const{ return m_provider; }

    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline void SetProvider(const TokenProviders& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline void SetProvider(TokenProviders&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline RefreshTokenRequest& WithProvider(const TokenProviders& value) { SetProvider(value); return *this;}

    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline RefreshTokenRequest& WithProvider(TokenProviders&& value) { SetProvider(std::move(value)); return *this;}


    /**
     * <p>Information about the refresh token request.</p>
     */
    inline const RefreshTokenRequestBody& GetRefreshTokenBody() const{ return m_refreshTokenBody; }

    /**
     * <p>Information about the refresh token request.</p>
     */
    inline bool RefreshTokenBodyHasBeenSet() const { return m_refreshTokenBodyHasBeenSet; }

    /**
     * <p>Information about the refresh token request.</p>
     */
    inline void SetRefreshTokenBody(const RefreshTokenRequestBody& value) { m_refreshTokenBodyHasBeenSet = true; m_refreshTokenBody = value; }

    /**
     * <p>Information about the refresh token request.</p>
     */
    inline void SetRefreshTokenBody(RefreshTokenRequestBody&& value) { m_refreshTokenBodyHasBeenSet = true; m_refreshTokenBody = std::move(value); }

    /**
     * <p>Information about the refresh token request.</p>
     */
    inline RefreshTokenRequest& WithRefreshTokenBody(const RefreshTokenRequestBody& value) { SetRefreshTokenBody(value); return *this;}

    /**
     * <p>Information about the refresh token request.</p>
     */
    inline RefreshTokenRequest& WithRefreshTokenBody(RefreshTokenRequestBody&& value) { SetRefreshTokenBody(std::move(value)); return *this;}

  private:

    TokenProviders m_provider;
    bool m_providerHasBeenSet = false;

    RefreshTokenRequestBody m_refreshTokenBody;
    bool m_refreshTokenBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
