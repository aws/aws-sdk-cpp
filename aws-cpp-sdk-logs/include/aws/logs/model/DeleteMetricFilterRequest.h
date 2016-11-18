﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DeleteMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    DeleteMetricFilterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteMetricFilterRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteMetricFilterRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DeleteMetricFilterRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the metric filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline DeleteMetricFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the metric filter.</p>
     */
    inline DeleteMetricFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the metric filter.</p>
     */
    inline DeleteMetricFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
