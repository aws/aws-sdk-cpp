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
    AWS_IOT_API AuthorizerDescription();
    AWS_IOT_API AuthorizerDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthorizerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }
    inline AuthorizerDescription& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}
    inline AuthorizerDescription& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}
    inline AuthorizerDescription& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = value; }
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::move(value); }
    inline void SetAuthorizerArn(const char* value) { m_authorizerArnHasBeenSet = true; m_authorizerArn.assign(value); }
    inline AuthorizerDescription& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}
    inline AuthorizerDescription& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}
    inline AuthorizerDescription& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline const Aws::String& GetAuthorizerFunctionArn() const{ return m_authorizerFunctionArn; }
    inline bool AuthorizerFunctionArnHasBeenSet() const { return m_authorizerFunctionArnHasBeenSet; }
    inline void SetAuthorizerFunctionArn(const Aws::String& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = value; }
    inline void SetAuthorizerFunctionArn(Aws::String&& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = std::move(value); }
    inline void SetAuthorizerFunctionArn(const char* value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn.assign(value); }
    inline AuthorizerDescription& WithAuthorizerFunctionArn(const Aws::String& value) { SetAuthorizerFunctionArn(value); return *this;}
    inline AuthorizerDescription& WithAuthorizerFunctionArn(Aws::String&& value) { SetAuthorizerFunctionArn(std::move(value)); return *this;}
    inline AuthorizerDescription& WithAuthorizerFunctionArn(const char* value) { SetAuthorizerFunctionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline const Aws::String& GetTokenKeyName() const{ return m_tokenKeyName; }
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }
    inline void SetTokenKeyName(const Aws::String& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = value; }
    inline void SetTokenKeyName(Aws::String&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::move(value); }
    inline void SetTokenKeyName(const char* value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName.assign(value); }
    inline AuthorizerDescription& WithTokenKeyName(const Aws::String& value) { SetTokenKeyName(value); return *this;}
    inline AuthorizerDescription& WithTokenKeyName(Aws::String&& value) { SetTokenKeyName(std::move(value)); return *this;}
    inline AuthorizerDescription& WithTokenKeyName(const char* value) { SetTokenKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const{ return m_tokenSigningPublicKeys; }
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }
    inline void SetTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = value; }
    inline void SetTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::move(value); }
    inline AuthorizerDescription& WithTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenSigningPublicKeys(value); return *this;}
    inline AuthorizerDescription& WithTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenSigningPublicKeys(std::move(value)); return *this;}
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const Aws::String& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const Aws::String& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const char* key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const char* key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the authorizer.</p>
     */
    inline const AuthorizerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AuthorizerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AuthorizerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AuthorizerDescription& WithStatus(const AuthorizerStatus& value) { SetStatus(value); return *this;}
    inline AuthorizerDescription& WithStatus(AuthorizerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline AuthorizerDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline AuthorizerDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline AuthorizerDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline AuthorizerDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether IoT validates the token signature in an authorization
     * request.</p>
     */
    inline bool GetSigningDisabled() const{ return m_signingDisabled; }
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
    inline bool GetEnableCachingForHttp() const{ return m_enableCachingForHttp; }
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

    AuthorizerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    bool m_signingDisabled;
    bool m_signingDisabledHasBeenSet = false;

    bool m_enableCachingForHttp;
    bool m_enableCachingForHttpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
