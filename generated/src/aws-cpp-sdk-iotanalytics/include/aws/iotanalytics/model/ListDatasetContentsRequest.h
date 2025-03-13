/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class ListDatasetContentsRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API ListDatasetContentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetContents"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

    AWS_IOTANALYTICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the dataset whose contents information you want to list.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    ListDatasetContentsRequest& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetContentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDatasetContentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those dataset contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the <code>CreateDataset</code> request.
     * (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledOnOrAfter() const { return m_scheduledOnOrAfter; }
    inline bool ScheduledOnOrAfterHasBeenSet() const { return m_scheduledOnOrAfterHasBeenSet; }
    template<typename ScheduledOnOrAfterT = Aws::Utils::DateTime>
    void SetScheduledOnOrAfter(ScheduledOnOrAfterT&& value) { m_scheduledOnOrAfterHasBeenSet = true; m_scheduledOnOrAfter = std::forward<ScheduledOnOrAfterT>(value); }
    template<typename ScheduledOnOrAfterT = Aws::Utils::DateTime>
    ListDatasetContentsRequest& WithScheduledOnOrAfter(ScheduledOnOrAfterT&& value) { SetScheduledOnOrAfter(std::forward<ScheduledOnOrAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those dataset contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the <code>CreateDataset</code> request. (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledBefore() const { return m_scheduledBefore; }
    inline bool ScheduledBeforeHasBeenSet() const { return m_scheduledBeforeHasBeenSet; }
    template<typename ScheduledBeforeT = Aws::Utils::DateTime>
    void SetScheduledBefore(ScheduledBeforeT&& value) { m_scheduledBeforeHasBeenSet = true; m_scheduledBefore = std::forward<ScheduledBeforeT>(value); }
    template<typename ScheduledBeforeT = Aws::Utils::DateTime>
    ListDatasetContentsRequest& WithScheduledBefore(ScheduledBeforeT&& value) { SetScheduledBefore(std::forward<ScheduledBeforeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledOnOrAfter{};
    bool m_scheduledOnOrAfterHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledBefore{};
    bool m_scheduledBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
