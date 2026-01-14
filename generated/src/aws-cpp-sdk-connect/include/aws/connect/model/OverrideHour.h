/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OperationalStatus.h>
#include <aws/connect/model/OverrideTimeSlice.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about hours of operation override</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OverrideHour">AWS
 * API Reference</a></p>
 */
class OverrideHour {
 public:
  AWS_CONNECT_API OverrideHour() = default;
  AWS_CONNECT_API OverrideHour(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API OverrideHour& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const OverrideTimeSlice& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = OverrideTimeSlice>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = OverrideTimeSlice>
  OverrideHour& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OverrideTimeSlice& GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  template <typename EndT = OverrideTimeSlice>
  void SetEnd(EndT&& value) {
    m_endHasBeenSet = true;
    m_end = std::forward<EndT>(value);
  }
  template <typename EndT = OverrideTimeSlice>
  OverrideHour& WithEnd(EndT&& value) {
    SetEnd(std::forward<EndT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier name for the override.</p>
   */
  inline const Aws::String& GetOverrideName() const { return m_overrideName; }
  inline bool OverrideNameHasBeenSet() const { return m_overrideNameHasBeenSet; }
  template <typename OverrideNameT = Aws::String>
  void SetOverrideName(OverrideNameT&& value) {
    m_overrideNameHasBeenSet = true;
    m_overrideName = std::forward<OverrideNameT>(value);
  }
  template <typename OverrideNameT = Aws::String>
  OverrideHour& WithOverrideName(OverrideNameT&& value) {
    SetOverrideName(std::forward<OverrideNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the status is open or closed during the override period.
   * This status determines how the override modifies the base hours of operation
   * schedule.</p>
   */
  inline OperationalStatus GetOperationalStatus() const { return m_operationalStatus; }
  inline bool OperationalStatusHasBeenSet() const { return m_operationalStatusHasBeenSet; }
  inline void SetOperationalStatus(OperationalStatus value) {
    m_operationalStatusHasBeenSet = true;
    m_operationalStatus = value;
  }
  inline OverrideHour& WithOperationalStatus(OperationalStatus value) {
    SetOperationalStatus(value);
    return *this;
  }
  ///@}
 private:
  OverrideTimeSlice m_start;

  OverrideTimeSlice m_end;

  Aws::String m_overrideName;

  OperationalStatus m_operationalStatus{OperationalStatus::NOT_SET};
  bool m_startHasBeenSet = false;
  bool m_endHasBeenSet = false;
  bool m_overrideNameHasBeenSet = false;
  bool m_operationalStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
