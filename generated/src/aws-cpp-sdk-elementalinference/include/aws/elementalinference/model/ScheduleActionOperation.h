/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/RemoveClippingDataSourceConfiguration.h>
#include <aws/elementalinference/model/UpdateClippingDataSourceConfiguration.h>
#include <aws/elementalinference/model/UpdateOutputStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Holds one typed configuration change that a schedule action makes to a feed.
 * Each operation must contain exactly one property. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ScheduleActionOperation">AWS
 * API Reference</a></p>
 */
class ScheduleActionOperation {
 public:
  AWS_ELEMENTALINFERENCE_API ScheduleActionOperation() = default;
  AWS_ELEMENTALINFERENCE_API ScheduleActionOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ScheduleActionOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operation type that enables or disables an output.</p>
   */
  inline const UpdateOutputStatus& GetUpdateOutputStatus() const { return m_updateOutputStatus; }
  inline bool UpdateOutputStatusHasBeenSet() const { return m_updateOutputStatusHasBeenSet; }
  template <typename UpdateOutputStatusT = UpdateOutputStatus>
  void SetUpdateOutputStatus(UpdateOutputStatusT&& value) {
    m_updateOutputStatusHasBeenSet = true;
    m_updateOutputStatus = std::forward<UpdateOutputStatusT>(value);
  }
  template <typename UpdateOutputStatusT = UpdateOutputStatus>
  ScheduleActionOperation& WithUpdateOutputStatus(UpdateOutputStatusT&& value) {
    SetUpdateOutputStatus(std::forward<UpdateOutputStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation type that attaches a game to an event clipping output.</p>
   */
  inline const UpdateClippingDataSourceConfiguration& GetUpdateClippingDataSourceConfiguration() const {
    return m_updateClippingDataSourceConfiguration;
  }
  inline bool UpdateClippingDataSourceConfigurationHasBeenSet() const { return m_updateClippingDataSourceConfigurationHasBeenSet; }
  template <typename UpdateClippingDataSourceConfigurationT = UpdateClippingDataSourceConfiguration>
  void SetUpdateClippingDataSourceConfiguration(UpdateClippingDataSourceConfigurationT&& value) {
    m_updateClippingDataSourceConfigurationHasBeenSet = true;
    m_updateClippingDataSourceConfiguration = std::forward<UpdateClippingDataSourceConfigurationT>(value);
  }
  template <typename UpdateClippingDataSourceConfigurationT = UpdateClippingDataSourceConfiguration>
  ScheduleActionOperation& WithUpdateClippingDataSourceConfiguration(UpdateClippingDataSourceConfigurationT&& value) {
    SetUpdateClippingDataSourceConfiguration(std::forward<UpdateClippingDataSourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation type that removes the game from an event clipping output.</p>
   */
  inline const RemoveClippingDataSourceConfiguration& GetRemoveClippingDataSourceConfiguration() const {
    return m_removeClippingDataSourceConfiguration;
  }
  inline bool RemoveClippingDataSourceConfigurationHasBeenSet() const { return m_removeClippingDataSourceConfigurationHasBeenSet; }
  template <typename RemoveClippingDataSourceConfigurationT = RemoveClippingDataSourceConfiguration>
  void SetRemoveClippingDataSourceConfiguration(RemoveClippingDataSourceConfigurationT&& value) {
    m_removeClippingDataSourceConfigurationHasBeenSet = true;
    m_removeClippingDataSourceConfiguration = std::forward<RemoveClippingDataSourceConfigurationT>(value);
  }
  template <typename RemoveClippingDataSourceConfigurationT = RemoveClippingDataSourceConfiguration>
  ScheduleActionOperation& WithRemoveClippingDataSourceConfiguration(RemoveClippingDataSourceConfigurationT&& value) {
    SetRemoveClippingDataSourceConfiguration(std::forward<RemoveClippingDataSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateOutputStatus m_updateOutputStatus;

  UpdateClippingDataSourceConfiguration m_updateClippingDataSourceConfiguration;

  RemoveClippingDataSourceConfiguration m_removeClippingDataSourceConfiguration;
  bool m_updateOutputStatusHasBeenSet = false;
  bool m_updateClippingDataSourceConfigurationHasBeenSet = false;
  bool m_removeClippingDataSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
