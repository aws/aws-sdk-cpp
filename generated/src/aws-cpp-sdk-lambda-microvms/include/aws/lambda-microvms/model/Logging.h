/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/CloudWatchLogging.h>
#include <aws/lambda-microvms/model/LoggingDisabled.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Configuration for MicroVM logging output. Specify exactly one: cloudWatch to
 * enable CloudWatch logging, or disabled to turn off logging.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/Logging">AWS
 * API Reference</a></p>
 */
class Logging {
 public:
  AWS_LAMBDAMICROVMS_API Logging() = default;
  AWS_LAMBDAMICROVMS_API Logging(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies that logging is disabled.</p>
   */
  inline const LoggingDisabled& GetDisabled() const { return m_disabled; }
  inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
  template <typename DisabledT = LoggingDisabled>
  void SetDisabled(DisabledT&& value) {
    m_disabledHasBeenSet = true;
    m_disabled = std::forward<DisabledT>(value);
  }
  template <typename DisabledT = LoggingDisabled>
  Logging& WithDisabled(DisabledT&& value) {
    SetDisabled(std::forward<DisabledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for sending logs to Amazon CloudWatch Logs.</p>
   */
  inline const CloudWatchLogging& GetCloudWatch() const { return m_cloudWatch; }
  inline bool CloudWatchHasBeenSet() const { return m_cloudWatchHasBeenSet; }
  template <typename CloudWatchT = CloudWatchLogging>
  void SetCloudWatch(CloudWatchT&& value) {
    m_cloudWatchHasBeenSet = true;
    m_cloudWatch = std::forward<CloudWatchT>(value);
  }
  template <typename CloudWatchT = CloudWatchLogging>
  Logging& WithCloudWatch(CloudWatchT&& value) {
    SetCloudWatch(std::forward<CloudWatchT>(value));
    return *this;
  }
  ///@}
 private:
  LoggingDisabled m_disabled;

  CloudWatchLogging m_cloudWatch;
  bool m_disabledHasBeenSet = false;
  bool m_cloudWatchHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
