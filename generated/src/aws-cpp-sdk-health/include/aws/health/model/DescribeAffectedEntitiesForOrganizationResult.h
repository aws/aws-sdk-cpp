/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/AffectedEntity.h>
#include <aws/health/model/OrganizationAffectedEntitiesErrorItem.h>
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
  class DescribeAffectedEntitiesForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult();
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline const Aws::Vector<AffectedEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline void SetEntities(const Aws::Vector<AffectedEntity>& value) { m_entities = value; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline void SetEntities(Aws::Vector<AffectedEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithEntities(const Aws::Vector<AffectedEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithEntities(Aws::Vector<AffectedEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& AddEntities(const AffectedEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& AddEntities(AffectedEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& GetFailedSet() const{ return m_failedSet; }

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline void SetFailedSet(const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& value) { m_failedSet = value; }

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline void SetFailedSet(Aws::Vector<OrganizationAffectedEntitiesErrorItem>&& value) { m_failedSet = std::move(value); }

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithFailedSet(const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& value) { SetFailedSet(value); return *this;}

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithFailedSet(Aws::Vector<OrganizationAffectedEntitiesErrorItem>&& value) { SetFailedSet(std::move(value)); return *this;}

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& AddFailedSet(const OrganizationAffectedEntitiesErrorItem& value) { m_failedSet.push_back(value); return *this; }

    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& AddFailedSet(OrganizationAffectedEntitiesErrorItem&& value) { m_failedSet.push_back(std::move(value)); return *this; }


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
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AffectedEntity> m_entities;

    Aws::Vector<OrganizationAffectedEntitiesErrorItem> m_failedSet;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
