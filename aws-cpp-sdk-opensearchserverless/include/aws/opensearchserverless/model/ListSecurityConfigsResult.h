/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/SecurityConfigSummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListSecurityConfigsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult();
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline const Aws::Vector<SecurityConfigSummary>& GetSecurityConfigSummaries() const{ return m_securityConfigSummaries; }

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline void SetSecurityConfigSummaries(const Aws::Vector<SecurityConfigSummary>& value) { m_securityConfigSummaries = value; }

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline void SetSecurityConfigSummaries(Aws::Vector<SecurityConfigSummary>&& value) { m_securityConfigSummaries = std::move(value); }

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline ListSecurityConfigsResult& WithSecurityConfigSummaries(const Aws::Vector<SecurityConfigSummary>& value) { SetSecurityConfigSummaries(value); return *this;}

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline ListSecurityConfigsResult& WithSecurityConfigSummaries(Aws::Vector<SecurityConfigSummary>&& value) { SetSecurityConfigSummaries(std::move(value)); return *this;}

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline ListSecurityConfigsResult& AddSecurityConfigSummaries(const SecurityConfigSummary& value) { m_securityConfigSummaries.push_back(value); return *this; }

    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline ListSecurityConfigsResult& AddSecurityConfigSummaries(SecurityConfigSummary&& value) { m_securityConfigSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SecurityConfigSummary> m_securityConfigSummaries;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
