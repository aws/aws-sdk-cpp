/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LookupTableConfiguration.h>
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
 * <p>Configuration for where to deliver scheduled query results. Specifies the
 * destination type and associated settings for result delivery.</p><p><h3>See
 * Also:</h3>   <a
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
   * <p>Configuration for delivering query results to Amazon S3.</p>
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

  ///@{
  /**
   * <p>Configuration for delivering query results to a lookup table. The query
   * results automatically populate or refresh the specified lookup table on each
   * scheduled execution.</p>
   */
  inline const LookupTableConfiguration& GetLookupTableConfiguration() const { return m_lookupTableConfiguration; }
  inline bool LookupTableConfigurationHasBeenSet() const { return m_lookupTableConfigurationHasBeenSet; }
  template <typename LookupTableConfigurationT = LookupTableConfiguration>
  void SetLookupTableConfiguration(LookupTableConfigurationT&& value) {
    m_lookupTableConfigurationHasBeenSet = true;
    m_lookupTableConfiguration = std::forward<LookupTableConfigurationT>(value);
  }
  template <typename LookupTableConfigurationT = LookupTableConfiguration>
  DestinationConfiguration& WithLookupTableConfiguration(LookupTableConfigurationT&& value) {
    SetLookupTableConfiguration(std::forward<LookupTableConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3Configuration m_s3Configuration;

  LookupTableConfiguration m_lookupTableConfiguration;
  bool m_s3ConfigurationHasBeenSet = false;
  bool m_lookupTableConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
