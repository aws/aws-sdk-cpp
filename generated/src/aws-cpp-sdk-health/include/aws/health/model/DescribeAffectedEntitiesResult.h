/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/AffectedEntity.h>
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
namespace Health
{
namespace Model
{
  class DescribeAffectedEntitiesResult
  {
  public:
    AWS_HEALTH_API DescribeAffectedEntitiesResult();
    AWS_HEALTH_API DescribeAffectedEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeAffectedEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline const Aws::Vector<AffectedEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline void SetEntities(const Aws::Vector<AffectedEntity>& value) { m_entities = value; }

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline void SetEntities(Aws::Vector<AffectedEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline DescribeAffectedEntitiesResult& WithEntities(const Aws::Vector<AffectedEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline DescribeAffectedEntitiesResult& WithEntities(Aws::Vector<AffectedEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline DescribeAffectedEntitiesResult& AddEntities(const AffectedEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The entities that match the filter criteria.</p>
     */
    inline DescribeAffectedEntitiesResult& AddEntities(AffectedEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AffectedEntity> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
