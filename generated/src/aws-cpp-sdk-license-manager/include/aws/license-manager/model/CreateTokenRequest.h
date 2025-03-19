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
    AWS_LICENSEMANAGER_API CreateTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license. The ARN is mapped to the aud claim
     * of the JWT token.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    CreateTokenRequest& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the IAM roles to embed in the token. License
     * Manager does not check whether the roles are in use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const { return m_roleArns; }
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    void SetRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::forward<RoleArnsT>(value); }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    CreateTokenRequest& WithRoleArns(RoleArnsT&& value) { SetRoleArns(std::forward<RoleArnsT>(value)); return *this;}
    template<typename RoleArnsT = Aws::String>
    CreateTokenRequest& AddRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns.emplace_back(std::forward<RoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token expiration, in days, counted from token creation. The default is 365
     * days.</p>
     */
    inline int GetExpirationInDays() const { return m_expirationInDays; }
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }
    inline CreateTokenRequest& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data specified by the caller to be included in the JWT token. The data is
     * mapped to the amr claim of the JWT token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const { return m_tokenProperties; }
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    void SetTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::forward<TokenPropertiesT>(value); }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    CreateTokenRequest& WithTokenProperties(TokenPropertiesT&& value) { SetTokenProperties(std::forward<TokenPropertiesT>(value)); return *this;}
    template<typename TokenPropertiesT = Aws::String>
    CreateTokenRequest& AddTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.emplace_back(std::forward<TokenPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Idempotency token, valid for 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTokenRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    int m_expirationInDays{0};
    bool m_expirationInDaysHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenProperties;
    bool m_tokenPropertiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
