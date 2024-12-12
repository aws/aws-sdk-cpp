/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HoursOfOperationOverride.h>
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
  class SearchHoursOfOperationOverridesResult
  {
  public:
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult();
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operations overrides.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverride>& GetHoursOfOperationOverrides() const{ return m_hoursOfOperationOverrides; }
    inline void SetHoursOfOperationOverrides(const Aws::Vector<HoursOfOperationOverride>& value) { m_hoursOfOperationOverrides = value; }
    inline void SetHoursOfOperationOverrides(Aws::Vector<HoursOfOperationOverride>&& value) { m_hoursOfOperationOverrides = std::move(value); }
    inline SearchHoursOfOperationOverridesResult& WithHoursOfOperationOverrides(const Aws::Vector<HoursOfOperationOverride>& value) { SetHoursOfOperationOverrides(value); return *this;}
    inline SearchHoursOfOperationOverridesResult& WithHoursOfOperationOverrides(Aws::Vector<HoursOfOperationOverride>&& value) { SetHoursOfOperationOverrides(std::move(value)); return *this;}
    inline SearchHoursOfOperationOverridesResult& AddHoursOfOperationOverrides(const HoursOfOperationOverride& value) { m_hoursOfOperationOverrides.push_back(value); return *this; }
    inline SearchHoursOfOperationOverridesResult& AddHoursOfOperationOverrides(HoursOfOperationOverride&& value) { m_hoursOfOperationOverrides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. Length
     * Constraints: Minimum length of 1. Maximum length of 2500.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchHoursOfOperationOverridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchHoursOfOperationOverridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchHoursOfOperationOverridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours of operations which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchHoursOfOperationOverridesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchHoursOfOperationOverridesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchHoursOfOperationOverridesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchHoursOfOperationOverridesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HoursOfOperationOverride> m_hoursOfOperationOverrides;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
