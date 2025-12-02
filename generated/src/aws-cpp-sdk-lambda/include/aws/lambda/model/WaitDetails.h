/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Details about a wait operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/WaitDetails">AWS
 * API Reference</a></p>
 */
class WaitDetails {
 public:
  AWS_LAMBDA_API WaitDetails() = default;
  AWS_LAMBDA_API WaitDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API WaitDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date and time when the wait operation is scheduled to complete, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledEndTimestamp() const { return m_scheduledEndTimestamp; }
  inline bool ScheduledEndTimestampHasBeenSet() const { return m_scheduledEndTimestampHasBeenSet; }
  template <typename ScheduledEndTimestampT = Aws::Utils::DateTime>
  void SetScheduledEndTimestamp(ScheduledEndTimestampT&& value) {
    m_scheduledEndTimestampHasBeenSet = true;
    m_scheduledEndTimestamp = std::forward<ScheduledEndTimestampT>(value);
  }
  template <typename ScheduledEndTimestampT = Aws::Utils::DateTime>
  WaitDetails& WithScheduledEndTimestamp(ScheduledEndTimestampT&& value) {
    SetScheduledEndTimestamp(std::forward<ScheduledEndTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_scheduledEndTimestamp{};
  bool m_scheduledEndTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
