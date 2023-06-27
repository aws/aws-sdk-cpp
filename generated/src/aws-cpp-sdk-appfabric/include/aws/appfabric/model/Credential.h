/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/Oauth2Credential.h>
#include <aws/appfabric/model/ApiKeyCredential.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains credential information for an application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/Credential">AWS
   * API Reference</a></p>
   */
  class Credential
  {
  public:
    AWS_APPFABRIC_API Credential();
    AWS_APPFABRIC_API Credential(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Credential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline const Oauth2Credential& GetOauth2Credential() const{ return m_oauth2Credential; }

    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline bool Oauth2CredentialHasBeenSet() const { return m_oauth2CredentialHasBeenSet; }

    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline void SetOauth2Credential(const Oauth2Credential& value) { m_oauth2CredentialHasBeenSet = true; m_oauth2Credential = value; }

    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline void SetOauth2Credential(Oauth2Credential&& value) { m_oauth2CredentialHasBeenSet = true; m_oauth2Credential = std::move(value); }

    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline Credential& WithOauth2Credential(const Oauth2Credential& value) { SetOauth2Credential(value); return *this;}

    /**
     * <p>Contains OAuth2 client credential information.</p>
     */
    inline Credential& WithOauth2Credential(Oauth2Credential&& value) { SetOauth2Credential(std::move(value)); return *this;}


    /**
     * <p>Contains API key credential information.</p>
     */
    inline const ApiKeyCredential& GetApiKeyCredential() const{ return m_apiKeyCredential; }

    /**
     * <p>Contains API key credential information.</p>
     */
    inline bool ApiKeyCredentialHasBeenSet() const { return m_apiKeyCredentialHasBeenSet; }

    /**
     * <p>Contains API key credential information.</p>
     */
    inline void SetApiKeyCredential(const ApiKeyCredential& value) { m_apiKeyCredentialHasBeenSet = true; m_apiKeyCredential = value; }

    /**
     * <p>Contains API key credential information.</p>
     */
    inline void SetApiKeyCredential(ApiKeyCredential&& value) { m_apiKeyCredentialHasBeenSet = true; m_apiKeyCredential = std::move(value); }

    /**
     * <p>Contains API key credential information.</p>
     */
    inline Credential& WithApiKeyCredential(const ApiKeyCredential& value) { SetApiKeyCredential(value); return *this;}

    /**
     * <p>Contains API key credential information.</p>
     */
    inline Credential& WithApiKeyCredential(ApiKeyCredential&& value) { SetApiKeyCredential(std::move(value)); return *this;}

  private:

    Oauth2Credential m_oauth2Credential;
    bool m_oauth2CredentialHasBeenSet = false;

    ApiKeyCredential m_apiKeyCredential;
    bool m_apiKeyCredentialHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
