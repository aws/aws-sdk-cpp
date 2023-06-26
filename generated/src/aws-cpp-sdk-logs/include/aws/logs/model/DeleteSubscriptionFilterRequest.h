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
  class DeleteSubscriptionFilterRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteSubscriptionFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriptionFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The name of the subscription filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription filter.</p>
     */
    inline DeleteSubscriptionFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
