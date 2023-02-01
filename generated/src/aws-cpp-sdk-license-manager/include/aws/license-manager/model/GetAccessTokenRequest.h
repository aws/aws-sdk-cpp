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
    AWS_LICENSEMANAGER_API GetAccessTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessToken"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline GetAccessTokenRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline GetAccessTokenRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline GetAccessTokenRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const{ return m_tokenProperties; }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline void SetTokenProperties(const Aws::Vector<Aws::String>& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = value; }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline void SetTokenProperties(Aws::Vector<Aws::String>&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::move(value); }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline GetAccessTokenRequest& WithTokenProperties(const Aws::Vector<Aws::String>& value) { SetTokenProperties(value); return *this;}

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline GetAccessTokenRequest& WithTokenProperties(Aws::Vector<Aws::String>&& value) { SetTokenProperties(std::move(value)); return *this;}

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline GetAccessTokenRequest& AddTokenProperties(const Aws::String& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline GetAccessTokenRequest& AddTokenProperties(Aws::String&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>Token properties to validate against those present in the JWT token.</p>
     */
    inline GetAccessTokenRequest& AddTokenProperties(const char* value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenProperties;
    bool m_tokenPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
