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
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate() = default;
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the CloudWatch logging option to update</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const { return m_cloudWatchLoggingOptionId; }
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    void SetCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::forward<CloudWatchLoggingOptionIdT>(value); }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { SetCloudWatchLoggingOptionId(std::forward<CloudWatchLoggingOptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline const Aws::String& GetLogStreamARNUpdate() const { return m_logStreamARNUpdate; }
    inline bool LogStreamARNUpdateHasBeenSet() const { return m_logStreamARNUpdateHasBeenSet; }
    template<typename LogStreamARNUpdateT = Aws::String>
    void SetLogStreamARNUpdate(LogStreamARNUpdateT&& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = std::forward<LogStreamARNUpdateT>(value); }
    template<typename LogStreamARNUpdateT = Aws::String>
    CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(LogStreamARNUpdateT&& value) { SetLogStreamARNUpdate(std::forward<LogStreamARNUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_logStreamARNUpdate;
    bool m_logStreamARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
