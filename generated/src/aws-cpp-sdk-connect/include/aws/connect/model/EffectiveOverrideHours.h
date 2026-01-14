/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OverrideHour.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Information about the hours of operation overrides which contribute to
 * effective hours of operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EffectiveOverrideHours">AWS
 * API Reference</a></p>
 */
class EffectiveOverrideHours {
 public:
  AWS_CONNECT_API EffectiveOverrideHours() = default;
  AWS_CONNECT_API EffectiveOverrideHours(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EffectiveOverrideHours& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date that the hours of operation override applies to.</p>
   */
  inline const Aws::String& GetDate() const { return m_date; }
  inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
  template <typename DateT = Aws::String>
  void SetDate(DateT&& value) {
    m_dateHasBeenSet = true;
    m_date = std::forward<DateT>(value);
  }
  template <typename DateT = Aws::String>
  EffectiveOverrideHours& WithDate(DateT&& value) {
    SetDate(std::forward<DateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the hours of operation overrides that apply to a specific
   * date.</p>
   */
  inline const Aws::Vector<OverrideHour>& GetOverrideHours() const { return m_overrideHours; }
  inline bool OverrideHoursHasBeenSet() const { return m_overrideHoursHasBeenSet; }
  template <typename OverrideHoursT = Aws::Vector<OverrideHour>>
  void SetOverrideHours(OverrideHoursT&& value) {
    m_overrideHoursHasBeenSet = true;
    m_overrideHours = std::forward<OverrideHoursT>(value);
  }
  template <typename OverrideHoursT = Aws::Vector<OverrideHour>>
  EffectiveOverrideHours& WithOverrideHours(OverrideHoursT&& value) {
    SetOverrideHours(std::forward<OverrideHoursT>(value));
    return *this;
  }
  template <typename OverrideHoursT = OverrideHour>
  EffectiveOverrideHours& AddOverrideHours(OverrideHoursT&& value) {
    m_overrideHoursHasBeenSet = true;
    m_overrideHours.emplace_back(std::forward<OverrideHoursT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_date;

  Aws::Vector<OverrideHour> m_overrideHours;
  bool m_dateHasBeenSet = false;
  bool m_overrideHoursHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
