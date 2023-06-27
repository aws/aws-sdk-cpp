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
    AWS_APPFABRIC_API ConnectAppAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConnectAppAuthorization"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle that contains the app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppAuthorizationIdentifier() const{ return m_appAuthorizationIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline bool AppAuthorizationIdentifierHasBeenSet() const { return m_appAuthorizationIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(const Aws::String& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(Aws::String&& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(const char* value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppAuthorizationIdentifier(const Aws::String& value) { SetAppAuthorizationIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppAuthorizationIdentifier(Aws::String&& value) { SetAppAuthorizationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAppAuthorizationIdentifier(const char* value) { SetAppAuthorizationIdentifier(value); return *this;}


    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline const AuthRequest& GetAuthRequest() const{ return m_authRequest; }

    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline bool AuthRequestHasBeenSet() const { return m_authRequestHasBeenSet; }

    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline void SetAuthRequest(const AuthRequest& value) { m_authRequestHasBeenSet = true; m_authRequest = value; }

    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline void SetAuthRequest(AuthRequest&& value) { m_authRequestHasBeenSet = true; m_authRequest = std::move(value); }

    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAuthRequest(const AuthRequest& value) { SetAuthRequest(value); return *this;}

    /**
     * <p>Contains OAuth2 authorization information.</p> <p>This is required if the app
     * authorization for the request is configured with an OAuth2 (<code>oauth2</code>)
     * authorization type.</p>
     */
    inline ConnectAppAuthorizationRequest& WithAuthRequest(AuthRequest&& value) { SetAuthRequest(std::move(value)); return *this;}

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
