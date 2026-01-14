/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Contains configuration for the parent hours of operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParentHoursOfOperationConfig">AWS
 * API Reference</a></p>
 */
class ParentHoursOfOperationConfig {
 public:
  AWS_CONNECT_API ParentHoursOfOperationConfig() = default;
  AWS_CONNECT_API ParentHoursOfOperationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ParentHoursOfOperationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier for the hours of operation.</p>
   */
  inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
  inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
  template <typename HoursOfOperationIdT = Aws::String>
  void SetHoursOfOperationId(HoursOfOperationIdT&& value) {
    m_hoursOfOperationIdHasBeenSet = true;
    m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value);
  }
  template <typename HoursOfOperationIdT = Aws::String>
  ParentHoursOfOperationConfig& WithHoursOfOperationId(HoursOfOperationIdT&& value) {
    SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hoursOfOperationId;
  bool m_hoursOfOperationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
