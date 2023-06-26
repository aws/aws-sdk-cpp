/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/AmplifyBackendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The request body for ImportBackendAuth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendAuthRequest">AWS
   * API Reference</a></p>
   */
  class ImportBackendAuthRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API ImportBackendAuthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportBackendAuth"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline ImportBackendAuthRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline ImportBackendAuthRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline ImportBackendAuthRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = value; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::move(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName.assign(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline ImportBackendAuthRequest& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline ImportBackendAuthRequest& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline ImportBackendAuthRequest& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline ImportBackendAuthRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline ImportBackendAuthRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline ImportBackendAuthRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline const Aws::String& GetNativeClientId() const{ return m_nativeClientId; }

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline bool NativeClientIdHasBeenSet() const { return m_nativeClientIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline void SetNativeClientId(const Aws::String& value) { m_nativeClientIdHasBeenSet = true; m_nativeClientId = value; }

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline void SetNativeClientId(Aws::String&& value) { m_nativeClientIdHasBeenSet = true; m_nativeClientId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline void SetNativeClientId(const char* value) { m_nativeClientIdHasBeenSet = true; m_nativeClientId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline ImportBackendAuthRequest& WithNativeClientId(const Aws::String& value) { SetNativeClientId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline ImportBackendAuthRequest& WithNativeClientId(Aws::String&& value) { SetNativeClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline ImportBackendAuthRequest& WithNativeClientId(const char* value) { SetNativeClientId(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline ImportBackendAuthRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline ImportBackendAuthRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline ImportBackendAuthRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline const Aws::String& GetWebClientId() const{ return m_webClientId; }

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline bool WebClientIdHasBeenSet() const { return m_webClientIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline void SetWebClientId(const Aws::String& value) { m_webClientIdHasBeenSet = true; m_webClientId = value; }

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline void SetWebClientId(Aws::String&& value) { m_webClientIdHasBeenSet = true; m_webClientId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline void SetWebClientId(const char* value) { m_webClientIdHasBeenSet = true; m_webClientId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline ImportBackendAuthRequest& WithWebClientId(const Aws::String& value) { SetWebClientId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline ImportBackendAuthRequest& WithWebClientId(Aws::String&& value) { SetWebClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline ImportBackendAuthRequest& WithWebClientId(const char* value) { SetWebClientId(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_nativeClientId;
    bool m_nativeClientIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_webClientId;
    bool m_webClientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
