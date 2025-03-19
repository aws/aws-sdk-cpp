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
  class GetAccessTokenRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API GetAccessTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    GetAccessTokenRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const { return m_tokenProperties; }
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    void SetTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::forward<TokenPropertiesT>(value); }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    GetAccessTokenRequest& WithTokenProperties(TokenPropertiesT&& value) { SetTokenProperties(std::forward<TokenPropertiesT>(value)); return *this;}
    template<typename TokenPropertiesT = Aws::String>
    GetAccessTokenRequest& AddTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.emplace_back(std::forward<TokenPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenProperties;
    bool m_tokenPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
