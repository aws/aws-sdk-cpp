/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalyMonitor.h>
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
  class GetAnomalyMonitorsResult
  {
  public:
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult() = default;
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost anomaly monitors that includes the detailed metadata for each
     * monitor. </p>
     */
    inline const Aws::Vector<AnomalyMonitor>& GetAnomalyMonitors() const { return m_anomalyMonitors; }
    template<typename AnomalyMonitorsT = Aws::Vector<AnomalyMonitor>>
    void SetAnomalyMonitors(AnomalyMonitorsT&& value) { m_anomalyMonitorsHasBeenSet = true; m_anomalyMonitors = std::forward<AnomalyMonitorsT>(value); }
    template<typename AnomalyMonitorsT = Aws::Vector<AnomalyMonitor>>
    GetAnomalyMonitorsResult& WithAnomalyMonitors(AnomalyMonitorsT&& value) { SetAnomalyMonitors(std::forward<AnomalyMonitorsT>(value)); return *this;}
    template<typename AnomalyMonitorsT = AnomalyMonitor>
    GetAnomalyMonitorsResult& AddAnomalyMonitors(AnomalyMonitorsT&& value) { m_anomalyMonitorsHasBeenSet = true; m_anomalyMonitors.emplace_back(std::forward<AnomalyMonitorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetAnomalyMonitorsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnomalyMonitorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyMonitor> m_anomalyMonitors;
    bool m_anomalyMonitorsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
