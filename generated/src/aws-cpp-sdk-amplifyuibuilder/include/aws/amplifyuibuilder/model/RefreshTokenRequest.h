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
    AWS_AMPLIFYUIBUILDER_API RefreshTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshToken"; }

    AWS_AMPLIFYUIBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The third-party provider for the token. The only valid value is
     * <code>figma</code>.</p>
     */
    inline TokenProviders GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(TokenProviders value) { m_providerHasBeenSet = true; m_provider = value; }
    inline RefreshTokenRequest& WithProvider(TokenProviders value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the refresh token request.</p>
     */
    inline const RefreshTokenRequestBody& GetRefreshTokenBody() const { return m_refreshTokenBody; }
    inline bool RefreshTokenBodyHasBeenSet() const { return m_refreshTokenBodyHasBeenSet; }
    template<typename RefreshTokenBodyT = RefreshTokenRequestBody>
    void SetRefreshTokenBody(RefreshTokenBodyT&& value) { m_refreshTokenBodyHasBeenSet = true; m_refreshTokenBody = std::forward<RefreshTokenBodyT>(value); }
    template<typename RefreshTokenBodyT = RefreshTokenRequestBody>
    RefreshTokenRequest& WithRefreshTokenBody(RefreshTokenBodyT&& value) { SetRefreshTokenBody(std::forward<RefreshTokenBodyT>(value)); return *this;}
    ///@}
  private:

    TokenProviders m_provider{TokenProviders::NOT_SET};
    bool m_providerHasBeenSet = false;

    RefreshTokenRequestBody m_refreshTokenBody;
    bool m_refreshTokenBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
