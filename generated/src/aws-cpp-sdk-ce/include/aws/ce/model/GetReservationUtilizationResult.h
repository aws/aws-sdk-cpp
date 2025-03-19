/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ReservationAggregates.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/UtilizationByTime.h>
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
  class GetReservationUtilizationResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationUtilizationResult() = default;
    AWS_COSTEXPLORER_API GetReservationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of time that you used your Reserved Instances (RIs).</p>
     */
    inline const Aws::Vector<UtilizationByTime>& GetUtilizationsByTime() const { return m_utilizationsByTime; }
    template<typename UtilizationsByTimeT = Aws::Vector<UtilizationByTime>>
    void SetUtilizationsByTime(UtilizationsByTimeT&& value) { m_utilizationsByTimeHasBeenSet = true; m_utilizationsByTime = std::forward<UtilizationsByTimeT>(value); }
    template<typename UtilizationsByTimeT = Aws::Vector<UtilizationByTime>>
    GetReservationUtilizationResult& WithUtilizationsByTime(UtilizationsByTimeT&& value) { SetUtilizationsByTime(std::forward<UtilizationsByTimeT>(value)); return *this;}
    template<typename UtilizationsByTimeT = UtilizationByTime>
    GetReservationUtilizationResult& AddUtilizationsByTime(UtilizationsByTimeT&& value) { m_utilizationsByTimeHasBeenSet = true; m_utilizationsByTime.emplace_back(std::forward<UtilizationsByTimeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total amount of time that you used your Reserved Instances (RIs).</p>
     */
    inline const ReservationAggregates& GetTotal() const { return m_total; }
    template<typename TotalT = ReservationAggregates>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = ReservationAggregates>
    GetReservationUtilizationResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
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
    GetReservationUtilizationResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReservationUtilizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UtilizationByTime> m_utilizationsByTime;
    bool m_utilizationsByTimeHasBeenSet = false;

    ReservationAggregates m_total;
    bool m_totalHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
