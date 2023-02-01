/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/TokenType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{
  class CreateTokenResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateTokenResult();
    AWS_LICENSEMANAGER_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenId = value; }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenId = std::move(value); }

    /**
     * <p>Token ID.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenId.assign(value); }

    /**
     * <p>Token ID.</p>
     */
    inline CreateTokenResult& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline CreateTokenResult& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>Token ID.</p>
     */
    inline CreateTokenResult& WithTokenId(const char* value) { SetTokenId(value); return *this;}


    /**
     * <p>Token type.</p>
     */
    inline const TokenType& GetTokenType() const{ return m_tokenType; }

    /**
     * <p>Token type.</p>
     */
    inline void SetTokenType(const TokenType& value) { m_tokenType = value; }

    /**
     * <p>Token type.</p>
     */
    inline void SetTokenType(TokenType&& value) { m_tokenType = std::move(value); }

    /**
     * <p>Token type.</p>
     */
    inline CreateTokenResult& WithTokenType(const TokenType& value) { SetTokenType(value); return *this;}

    /**
     * <p>Token type.</p>
     */
    inline CreateTokenResult& WithTokenType(TokenType&& value) { SetTokenType(std::move(value)); return *this;}


    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(const Aws::String& value) { m_token = value; }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline void SetToken(const char* value) { m_token.assign(value); }

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline CreateTokenResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline CreateTokenResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline CreateTokenResult& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_tokenId;

    TokenType m_tokenType;

    Aws::String m_token;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
