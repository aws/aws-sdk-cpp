﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Limitation.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeRecommendationLimitationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRecommendationLimitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRecommendationLimitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRecommendationLimitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of limitations for recommendations of target Amazon Web Services
     * engines.</p>
     */
    inline const Aws::Vector<Limitation>& GetLimitations() const{ return m_limitations; }
    inline void SetLimitations(const Aws::Vector<Limitation>& value) { m_limitations = value; }
    inline void SetLimitations(Aws::Vector<Limitation>&& value) { m_limitations = std::move(value); }
    inline DescribeRecommendationLimitationsResult& WithLimitations(const Aws::Vector<Limitation>& value) { SetLimitations(value); return *this;}
    inline DescribeRecommendationLimitationsResult& WithLimitations(Aws::Vector<Limitation>&& value) { SetLimitations(std::move(value)); return *this;}
    inline DescribeRecommendationLimitationsResult& AddLimitations(const Limitation& value) { m_limitations.push_back(value); return *this; }
    inline DescribeRecommendationLimitationsResult& AddLimitations(Limitation&& value) { m_limitations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRecommendationLimitationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRecommendationLimitationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRecommendationLimitationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Limitation> m_limitations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
