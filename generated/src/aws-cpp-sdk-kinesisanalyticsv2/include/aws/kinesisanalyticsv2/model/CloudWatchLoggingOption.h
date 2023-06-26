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
   * <p>Provides a description of Amazon CloudWatch logging options, including the
   * log stream Amazon Resource Name (ARN). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CloudWatchLoggingOption">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOption
  {
  public:
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOption();
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline const Aws::String& GetLogStreamARN() const{ return m_logStreamARN; }

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(const Aws::String& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = value; }

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(Aws::String&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(const char* value) { m_logStreamARNHasBeenSet = true; m_logStreamARN.assign(value); }

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOption& WithLogStreamARN(const Aws::String& value) { SetLogStreamARN(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOption& WithLogStreamARN(Aws::String&& value) { SetLogStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOption& WithLogStreamARN(const char* value) { SetLogStreamARN(value); return *this;}

  private:

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
