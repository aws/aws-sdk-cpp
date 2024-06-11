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
    AWS_IOT_API UpdateAuthorizerRequest();

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
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }
    inline UpdateAuthorizerRequest& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}
    inline UpdateAuthorizerRequest& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}
    inline UpdateAuthorizerRequest& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the authorizer's Lambda function.</p>
     */
    inline const Aws::String& GetAuthorizerFunctionArn() const{ return m_authorizerFunctionArn; }
    inline bool AuthorizerFunctionArnHasBeenSet() const { return m_authorizerFunctionArnHasBeenSet; }
    inline void SetAuthorizerFunctionArn(const Aws::String& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = value; }
    inline void SetAuthorizerFunctionArn(Aws::String&& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = std::move(value); }
    inline void SetAuthorizerFunctionArn(const char* value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn.assign(value); }
    inline UpdateAuthorizerRequest& WithAuthorizerFunctionArn(const Aws::String& value) { SetAuthorizerFunctionArn(value); return *this;}
    inline UpdateAuthorizerRequest& WithAuthorizerFunctionArn(Aws::String&& value) { SetAuthorizerFunctionArn(std::move(value)); return *this;}
    inline UpdateAuthorizerRequest& WithAuthorizerFunctionArn(const char* value) { SetAuthorizerFunctionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used to extract the token from the HTTP headers. </p>
     */
    inline const Aws::String& GetTokenKeyName() const{ return m_tokenKeyName; }
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }
    inline void SetTokenKeyName(const Aws::String& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = value; }
    inline void SetTokenKeyName(Aws::String&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::move(value); }
    inline void SetTokenKeyName(const char* value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName.assign(value); }
    inline UpdateAuthorizerRequest& WithTokenKeyName(const Aws::String& value) { SetTokenKeyName(value); return *this;}
    inline UpdateAuthorizerRequest& WithTokenKeyName(Aws::String&& value) { SetTokenKeyName(std::move(value)); return *this;}
    inline UpdateAuthorizerRequest& WithTokenKeyName(const char* value) { SetTokenKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public keys used to verify the token signature.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const{ return m_tokenSigningPublicKeys; }
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }
    inline void SetTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = value; }
    inline void SetTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::move(value); }
    inline UpdateAuthorizerRequest& WithTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenSigningPublicKeys(value); return *this;}
    inline UpdateAuthorizerRequest& WithTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenSigningPublicKeys(std::move(value)); return *this;}
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(const Aws::String& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(Aws::String&& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(const Aws::String& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(Aws::String&& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(const char* key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(Aws::String&& key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }
    inline UpdateAuthorizerRequest& AddTokenSigningPublicKeys(const char* key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the update authorizer request.</p>
     */
    inline const AuthorizerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AuthorizerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AuthorizerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateAuthorizerRequest& WithStatus(const AuthorizerStatus& value) { SetStatus(value); return *this;}
    inline UpdateAuthorizerRequest& WithStatus(AuthorizerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the result from the authorizer’s Lambda function is
     * cached for the time specified in <code>refreshAfterInSeconds</code>. The cached
     * result is used while the device reuses the same HTTP connection.</p>
     */
    inline bool GetEnableCachingForHttp() const{ return m_enableCachingForHttp; }
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

    AuthorizerStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_enableCachingForHttp;
    bool m_enableCachingForHttpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
