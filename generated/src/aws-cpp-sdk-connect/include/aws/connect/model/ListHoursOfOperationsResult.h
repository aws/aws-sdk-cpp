/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HoursOfOperationSummary.h>
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
  class ListHoursOfOperationsResult
  {
  public:
    AWS_CONNECT_API ListHoursOfOperationsResult() = default;
    AWS_CONNECT_API ListHoursOfOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListHoursOfOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationSummary>& GetHoursOfOperationSummaryList() const { return m_hoursOfOperationSummaryList; }
    template<typename HoursOfOperationSummaryListT = Aws::Vector<HoursOfOperationSummary>>
    void SetHoursOfOperationSummaryList(HoursOfOperationSummaryListT&& value) { m_hoursOfOperationSummaryListHasBeenSet = true; m_hoursOfOperationSummaryList = std::forward<HoursOfOperationSummaryListT>(value); }
    template<typename HoursOfOperationSummaryListT = Aws::Vector<HoursOfOperationSummary>>
    ListHoursOfOperationsResult& WithHoursOfOperationSummaryList(HoursOfOperationSummaryListT&& value) { SetHoursOfOperationSummaryList(std::forward<HoursOfOperationSummaryListT>(value)); return *this;}
    template<typename HoursOfOperationSummaryListT = HoursOfOperationSummary>
    ListHoursOfOperationsResult& AddHoursOfOperationSummaryList(HoursOfOperationSummaryListT&& value) { m_hoursOfOperationSummaryListHasBeenSet = true; m_hoursOfOperationSummaryList.emplace_back(std::forward<HoursOfOperationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHoursOfOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHoursOfOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HoursOfOperationSummary> m_hoursOfOperationSummaryList;
    bool m_hoursOfOperationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
