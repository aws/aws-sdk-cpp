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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateAuthorizerRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateAuthorizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAuthorizer"; }

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
    CreateAuthorizerRequest& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
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
    CreateAuthorizerRequest& WithAuthorizerFunctionArn(AuthorizerFunctionArnT&& value) { SetAuthorizerFunctionArn(std::forward<AuthorizerFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the token key used to extract the token from the HTTP
     * headers.</p>
     */
    inline const Aws::String& GetTokenKeyName() const { return m_tokenKeyName; }
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }
    template<typename TokenKeyNameT = Aws::String>
    void SetTokenKeyName(TokenKeyNameT&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::forward<TokenKeyNameT>(value); }
    template<typename TokenKeyNameT = Aws::String>
    CreateAuthorizerRequest& WithTokenKeyName(TokenKeyNameT&& value) { SetTokenKeyName(std::forward<TokenKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public keys used to verify the digital signature returned by your custom
     * authentication service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const { return m_tokenSigningPublicKeys; }
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    void SetTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::forward<TokenSigningPublicKeysT>(value); }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    CreateAuthorizerRequest& WithTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { SetTokenSigningPublicKeys(std::forward<TokenSigningPublicKeysT>(value)); return *this;}
    template<typename TokenSigningPublicKeysKeyT = Aws::String, typename TokenSigningPublicKeysValueT = Aws::String>
    CreateAuthorizerRequest& AddTokenSigningPublicKeys(TokenSigningPublicKeysKeyT&& key, TokenSigningPublicKeysValueT&& value) {
      m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::forward<TokenSigningPublicKeysKeyT>(key), std::forward<TokenSigningPublicKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the create authorizer request.</p>
     */
    inline AuthorizerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AuthorizerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateAuthorizerRequest& WithStatus(AuthorizerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the custom authorizer.</p>  <p>For
     * URI Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For
     * the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAuthorizerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAuthorizerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether IoT validates the token signature in an authorization
     * request.</p>
     */
    inline bool GetSigningDisabled() const { return m_signingDisabled; }
    inline bool SigningDisabledHasBeenSet() const { return m_signingDisabledHasBeenSet; }
    inline void SetSigningDisabled(bool value) { m_signingDisabledHasBeenSet = true; m_signingDisabled = value; }
    inline CreateAuthorizerRequest& WithSigningDisabled(bool value) { SetSigningDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the result from the authorizer’s Lambda function is
     * cached for clients that use persistent HTTP connections. The results are cached
     * for the time specified by the Lambda function in
     * <code>refreshAfterInSeconds</code>. This value does not affect authorization of
     * clients that use MQTT connections.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline bool GetEnableCachingForHttp() const { return m_enableCachingForHttp; }
    inline bool EnableCachingForHttpHasBeenSet() const { return m_enableCachingForHttpHasBeenSet; }
    inline void SetEnableCachingForHttp(bool value) { m_enableCachingForHttpHasBeenSet = true; m_enableCachingForHttp = value; }
    inline CreateAuthorizerRequest& WithEnableCachingForHttp(bool value) { SetEnableCachingForHttp(value); return *this;}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_signingDisabled{false};
    bool m_signingDisabledHasBeenSet = false;

    bool m_enableCachingForHttp{false};
    bool m_enableCachingForHttpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
