/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {

/**
 * <p>Specifies a date range for retrieving efficiency metrics. The start date is
 * inclusive and the end date is exclusive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/TimePeriod">AWS
 * API Reference</a></p>
 */
class TimePeriod {
 public:
  AWS_COSTOPTIMIZATIONHUB_API TimePeriod() = default;
  AWS_COSTOPTIMIZATIONHUB_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The beginning of the time period (inclusive). Specify the date in ISO 8601
   * format, such as 2024-01-01.</p>
   */
  inline const Aws::String& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = Aws::String>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = Aws::String>
  TimePeriod& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time period (exclusive). Specify the date in ISO 8601 format,
   * such as 2024-12-31.</p>
   */
  inline const Aws::String& GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  template <typename EndT = Aws::String>
  void SetEnd(EndT&& value) {
    m_endHasBeenSet = true;
    m_end = std::forward<EndT>(value);
  }
  template <typename EndT = Aws::String>
  TimePeriod& WithEnd(EndT&& value) {
    SetEnd(std::forward<EndT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_start;

  Aws::String m_end;
  bool m_startHasBeenSet = false;
  bool m_endHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
