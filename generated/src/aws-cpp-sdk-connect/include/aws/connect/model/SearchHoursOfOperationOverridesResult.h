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
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult() = default;
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchHoursOfOperationOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operations overrides.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverride>& GetHoursOfOperationOverrides() const { return m_hoursOfOperationOverrides; }
    template<typename HoursOfOperationOverridesT = Aws::Vector<HoursOfOperationOverride>>
    void SetHoursOfOperationOverrides(HoursOfOperationOverridesT&& value) { m_hoursOfOperationOverridesHasBeenSet = true; m_hoursOfOperationOverrides = std::forward<HoursOfOperationOverridesT>(value); }
    template<typename HoursOfOperationOverridesT = Aws::Vector<HoursOfOperationOverride>>
    SearchHoursOfOperationOverridesResult& WithHoursOfOperationOverrides(HoursOfOperationOverridesT&& value) { SetHoursOfOperationOverrides(std::forward<HoursOfOperationOverridesT>(value)); return *this;}
    template<typename HoursOfOperationOverridesT = HoursOfOperationOverride>
    SearchHoursOfOperationOverridesResult& AddHoursOfOperationOverrides(HoursOfOperationOverridesT&& value) { m_hoursOfOperationOverridesHasBeenSet = true; m_hoursOfOperationOverrides.emplace_back(std::forward<HoursOfOperationOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchHoursOfOperationOverridesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours of operations which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchHoursOfOperationOverridesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchHoursOfOperationOverridesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HoursOfOperationOverride> m_hoursOfOperationOverrides;
    bool m_hoursOfOperationOverridesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
