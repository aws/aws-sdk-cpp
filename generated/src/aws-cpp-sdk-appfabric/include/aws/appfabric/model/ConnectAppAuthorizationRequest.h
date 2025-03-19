/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/AuthRequest.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class ConnectAppAuthorizationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API ConnectAppAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConnectAppAuthorization"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const { return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    template<typename AppBundleIdentifierT = Aws::String>
    void SetAppBundleIdentifier(AppBundleIdentifierT&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::forward<AppBundleIdentifierT>(value); }
    template<typename AppBundleIdentifierT = Aws::String>
    ConnectAppAuthorizationRequest& WithAppBundleIdentifier(AppBundleIdentifierT&& value) { SetAppBundleIdentifier(std::forward<AppBundleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppAuthorizationIdentifier() const { return m_appAuthorizationIdentifier; }
    inline bool AppAuthorizationIdentifierHasBeenSet() const { return m_appAuthorizationIdentifierHasBeenSet; }
    template<typename AppAuthorizationIdentifierT = Aws::String>
    void SetAppAuthorizationIdentifier(AppAuthorizationIdentifierT&& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = std::forward<AppAuthorizationIdentifierT>(value); }
    template<typename AppAuthorizationIdentifierT = Aws::String>
    ConnectAppAuthorizationRequest& WithAppAuthorizationIdentifier(AppAuthorizationIdentifierT&& value) { SetAppAuthorizationIdentifier(std::forward<AppAuthorizationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline const AuthRequest& GetAuthRequest() const { return m_authRequest; }
    inline bool AuthRequestHasBeenSet() const { return m_authRequestHasBeenSet; }
    template<typename AuthRequestT = AuthRequest>
    void SetAuthRequest(AuthRequestT&& value) { m_authRequestHasBeenSet = true; m_authRequest = std::forward<AuthRequestT>(value); }
    template<typename AuthRequestT = AuthRequest>
    ConnectAppAuthorizationRequest& WithAuthRequest(AuthRequestT&& value) { SetAuthRequest(std::forward<AuthRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_appAuthorizationIdentifier;
    bool m_appAuthorizationIdentifierHasBeenSet = false;

    AuthRequest m_authRequest;
    bool m_authRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
