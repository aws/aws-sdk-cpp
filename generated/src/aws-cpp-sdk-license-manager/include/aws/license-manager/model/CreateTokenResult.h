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
    AWS_LICENSEMANAGER_API CreateTokenResult() = default;
    AWS_LICENSEMANAGER_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token ID.</p>
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    CreateTokenResult& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token type.</p>
     */
    inline TokenType GetTokenType() const { return m_tokenType; }
    inline void SetTokenType(TokenType value) { m_tokenTypeHasBeenSet = true; m_tokenType = value; }
    inline CreateTokenResult& WithTokenType(TokenType value) { SetTokenType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refresh token, encoded as a JWT token.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    CreateTokenResult& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;

    TokenType m_tokenType{TokenType::NOT_SET};
    bool m_tokenTypeHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
