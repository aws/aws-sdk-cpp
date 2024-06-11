﻿/**
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


    ///@{
    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline const Aws::Vector<AffectedEntity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<AffectedEntity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<AffectedEntity>&& value) { m_entities = std::move(value); }
    inline DescribeAffectedEntitiesForOrganizationResult& WithEntities(const Aws::Vector<AffectedEntity>& value) { SetEntities(value); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithEntities(Aws::Vector<AffectedEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& AddEntities(const AffectedEntity& value) { m_entities.push_back(value); return *this; }
    inline DescribeAffectedEntitiesForOrganizationResult& AddEntities(AffectedEntity&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& GetFailedSet() const{ return m_failedSet; }
    inline void SetFailedSet(const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& value) { m_failedSet = value; }
    inline void SetFailedSet(Aws::Vector<OrganizationAffectedEntitiesErrorItem>&& value) { m_failedSet = std::move(value); }
    inline DescribeAffectedEntitiesForOrganizationResult& WithFailedSet(const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& value) { SetFailedSet(value); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithFailedSet(Aws::Vector<OrganizationAffectedEntitiesErrorItem>&& value) { SetFailedSet(std::move(value)); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& AddFailedSet(const OrganizationAffectedEntitiesErrorItem& value) { m_failedSet.push_back(value); return *this; }
    inline DescribeAffectedEntitiesForOrganizationResult& AddFailedSet(OrganizationAffectedEntitiesErrorItem&& value) { m_failedSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAffectedEntitiesForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAffectedEntitiesForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AffectedEntity> m_entities;

    Aws::Vector<OrganizationAffectedEntitiesErrorItem> m_failedSet;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
