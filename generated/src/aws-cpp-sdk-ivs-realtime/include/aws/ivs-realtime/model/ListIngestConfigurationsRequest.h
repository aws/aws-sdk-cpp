/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/IngestConfigurationState.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class ListIngestConfigurationsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListIngestConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIngestConfigurations"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Filters the response list to match the specified stage ARN. Only one filter
     * (by stage ARN or by state) can be used at a time.</p>
     */
    inline const Aws::String& GetFilterByStageArn() const { return m_filterByStageArn; }
    inline bool FilterByStageArnHasBeenSet() const { return m_filterByStageArnHasBeenSet; }
    template<typename FilterByStageArnT = Aws::String>
    void SetFilterByStageArn(FilterByStageArnT&& value) { m_filterByStageArnHasBeenSet = true; m_filterByStageArn = std::forward<FilterByStageArnT>(value); }
    template<typename FilterByStageArnT = Aws::String>
    ListIngestConfigurationsRequest& WithFilterByStageArn(FilterByStageArnT&& value) { SetFilterByStageArn(std::forward<FilterByStageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response list to match the specified state. Only one filter (by
     * stage ARN or by state) can be used at a time.</p>
     */
    inline IngestConfigurationState GetFilterByState() const { return m_filterByState; }
    inline bool FilterByStateHasBeenSet() const { return m_filterByStateHasBeenSet; }
    inline void SetFilterByState(IngestConfigurationState value) { m_filterByStateHasBeenSet = true; m_filterByState = value; }
    inline ListIngestConfigurationsRequest& WithFilterByState(IngestConfigurationState value) { SetFilterByState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first IngestConfiguration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIngestConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIngestConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_filterByStageArn;
    bool m_filterByStageArnHasBeenSet = false;

    IngestConfigurationState m_filterByState{IngestConfigurationState::NOT_SET};
    bool m_filterByStateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
