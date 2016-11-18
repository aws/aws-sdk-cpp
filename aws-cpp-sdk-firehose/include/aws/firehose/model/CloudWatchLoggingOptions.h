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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes CloudWatch logging options for your delivery stream.</p>
   */
  class AWS_FIREHOSE_API CloudWatchLoggingOptions
  {
  public:
    CloudWatchLoggingOptions();
    CloudWatchLoggingOptions(const Aws::Utils::Json::JsonValue& jsonValue);
    CloudWatchLoggingOptions& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline CloudWatchLoggingOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The CloudWatch group name for logging. This value is required if Enabled is
     * true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(Aws::String&& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if Enabled
     * is true.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
