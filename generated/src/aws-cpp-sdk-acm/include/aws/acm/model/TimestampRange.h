/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Specifies a time range for filtering certificates.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/TimestampRange">AWS
 * API Reference</a></p>
 */
class TimestampRange {
 public:
  AWS_ACM_API TimestampRange() = default;
  AWS_ACM_API TimestampRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start of the time range. This value is inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = Aws::Utils::DateTime>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = Aws::Utils::DateTime>
  TimestampRange& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range. This value is inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  template <typename EndT = Aws::Utils::DateTime>
  void SetEnd(EndT&& value) {
    m_endHasBeenSet = true;
    m_end = std::forward<EndT>(value);
  }
  template <typename EndT = Aws::Utils::DateTime>
  TimestampRange& WithEnd(EndT&& value) {
    SetEnd(std::forward<EndT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_start{};

  Aws::Utils::DateTime m_end{};
  bool m_startHasBeenSet = false;
  bool m_endHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
