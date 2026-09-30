/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotifyOnState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The notification configuration for a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/NotificationConfig">AWS
 * API Reference</a></p>
 */
class NotificationConfig {
 public:
  AWS_DATAZONE_API NotificationConfig() = default;
  AWS_DATAZONE_API NotificationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API NotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Notebook run states that trigger notifications. Ordering is not
   * significant.</p>
   */
  inline const Aws::Vector<NotifyOnState>& GetNotifyOn() const { return m_notifyOn; }
  inline bool NotifyOnHasBeenSet() const { return m_notifyOnHasBeenSet; }
  template <typename NotifyOnT = Aws::Vector<NotifyOnState>>
  void SetNotifyOn(NotifyOnT&& value) {
    m_notifyOnHasBeenSet = true;
    m_notifyOn = std::forward<NotifyOnT>(value);
  }
  template <typename NotifyOnT = Aws::Vector<NotifyOnState>>
  NotificationConfig& WithNotifyOn(NotifyOnT&& value) {
    SetNotifyOn(std::forward<NotifyOnT>(value));
    return *this;
  }
  inline NotificationConfig& AddNotifyOn(NotifyOnState value) {
    m_notifyOnHasBeenSet = true;
    m_notifyOn.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NotifyOnState> m_notifyOn;
  bool m_notifyOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
