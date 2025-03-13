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
    AWS_LICENSEMANAGER_API TokenData() = default;
    AWS_LICENSEMANAGER_API TokenData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API TokenData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    TokenData& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of token generated. The supported value is
     * <code>REFRESH_TOKEN</code>.</p>
     */
    inline const Aws::String& GetTokenType() const { return m_tokenType; }
    inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
    template<typename TokenTypeT = Aws::String>
    void SetTokenType(TokenTypeT&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::forward<TokenTypeT>(value); }
    template<typename TokenTypeT = Aws::String>
    TokenData& WithTokenType(TokenTypeT&& value) { SetTokenType(std::forward<TokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    TokenData& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token expiration time, in ISO8601-UTC format.</p>
     */
    inline const Aws::String& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::String>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::String>
    TokenData& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data specified by the caller.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenProperties() const { return m_tokenProperties; }
    inline bool TokenPropertiesHasBeenSet() const { return m_tokenPropertiesHasBeenSet; }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    void SetTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties = std::forward<TokenPropertiesT>(value); }
    template<typename TokenPropertiesT = Aws::Vector<Aws::String>>
    TokenData& WithTokenProperties(TokenPropertiesT&& value) { SetTokenProperties(std::forward<TokenPropertiesT>(value)); return *this;}
    template<typename TokenPropertiesT = Aws::String>
    TokenData& AddTokenProperties(TokenPropertiesT&& value) { m_tokenPropertiesHasBeenSet = true; m_tokenProperties.emplace_back(std::forward<TokenPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Names (ARN) of the roles included in the token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const { return m_roleArns; }
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    void SetRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::forward<RoleArnsT>(value); }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    TokenData& WithRoleArns(RoleArnsT&& value) { SetRoleArns(std::forward<RoleArnsT>(value)); return *this;}
    template<typename RoleArnsT = Aws::String>
    TokenData& AddRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns.emplace_back(std::forward<RoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token status. The possible values are <code>AVAILABLE</code> and
     * <code>DELETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TokenData& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
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
