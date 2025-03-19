/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalyDateInterval.h>
#include <aws/ce/model/AnomalyFeedbackType.h>
#include <aws/ce/model/TotalImpactFilter.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetAnomaliesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetAnomaliesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnomalies"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    GetAnomaliesRequest& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline const AnomalyDateInterval& GetDateInterval() const { return m_dateInterval; }
    inline bool DateIntervalHasBeenSet() const { return m_dateIntervalHasBeenSet; }
    template<typename DateIntervalT = AnomalyDateInterval>
    void SetDateInterval(DateIntervalT&& value) { m_dateIntervalHasBeenSet = true; m_dateInterval = std::forward<DateIntervalT>(value); }
    template<typename DateIntervalT = AnomalyDateInterval>
    GetAnomaliesRequest& WithDateInterval(DateIntervalT&& value) { SetDateInterval(std::forward<DateIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline AnomalyFeedbackType GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(AnomalyFeedbackType value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline GetAnomaliesRequest& WithFeedback(AnomalyFeedbackType value) { SetFeedback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline const TotalImpactFilter& GetTotalImpact() const { return m_totalImpact; }
    inline bool TotalImpactHasBeenSet() const { return m_totalImpactHasBeenSet; }
    template<typename TotalImpactT = TotalImpactFilter>
    void SetTotalImpact(TotalImpactT&& value) { m_totalImpactHasBeenSet = true; m_totalImpact = std::forward<TotalImpactT>(value); }
    template<typename TotalImpactT = TotalImpactFilter>
    GetAnomaliesRequest& WithTotalImpact(TotalImpactT&& value) { SetTotalImpact(std::forward<TotalImpactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetAnomaliesRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAnomaliesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    AnomalyDateInterval m_dateInterval;
    bool m_dateIntervalHasBeenSet = false;

    AnomalyFeedbackType m_feedback{AnomalyFeedbackType::NOT_SET};
    bool m_feedbackHasBeenSet = false;

    TotalImpactFilter m_totalImpact;
    bool m_totalImpactHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
