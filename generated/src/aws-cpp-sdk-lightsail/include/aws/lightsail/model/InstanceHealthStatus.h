/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceHealthStatusDetail.h>
#include <aws/lightsail/model/InstanceHealthStatusValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the status of an Amazon Lightsail instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceHealthStatus">AWS
 * API Reference</a></p>
 */
class InstanceHealthStatus {
 public:
  AWS_LIGHTSAIL_API InstanceHealthStatus() = default;
  AWS_LIGHTSAIL_API InstanceHealthStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API InstanceHealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status.</p> <p>The following values are possible:</p> <ul> <li> <p>
   * <code>ok</code> - All checks are passing. The instance is reachable.</p> </li>
   * <li> <p> <code>impaired</code> - One or more checks have failed.</p> </li> <li>
   * <p> <code>initializing</code> - The instance was recently started, and the
   * checks are in progress.</p> </li> <li> <p> <code>insufficient-data</code> -
   * There isn't enough data yet to determine the result.</p> </li> <li> <p>
   * <code>not-applicable</code> - The check doesn't apply because the instance isn't
   * running.</p> </li> </ul>
   */
  inline InstanceHealthStatusValue GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InstanceHealthStatusValue value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InstanceHealthStatus& WithStatus(InstanceHealthStatusValue value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system instance health or instance health.</p>
   */
  inline const Aws::Vector<InstanceHealthStatusDetail>& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::Vector<InstanceHealthStatusDetail>>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::Vector<InstanceHealthStatusDetail>>
  InstanceHealthStatus& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  template <typename DetailsT = InstanceHealthStatusDetail>
  InstanceHealthStatus& AddDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details.emplace_back(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  InstanceHealthStatusValue m_status{InstanceHealthStatusValue::NOT_SET};

  Aws::Vector<InstanceHealthStatusDetail> m_details;
  bool m_statusHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
