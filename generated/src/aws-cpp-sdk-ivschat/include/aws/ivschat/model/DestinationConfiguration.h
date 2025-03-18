/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/model/S3DestinationConfiguration.h>
#include <aws/ivschat/model/CloudWatchLogsDestinationConfiguration.h>
#include <aws/ivschat/model/FirehoseDestinationConfiguration.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>A complex type that describes a location where chat logs will be stored. Each
   * member represents the configuration of one log destination. For logging, you
   * define only one type of destination (for CloudWatch Logs, Kinesis Firehose, or
   * S3).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_IVSCHAT_API DestinationConfiguration() = default;
    AWS_IVSCHAT_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 destination configuration where chat activity will be
     * logged.</p>
     */
    inline const S3DestinationConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3DestinationConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3DestinationConfiguration>
    DestinationConfiguration& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon CloudWatch Logs destination configuration where chat activity will
     * be logged.</p>
     */
    inline const CloudWatchLogsDestinationConfiguration& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
    inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
    template<typename CloudWatchLogsT = CloudWatchLogsDestinationConfiguration>
    void SetCloudWatchLogs(CloudWatchLogsT&& value) { m_cloudWatchLogsHasBeenSet = true; m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value); }
    template<typename CloudWatchLogsT = CloudWatchLogsDestinationConfiguration>
    DestinationConfiguration& WithCloudWatchLogs(CloudWatchLogsT&& value) { SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Kinesis Data Firehose destination configuration where chat activity
     * will be logged.</p>
     */
    inline const FirehoseDestinationConfiguration& GetFirehose() const { return m_firehose; }
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
    template<typename FirehoseT = FirehoseDestinationConfiguration>
    void SetFirehose(FirehoseT&& value) { m_firehoseHasBeenSet = true; m_firehose = std::forward<FirehoseT>(value); }
    template<typename FirehoseT = FirehoseDestinationConfiguration>
    DestinationConfiguration& WithFirehose(FirehoseT&& value) { SetFirehose(std::forward<FirehoseT>(value)); return *this;}
    ///@}
  private:

    S3DestinationConfiguration m_s3;
    bool m_s3HasBeenSet = false;

    CloudWatchLogsDestinationConfiguration m_cloudWatchLogs;
    bool m_cloudWatchLogsHasBeenSet = false;

    FirehoseDestinationConfiguration m_firehose;
    bool m_firehoseHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
