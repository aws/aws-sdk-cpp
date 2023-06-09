/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HoursOfOperation.h>
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
namespace Connect
{
namespace Model
{
  class SearchHoursOfOperationsResult
  {
  public:
    AWS_CONNECT_API SearchHoursOfOperationsResult();
    AWS_CONNECT_API SearchHoursOfOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchHoursOfOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the hours of operations.</p>
     */
    inline const Aws::Vector<HoursOfOperation>& GetHoursOfOperations() const{ return m_hoursOfOperations; }

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline void SetHoursOfOperations(const Aws::Vector<HoursOfOperation>& value) { m_hoursOfOperations = value; }

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline void SetHoursOfOperations(Aws::Vector<HoursOfOperation>&& value) { m_hoursOfOperations = std::move(value); }

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline SearchHoursOfOperationsResult& WithHoursOfOperations(const Aws::Vector<HoursOfOperation>& value) { SetHoursOfOperations(value); return *this;}

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline SearchHoursOfOperationsResult& WithHoursOfOperations(Aws::Vector<HoursOfOperation>&& value) { SetHoursOfOperations(std::move(value)); return *this;}

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline SearchHoursOfOperationsResult& AddHoursOfOperations(const HoursOfOperation& value) { m_hoursOfOperations.push_back(value); return *this; }

    /**
     * <p>Information about the hours of operations.</p>
     */
    inline SearchHoursOfOperationsResult& AddHoursOfOperations(HoursOfOperation&& value) { m_hoursOfOperations.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchHoursOfOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchHoursOfOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchHoursOfOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of hours of operations which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total number of hours of operations which matched your search query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total number of hours of operations which matched your search query.</p>
     */
    inline SearchHoursOfOperationsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchHoursOfOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchHoursOfOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchHoursOfOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<HoursOfOperation> m_hoursOfOperations;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
