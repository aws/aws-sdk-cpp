/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/IdentityProviderConfig.h>
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
namespace EKS
{
namespace Model
{
  class ListIdentityProviderConfigsResult
  {
  public:
    AWS_EKS_API ListIdentityProviderConfigsResult();
    AWS_EKS_API ListIdentityProviderConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListIdentityProviderConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline const Aws::Vector<IdentityProviderConfig>& GetIdentityProviderConfigs() const{ return m_identityProviderConfigs; }

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline void SetIdentityProviderConfigs(const Aws::Vector<IdentityProviderConfig>& value) { m_identityProviderConfigs = value; }

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline void SetIdentityProviderConfigs(Aws::Vector<IdentityProviderConfig>&& value) { m_identityProviderConfigs = std::move(value); }

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline ListIdentityProviderConfigsResult& WithIdentityProviderConfigs(const Aws::Vector<IdentityProviderConfig>& value) { SetIdentityProviderConfigs(value); return *this;}

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline ListIdentityProviderConfigsResult& WithIdentityProviderConfigs(Aws::Vector<IdentityProviderConfig>&& value) { SetIdentityProviderConfigs(std::move(value)); return *this;}

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline ListIdentityProviderConfigsResult& AddIdentityProviderConfigs(const IdentityProviderConfig& value) { m_identityProviderConfigs.push_back(value); return *this; }

    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline ListIdentityProviderConfigsResult& AddIdentityProviderConfigs(IdentityProviderConfig&& value) { m_identityProviderConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListIdentityProviderConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListIdentityProviderConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListIdentityProviderConfigsResponse</code> where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListIdentityProviderConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityProviderConfig> m_identityProviderConfigs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
