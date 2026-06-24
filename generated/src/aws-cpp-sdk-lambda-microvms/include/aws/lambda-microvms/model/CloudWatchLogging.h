/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

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
 * <p>Configuration for Amazon CloudWatch Logs logging.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/CloudWatchLogging">AWS
 * API Reference</a></p>
 */
class CloudWatchLogging {
 public:
  AWS_LAMBDAMICROVMS_API CloudWatchLogging() = default;
  AWS_LAMBDAMICROVMS_API CloudWatchLogging(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API CloudWatchLogging& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch Logs log group to send logs to.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  CloudWatchLogging& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch Logs log stream within the log group.</p>
   */
  inline const Aws::String& GetLogStream() const { return m_logStream; }
  inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
  template <typename LogStreamT = Aws::String>
  void SetLogStream(LogStreamT&& value) {
    m_logStreamHasBeenSet = true;
    m_logStream = std::forward<LogStreamT>(value);
  }
  template <typename LogStreamT = Aws::String>
  CloudWatchLogging& WithLogStream(LogStreamT&& value) {
    SetLogStream(std::forward<LogStreamT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroup;

  Aws::String m_logStream;
  bool m_logGroupHasBeenSet = false;
  bool m_logStreamHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
