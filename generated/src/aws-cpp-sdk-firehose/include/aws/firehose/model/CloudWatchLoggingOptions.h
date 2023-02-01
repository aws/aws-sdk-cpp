/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logging options for your delivery
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/CloudWatchLoggingOptions">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOptions
  {
  public:
    AWS_FIREHOSE_API CloudWatchLoggingOptions();
    AWS_FIREHOSE_API CloudWatchLoggingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API CloudWatchLoggingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables or disables CloudWatch logging.</p>
     */
    inline CloudWatchLoggingOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch group name for logging. This value is required if CloudWatch
     * logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch log stream name for logging. This value is required if
     * CloudWatch logging is enabled.</p>
     */
    inline CloudWatchLoggingOptions& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
