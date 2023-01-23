/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/StoredQueryMetadata.h>
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
namespace ConfigService
{
namespace Model
{
  class ListStoredQueriesResult
  {
  public:
    AWS_CONFIGSERVICE_API ListStoredQueriesResult();
    AWS_CONFIGSERVICE_API ListStoredQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListStoredQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline const Aws::Vector<StoredQueryMetadata>& GetStoredQueryMetadata() const{ return m_storedQueryMetadata; }

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline void SetStoredQueryMetadata(const Aws::Vector<StoredQueryMetadata>& value) { m_storedQueryMetadata = value; }

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline void SetStoredQueryMetadata(Aws::Vector<StoredQueryMetadata>&& value) { m_storedQueryMetadata = std::move(value); }

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline ListStoredQueriesResult& WithStoredQueryMetadata(const Aws::Vector<StoredQueryMetadata>& value) { SetStoredQueryMetadata(value); return *this;}

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline ListStoredQueriesResult& WithStoredQueryMetadata(Aws::Vector<StoredQueryMetadata>&& value) { SetStoredQueryMetadata(std::move(value)); return *this;}

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline ListStoredQueriesResult& AddStoredQueryMetadata(const StoredQueryMetadata& value) { m_storedQueryMetadata.push_back(value); return *this; }

    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline ListStoredQueriesResult& AddStoredQueryMetadata(StoredQueryMetadata&& value) { m_storedQueryMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline ListStoredQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline ListStoredQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline ListStoredQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StoredQueryMetadata> m_storedQueryMetadata;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
