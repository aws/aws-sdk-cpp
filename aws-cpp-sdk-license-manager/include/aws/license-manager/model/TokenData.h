/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes a token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/TokenData">AWS
   * API Reference</a></p>
   */
  class TokenData
  {
  public:
    AWS_LICENSEMANAGER_API TokenData();
    AWS_LICENSEMANAGER_API TokenData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API TokenData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>Token ID.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>Token ID.</p>
     */
    inline TokenData& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline TokenData& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline TokenData& WithTokenId(const char* value) { SetTokenId(value); return *this;}


    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline const Aws::String& GetTokenType() const{ return m_tokenType; }

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline void SetTokenType(const Aws::String& value) { m_tokenTypeHasBeenSet = true; m_tokenType = value; }

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline void SetTokenType(Aws::String&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::move(value); }

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline void SetTokenType(const char* value) { m_tokenTypeHasBeenSet = true; m_tokenType.assign(value); }

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline TokenData& WithTokenType(const Aws::String& value) { SetTokenType(value); return *this;}

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline TokenData& WithTokenType(Aws::String&& value) { SetTokenType(std::move(value)); return *this;}

    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline TokenData& WithTokenType(const char* value) { SetTokenType(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline TokenData& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline TokenData& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline TokenData& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline const Aws::String& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline void SetExpirationTime(const Aws::String& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline void SetExpirationTime(Aws::String&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline void SetExpirationTime(const char* value) { m_expirationTimeHasBeenSet = true; m_expirationTime.assign(value); }

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline TokenData& WithExpirationTime(const Aws::String& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline TokenData& WithExpirationTime(Aws::String&& value) { SetExpirationTime(std::move(value)); return *this;}

    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline TokenData& WithExpirationTime(const char* value) { SetExpirationTime(value); return *this;}


    /**
     * <p>Data specified by the caller.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const{ return m_tokenProperties; }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline void SetTokenProperties(const Aws::Vector<Aws::String>& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = value; }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline void SetTokenProperties(Aws::Vector<Aws::String>&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::move(value); }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline TokenData& WithTokenProperties(const Aws::Vector<Aws::String>& value) { SetTokenProperties(value); return *this;}

    /**
     * <p>Data specified by the caller.</p>
     */
    inline TokenData& WithTokenProperties(Aws::Vector<Aws::String>&& value) { SetTokenProperties(std::move(value)); return *this;}

    /**
     * <p>Data specified by the caller.</p>
     */
    inline TokenData& AddTokenProperties(const Aws::String& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline TokenData& AddTokenProperties(Aws::String&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>Data specified by the caller.</p>
     */
    inline TokenData& AddTokenProperties(const char* value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.push_back(value); return *this; }


    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const{ return m_roleArns; }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline void SetRoleArns(const Aws::Vector<Aws::String>& value) { m_roleArnsHasBeenSet = true; m_roleArns = value; }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline void SetRoleArns(Aws::Vector<Aws::String>&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::move(value); }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline TokenData& WithRoleArns(const Aws::Vector<Aws::String>& value) { SetRoleArns(value); return *this;}

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline TokenData& WithRoleArns(Aws::Vector<Aws::String>&& value) { SetRoleArns(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline TokenData& AddRoleArns(const Aws::String& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline TokenData& AddRoleArns(Aws::String&& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline TokenData& AddRoleArns(const char* value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }


    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline TokenData& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline TokenData& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline TokenData& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;

    Aws::String m_tokenType;
    bool m_tokenTypeHasBeenSet = false;

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenProperties;
    bool m_tokenPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
