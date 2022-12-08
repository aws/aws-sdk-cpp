/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/TokenData.h>
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
  class ListTokensResult
  {
  public:
    AWS_LICENSEMANAGER_API ListTokensResult();
    AWS_LICENSEMANAGER_API ListTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Received token details.</p>
     */
    inline const Aws::Vector<TokenData>& GetTokens() const{ return m_tokens; }

    /**
     * <p>Received token details.</p>
     */
    inline void SetTokens(const Aws::Vector<TokenData>& value) { m_tokens = value; }

    /**
     * <p>Received token details.</p>
     */
    inline void SetTokens(Aws::Vector<TokenData>&& value) { m_tokens = std::move(value); }

    /**
     * <p>Received token details.</p>
     */
    inline ListTokensResult& WithTokens(const Aws::Vector<TokenData>& value) { SetTokens(value); return *this;}

    /**
     * <p>Received token details.</p>
     */
    inline ListTokensResult& WithTokens(Aws::Vector<TokenData>&& value) { SetTokens(std::move(value)); return *this;}

    /**
     * <p>Received token details.</p>
     */
    inline ListTokensResult& AddTokens(const TokenData& value) { m_tokens.push_back(value); return *this; }

    /**
     * <p>Received token details.</p>
     */
    inline ListTokensResult& AddTokens(TokenData&& value) { m_tokens.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListTokensResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListTokensResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListTokensResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TokenData> m_tokens;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
