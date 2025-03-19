/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuthorizerStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorizer description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthorizerDescription">AWS
   * API Reference</a></p>
   */
  class AuthorizerDescription
  {
  public:
    AWS_IOT_API AuthorizerDescription() = default;
    AWS_IOT_API AuthorizerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthorizerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    AuthorizerDescription& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const { return m_authorizerArn; }
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }
    template<typename AuthorizerArnT = Aws::String>
    void SetAuthorizerArn(AuthorizerArnT&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::forward<AuthorizerArnT>(value); }
    template<typename AuthorizerArnT = Aws::String>
    AuthorizerDescription& WithAuthorizerArn(AuthorizerArnT&& value) { SetAuthorizerArn(std::forward<AuthorizerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline const Aws::String& GetAuthorizerFunctionArn() const { return m_authorizerFunctionArn; }
    inline bool AuthorizerFunctionArnHasBeenSet() const { return m_authorizerFunctionArnHasBeenSet; }
    template<typename AuthorizerFunctionArnT = Aws::String>
    void SetAuthorizerFunctionArn(AuthorizerFunctionArnT&& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = std::forward<AuthorizerFunctionArnT>(value); }
    template<typename AuthorizerFunctionArnT = Aws::String>
    AuthorizerDescription& WithAuthorizerFunctionArn(AuthorizerFunctionArnT&& value) { SetAuthorizerFunctionArn(std::forward<AuthorizerFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline const Aws::String& GetTokenKeyName() const { return m_tokenKeyName; }
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }
    template<typename TokenKeyNameT = Aws::String>
    void SetTokenKeyName(TokenKeyNameT&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::forward<TokenKeyNameT>(value); }
    template<typename TokenKeyNameT = Aws::String>
    AuthorizerDescription& WithTokenKeyName(TokenKeyNameT&& value) { SetTokenKeyName(std::forward<TokenKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const { return m_tokenSigningPublicKeys; }
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    void SetTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::forward<TokenSigningPublicKeysT>(value); }
    template<typename TokenSigningPublicKeysT = Aws::Map<Aws::String, Aws::String>>
    AuthorizerDescription& WithTokenSigningPublicKeys(TokenSigningPublicKeysT&& value) { SetTokenSigningPublicKeys(std::forward<TokenSigningPublicKeysT>(value)); return *this;}
    template<typename TokenSigningPublicKeysKeyT = Aws::String, typename TokenSigningPublicKeysValueT = Aws::String>
    AuthorizerDescription& AddTokenSigningPublicKeys(TokenSigningPublicKeysKeyT&& key, TokenSigningPublicKeysValueT&& value) {
      m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::forward<TokenSigningPublicKeysKeyT>(key), std::forward<TokenSigningPublicKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the authorizer.</p>
     */
    inline AuthorizerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AuthorizerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AuthorizerDescription& WithStatus(AuthorizerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    AuthorizerDescription& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    AuthorizerDescription& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether IoT validates the token signature in an authorization
     * request.</p>
     */
    inline bool GetSigningDisabled() const { return m_signingDisabled; }
    inline bool SigningDisabledHasBeenSet() const { return m_signingDisabledHasBeenSet; }
    inline void SetSigningDisabled(bool value) { m_signingDisabledHasBeenSet = true; m_signingDisabled = value; }
    inline AuthorizerDescription& WithSigningDisabled(bool value) { SetSigningDisabled(value); return *this;}
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
    inline AuthorizerDescription& WithEnableCachingForHttp(bool value) { SetEnableCachingForHttp(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;

    Aws::String m_authorizerArn;
    bool m_authorizerArnHasBeenSet = false;

    Aws::String m_authorizerFunctionArn;
    bool m_authorizerFunctionArnHasBeenSet = false;

    Aws::String m_tokenKeyName;
    bool m_tokenKeyNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenSigningPublicKeys;
    bool m_tokenSigningPublicKeysHasBeenSet = false;

    AuthorizerStatus m_status{AuthorizerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    bool m_signingDisabled{false};
    bool m_signingDisabledHasBeenSet = false;

    bool m_enableCachingForHttp{false};
    bool m_enableCachingForHttpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
