/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logging option updates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CloudWatchLoggingOptionUpdate">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOptionUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate();
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline const Aws::String& GetLogStreamARNUpdate() const{ return m_logStreamARNUpdate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline bool LogStreamARNUpdateHasBeenSet() const { return m_logStreamARNUpdateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARNUpdate(const Aws::String& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARNUpdate(Aws::String&& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARNUpdate(const char* value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(const Aws::String& value) { SetLogStreamARNUpdate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(Aws::String&& value) { SetLogStreamARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(const char* value) { SetLogStreamARNUpdate(value); return *this;}

  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_logStreamARNUpdate;
    bool m_logStreamARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
