/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuthorizerStatus.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateAuthorizerRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateAuthorizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthorizer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    UpdateAuthorizerRequest& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the authorizer's Lambda function.</p>
     */
    inline const Aws::String& GetAuthorizerFunctionArn() const { return m_authorizerFunctionArn; }
    inline bool AuthorizerFunctionArnHasBeenSet() const { return m_authorizerFunctionArnHasBeenSet; }
    template<typename AuthorizerFunctionArnT = Aws::String>
    void SetAuthorizerFunctionArn(AuthorizerFunctionArnT&& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = std::forward<AuthorizerFunctionArnT>(value); }
    template<typename AuthorizerFunctionArnT = Aws::String>
    UpdateAuthorizerRequest& WithAuthorizerFunctionArn(AuthorizerFunctionArnT&& value) { SetAuthorizerFunctionArn(std::forward<AuthorizerFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used to extract the token from the HTTP headers. </p>
     */
    inline const Aws::String& GetTokenKeyName() const { return m_tokenKeyName; }
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }
    template<typename TokenKeyNameT = Aws::String>
    void SetTokenKeyName(TokenKeyNameT&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::forward<TokenKeyNameT>(value); }
    template<typename TokenKeyNameT = Aws::String>
    UpdateAuthorizerRequest& WithTokenKeyName(TokenKeyNameT&& value) { SetTokenKeyName(std::forward<TokenKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public keys used to verify the token signature.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const { return m_tokenSigningPublicKeys; }
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    void SetTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::forward<TokenSigningPublicKeysT>(value); }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    UpdateAuthorizerRequest& WithTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { SetTokenSigningPublicKeys(std::forward<TokenSigningPublicKeysT>(value)); return *this;}
    template<typename TokenSigningPublicKeysKeyT = Aws::String, typename TokenSigningPublicKeysValueT = Aws::String>
    UpdateAuthorizerRequest& AddTokenSigningPublicKeys(TokenSigningPublicKeysKeyT&& key, TokenSigningPublicKeysValueT&& value) {
      m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::forward<TokenSigningPublicKeysKeyT>(key), std::forward<TokenSigningPublicKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the update authorizer request.</p>
     */
    inline AuthorizerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AuthorizerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAuthorizerRequest& WithStatus(AuthorizerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the result from the authorizer’s Lambda function is
     * cached for the time specified in <code>refreshAfterInSeconds</code>. The cached
     * result is used while the device reuses the same HTTP connection.</p>
     */
    inline bool GetEnableCachingForHttp() const { return m_enableCachingForHttp; }
    inline bool EnableCachingForHttpHasBeenSet() const { return m_enableCachingForHttpHasBeenSet; }
    inline void SetEnableCachingForHttp(bool value) { m_enableCachingForHttpHasBeenSet = true; m_enableCachingForHttp = value; }
    inline UpdateAuthorizerRequest& WithEnableCachingForHttp(bool value) { SetEnableCachingForHttp(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;

    Aws::String m_authorizerFunctionArn;
    bool m_authorizerFunctionArnHasBeenSet = false;

    Aws::String m_tokenKeyName;
    bool m_tokenKeyNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenSigningPublicKeys;
    bool m_tokenSigningPublicKeysHasBeenSet = false;

    AuthorizerStatus m_status{AuthorizerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_enableCachingForHttp{false};
    bool m_enableCachingForHttpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
