/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateTokenRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline CreateTokenRequest& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline CreateTokenRequest& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline CreateTokenRequest& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const{ return m_roleArns; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline void SetRoleArns(const Aws::Vector<Aws::String>& value) { m_roleArnsHasBeenSet = true; m_roleArns = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline void SetRoleArns(Aws::Vector<Aws::String>&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline CreateTokenRequest& WithRoleArns(const Aws::Vector<Aws::String>& value) { SetRoleArns(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline CreateTokenRequest& WithRoleArns(Aws::Vector<Aws::String>&& value) { SetRoleArns(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline CreateTokenRequest& AddRoleArns(const Aws::String& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline CreateTokenRequest& AddRoleArns(Aws::String&& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline CreateTokenRequest& AddRoleArns(const char* value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }


    /**
     * <p>Token expiration, in days, counted from token creation. The default is 365
     * days.</p>
     */
    inline int GetExpirationInDays() const{ return m_expirationInDays; }

    /**
     * <p>Token expiration, in days, counted from token creation. The default is 365
     * days.</p>
     */
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }

    /**
     * <p>Token expiration, in days, counted from token creation. The default is 365
     * days.</p>
     */
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }

    /**
     * <p>Token expiration, in days, counted from token creation. The default is 365
     * days.</p>
     */
    inline CreateTokenRequest& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}


    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const{ return m_tokenProperties; }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline void SetTokenProperties(const Aws::Vector<Aws::String>& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = value; }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline void SetTokenProperties(Aws::Vector<Aws::String>&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::move(value); }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline CreateTokenRequest& WithTokenProperties(const Aws::Vector<Aws::String>& value) { SetTokenProperties(value); return *this;}

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline CreateTokenRequest& WithTokenProperties(Aws::Vector<Aws::String>&& value) { SetTokenProperties(std::move(value)); return *this;}

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline CreateTokenRequest& AddTokenProperties(const Aws::String& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline CreateTokenRequest& AddTokenProperties(Aws::String&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline CreateTokenRequest& AddTokenProperties(const char* value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }


    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline CreateTokenRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline CreateTokenRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline CreateTokenRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    int m_expirationInDays;
    bool m_expirationInDaysHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenProperties;
    bool m_tokenPropertiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
