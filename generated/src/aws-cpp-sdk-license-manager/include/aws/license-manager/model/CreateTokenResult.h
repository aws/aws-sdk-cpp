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


    ///@{
    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }
    inline void SetTokenId(const Aws::String& value) { m_tokenId = value; }
    inline void SetTokenId(Aws::String&& value) { m_tokenId = std::move(value); }
    inline void SetTokenId(const char* value) { m_tokenId.assign(value); }
    inline CreateTokenResult& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}
    inline CreateTokenResult& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}
    inline CreateTokenResult& WithTokenId(const char* value) { SetTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token type.</p>
     */
    inline const TokenType& GetTokenType() const{ return m_tokenType; }
    inline void SetTokenType(const TokenType& value) { m_tokenType = value; }
    inline void SetTokenType(TokenType&& value) { m_tokenType = std::move(value); }
    inline CreateTokenResult& WithTokenType(const TokenType& value) { SetTokenType(value); return *this;}
    inline CreateTokenResult& WithTokenType(TokenType&& value) { SetTokenType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline void SetToken(const Aws::String& value) { m_token = value; }
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }
    inline void SetToken(const char* value) { m_token.assign(value); }
    inline CreateTokenResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline CreateTokenResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline CreateTokenResult& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tokenId;

    TokenType m_tokenType;

    Aws::String m_token;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
