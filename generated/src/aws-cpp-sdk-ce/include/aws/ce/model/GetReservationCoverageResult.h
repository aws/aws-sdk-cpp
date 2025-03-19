/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Coverage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CoverageByTime.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetReservationCoverageResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationCoverageResult() = default;
    AWS_COSTEXPLORER_API GetReservationCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline const Aws::Vector<CoverageByTime>& GetCoveragesByTime() const { return m_coveragesByTime; }
    template<typename CoveragesByTimeT = Aws::Vector<CoverageByTime>>
    void SetCoveragesByTime(CoveragesByTimeT&& value) { m_coveragesByTimeHasBeenSet = true; m_coveragesByTime = std::forward<CoveragesByTimeT>(value); }
    template<typename CoveragesByTimeT = Aws::Vector<CoverageByTime>>
    GetReservationCoverageResult& WithCoveragesByTime(CoveragesByTimeT&& value) { SetCoveragesByTime(std::forward<CoveragesByTimeT>(value)); return *this;}
    template<typename CoveragesByTimeT = CoverageByTime>
    GetReservationCoverageResult& AddCoveragesByTime(CoveragesByTimeT&& value) { m_coveragesByTimeHasBeenSet = true; m_coveragesByTime.emplace_back(std::forward<CoveragesByTimeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline const Coverage& GetTotal() const { return m_total; }
    template<typename TotalT = Coverage>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Coverage>
    GetReservationCoverageResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetReservationCoverageResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReservationCoverageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoverageByTime> m_coveragesByTime;
    bool m_coveragesByTimeHasBeenSet = false;

    Coverage m_total;
    bool m_totalHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
