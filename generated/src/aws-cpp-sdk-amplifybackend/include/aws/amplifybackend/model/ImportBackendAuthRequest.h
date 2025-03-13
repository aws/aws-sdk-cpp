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
    AWS_AMPLIFYBACKEND_API ImportBackendAuthRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportBackendAuth"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    ImportBackendAuthRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const { return m_backendEnvironmentName; }
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }
    template<typename BackendEnvironmentNameT = Aws::String>
    void SetBackendEnvironmentName(BackendEnvironmentNameT&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::forward<BackendEnvironmentNameT>(value); }
    template<typename BackendEnvironmentNameT = Aws::String>
    ImportBackendAuthRequest& WithBackendEnvironmentName(BackendEnvironmentNameT&& value) { SetBackendEnvironmentName(std::forward<BackendEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito identity pool.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    ImportBackendAuthRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito native client.</p>
     */
    inline const Aws::String& GetNativeClientId() const { return m_nativeClientId; }
    inline bool NativeClientIdHasBeenSet() const { return m_nativeClientIdHasBeenSet; }
    template<typename NativeClientIdT = Aws::String>
    void SetNativeClientId(NativeClientIdT&& value) { m_nativeClientIdHasBeenSet = true; m_nativeClientId = std::forward<NativeClientIdT>(value); }
    template<typename NativeClientIdT = Aws::String>
    ImportBackendAuthRequest& WithNativeClientId(NativeClientIdT&& value) { SetNativeClientId(std::forward<NativeClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    ImportBackendAuthRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Cognito web client.</p>
     */
    inline const Aws::String& GetWebClientId() const { return m_webClientId; }
    inline bool WebClientIdHasBeenSet() const { return m_webClientIdHasBeenSet; }
    template<typename WebClientIdT = Aws::String>
    void SetWebClientId(WebClientIdT&& value) { m_webClientIdHasBeenSet = true; m_webClientId = std::forward<WebClientIdT>(value); }
    template<typename WebClientIdT = Aws::String>
    ImportBackendAuthRequest& WithWebClientId(WebClientIdT&& value) { SetWebClientId(std::forward<WebClientIdT>(value)); return *this;}
    ///@}
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
