/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ServerStepConfiguration.h>
#include <aws/drs/model/WaitStepConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Type-specific configuration for a recovery plan step. Exactly one member must
 * be set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanStepConfiguration">AWS
 * API Reference</a></p>
 */
class RecoveryPlanStepConfiguration {
 public:
  AWS_DRS_API RecoveryPlanStepConfiguration() = default;
  AWS_DRS_API RecoveryPlanStepConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanStepConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a SERVER type step.</p>
   */
  inline const ServerStepConfiguration& GetServerStepConfiguration() const { return m_serverStepConfiguration; }
  inline bool ServerStepConfigurationHasBeenSet() const { return m_serverStepConfigurationHasBeenSet; }
  template <typename ServerStepConfigurationT = ServerStepConfiguration>
  void SetServerStepConfiguration(ServerStepConfigurationT&& value) {
    m_serverStepConfigurationHasBeenSet = true;
    m_serverStepConfiguration = std::forward<ServerStepConfigurationT>(value);
  }
  template <typename ServerStepConfigurationT = ServerStepConfiguration>
  RecoveryPlanStepConfiguration& WithServerStepConfiguration(ServerStepConfigurationT&& value) {
    SetServerStepConfiguration(std::forward<ServerStepConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a WAIT type step.</p>
   */
  inline const WaitStepConfiguration& GetWaitStepConfiguration() const { return m_waitStepConfiguration; }
  inline bool WaitStepConfigurationHasBeenSet() const { return m_waitStepConfigurationHasBeenSet; }
  template <typename WaitStepConfigurationT = WaitStepConfiguration>
  void SetWaitStepConfiguration(WaitStepConfigurationT&& value) {
    m_waitStepConfigurationHasBeenSet = true;
    m_waitStepConfiguration = std::forward<WaitStepConfigurationT>(value);
  }
  template <typename WaitStepConfigurationT = WaitStepConfiguration>
  RecoveryPlanStepConfiguration& WithWaitStepConfiguration(WaitStepConfigurationT&& value) {
    SetWaitStepConfiguration(std::forward<WaitStepConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ServerStepConfiguration m_serverStepConfiguration;

  WaitStepConfiguration m_waitStepConfiguration;
  bool m_serverStepConfigurationHasBeenSet = false;
  bool m_waitStepConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
