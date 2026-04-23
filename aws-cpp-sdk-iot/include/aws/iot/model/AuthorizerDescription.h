/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API AuthorizerDescription
  {
  public:
    AuthorizerDescription();
    AuthorizerDescription(Aws::Utils::Json::JsonView jsonValue);
    AuthorizerDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The authorizer name.</p>
     */
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerDescription& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerDescription& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline AuthorizerDescription& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}


    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline bool AuthorizerArnHasBeenSet() const { return m_authorizerArnHasBeenSet; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = value; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArnHasBeenSet = true; m_authorizerArn = std::move(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const char* value) { m_authorizerArnHasBeenSet = true; m_authorizerArn.assign(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}


    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline const Aws::String& GetAuthorizerFunctionArn() const{ return m_authorizerFunctionArn; }

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline bool AuthorizerFunctionArnHasBeenSet() const { return m_authorizerFunctionArnHasBeenSet; }

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline void SetAuthorizerFunctionArn(const Aws::String& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = value; }

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline void SetAuthorizerFunctionArn(Aws::String&& value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn = std::move(value); }

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline void SetAuthorizerFunctionArn(const char* value) { m_authorizerFunctionArnHasBeenSet = true; m_authorizerFunctionArn.assign(value); }

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerFunctionArn(const Aws::String& value) { SetAuthorizerFunctionArn(value); return *this;}

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerFunctionArn(Aws::String&& value) { SetAuthorizerFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The authorizer's Lambda function ARN.</p>
     */
    inline AuthorizerDescription& WithAuthorizerFunctionArn(const char* value) { SetAuthorizerFunctionArn(value); return *this;}


    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline const Aws::String& GetTokenKeyName() const{ return m_tokenKeyName; }

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline bool TokenKeyNameHasBeenSet() const { return m_tokenKeyNameHasBeenSet; }

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline void SetTokenKeyName(const Aws::String& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = value; }

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline void SetTokenKeyName(Aws::String&& value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName = std::move(value); }

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline void SetTokenKeyName(const char* value) { m_tokenKeyNameHasBeenSet = true; m_tokenKeyName.assign(value); }

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline AuthorizerDescription& WithTokenKeyName(const Aws::String& value) { SetTokenKeyName(value); return *this;}

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline AuthorizerDescription& WithTokenKeyName(Aws::String&& value) { SetTokenKeyName(std::move(value)); return *this;}

    /**
     * <p>The key used to extract the token from the HTTP headers.</p>
     */
    inline AuthorizerDescription& WithTokenKeyName(const char* value) { SetTokenKeyName(value); return *this;}


    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenSigningPublicKeys() const{ return m_tokenSigningPublicKeys; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline bool TokenSigningPublicKeysHasBeenSet() const { return m_tokenSigningPublicKeysHasBeenSet; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline void SetTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = value; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline void SetTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys = std::move(value); }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& WithTokenSigningPublicKeys(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenSigningPublicKeys(value); return *this;}

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& WithTokenSigningPublicKeys(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenSigningPublicKeys(std::move(value)); return *this;}

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const Aws::String& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, const Aws::String& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const Aws::String& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const char* key, Aws::String&& value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(Aws::String&& key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(std::move(key), value); return *this; }

    /**
     * <p>The public keys used to validate the token signature returned by your custom
     * authentication service.</p>
     */
    inline AuthorizerDescription& AddTokenSigningPublicKeys(const char* key, const char* value) { m_tokenSigningPublicKeysHasBeenSet = true; m_tokenSigningPublicKeys.emplace(key, value); return *this; }


    /**
     * <p>The status of the authorizer.</p>
     */
    inline const AuthorizerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the authorizer.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the authorizer.</p>
     */
    inline void SetStatus(const AuthorizerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the authorizer.</p>
     */
    inline void SetStatus(AuthorizerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the authorizer.</p>
     */
    inline AuthorizerDescription& WithStatus(const AuthorizerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the authorizer.</p>
     */
    inline AuthorizerDescription& WithStatus(AuthorizerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline AuthorizerDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UNIX timestamp of when the authorizer was created.</p>
     */
    inline AuthorizerDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline AuthorizerDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The UNIX timestamp of when the authorizer was last updated.</p>
     */
    inline AuthorizerDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet;

    Aws::String m_authorizerArn;
    bool m_authorizerArnHasBeenSet;

    Aws::String m_authorizerFunctionArn;
    bool m_authorizerFunctionArnHasBeenSet;

    Aws::String m_tokenKeyName;
    bool m_tokenKeyNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tokenSigningPublicKeys;
    bool m_tokenSigningPublicKeysHasBeenSet;

    AuthorizerStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
