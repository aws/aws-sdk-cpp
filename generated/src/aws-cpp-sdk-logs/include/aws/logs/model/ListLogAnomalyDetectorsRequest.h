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
    AWS_CLOUDWATCHLOGS_API ListLogAnomalyDetectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLogAnomalyDetectors"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline const Aws::String& GetFilterLogGroupArn() const{ return m_filterLogGroupArn; }

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline bool FilterLogGroupArnHasBeenSet() const { return m_filterLogGroupArnHasBeenSet; }

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline void SetFilterLogGroupArn(const Aws::String& value) { m_filterLogGroupArnHasBeenSet = true; m_filterLogGroupArn = value; }

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline void SetFilterLogGroupArn(Aws::String&& value) { m_filterLogGroupArnHasBeenSet = true; m_filterLogGroupArn = std::move(value); }

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline void SetFilterLogGroupArn(const char* value) { m_filterLogGroupArnHasBeenSet = true; m_filterLogGroupArn.assign(value); }

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline ListLogAnomalyDetectorsRequest& WithFilterLogGroupArn(const Aws::String& value) { SetFilterLogGroupArn(value); return *this;}

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline ListLogAnomalyDetectorsRequest& WithFilterLogGroupArn(Aws::String&& value) { SetFilterLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>Use this to optionally filter the results to only include anomaly detectors
     * that are associated with the specified log group.</p>
     */
    inline ListLogAnomalyDetectorsRequest& WithFilterLogGroupArn(const char* value) { SetFilterLogGroupArn(value); return *this;}


    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline ListLogAnomalyDetectorsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListLogAnomalyDetectorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListLogAnomalyDetectorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListLogAnomalyDetectorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_filterLogGroupArn;
    bool m_filterLogGroupArnHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
