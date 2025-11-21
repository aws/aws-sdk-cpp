/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/S3Configuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Configuration for destinations where scheduled query results are delivered,
 * such as S3 buckets or EventBridge event buses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DestinationConfiguration">AWS
 * API Reference</a></p>
 */
class DestinationConfiguration {
 public:
  AWS_CLOUDWATCHLOGS_API DestinationConfiguration() = default;
  AWS_CLOUDWATCHLOGS_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for delivering query results to an Amazon S3 bucket.</p>
   */
  inline const S3Configuration& GetS3Configuration() const { return m_s3Configuration; }
  inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
  template <typename S3ConfigurationT = S3Configuration>
  void SetS3Configuration(S3ConfigurationT&& value) {
    m_s3ConfigurationHasBeenSet = true;
    m_s3Configuration = std::forward<S3ConfigurationT>(value);
  }
  template <typename S3ConfigurationT = S3Configuration>
  DestinationConfiguration& WithS3Configuration(S3ConfigurationT&& value) {
    SetS3Configuration(std::forward<S3ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3Configuration m_s3Configuration;
  bool m_s3ConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
