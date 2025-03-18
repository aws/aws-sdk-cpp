/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class ListLogAnomalyDetectorsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListLogAnomalyDetectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLogAnomalyDetectors"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline const Aws::String& GetFilterLogGroupArn() const { return m_filterLogGroupArn; }
    inline bool FilterLogGroupArnHasBeenSet() const { return m_filterLogGroupArnHasBeenSet; }
    template<typename FilterLogGroupArnT = Aws::String>
    void SetFilterLogGroupArn(FilterLogGroupArnT&& value) { m_filterLogGroupArnHasBeenSet = true; m_filterLogGroupArn = std::forward<FilterLogGroupArnT>(value); }
    template<typename FilterLogGroupArnT = Aws::String>
    ListLogAnomalyDetectorsRequest& WithFilterLogGroupArn(FilterLogGroupArnT&& value) { SetFilterLogGroupArn(std::forward<FilterLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListLogAnomalyDetectorsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLogAnomalyDetectorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterLogGroupArn;
    bool m_filterLogGroupArnHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
