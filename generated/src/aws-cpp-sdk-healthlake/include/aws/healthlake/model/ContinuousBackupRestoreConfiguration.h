/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Configuration for continuous backup (point-in-time) restore.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ContinuousBackupRestoreConfiguration">AWS
 * API Reference</a></p>
 */
class ContinuousBackupRestoreConfiguration {
 public:
  AWS_HEALTHLAKE_API ContinuousBackupRestoreConfiguration() = default;
  AWS_HEALTHLAKE_API ContinuousBackupRestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API ContinuousBackupRestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The point in time to restore the data store to, specified as a UTC
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetRestorePointTime() const { return m_restorePointTime; }
  inline bool RestorePointTimeHasBeenSet() const { return m_restorePointTimeHasBeenSet; }
  template <typename RestorePointTimeT = Aws::Utils::DateTime>
  void SetRestorePointTime(RestorePointTimeT&& value) {
    m_restorePointTimeHasBeenSet = true;
    m_restorePointTime = std::forward<RestorePointTimeT>(value);
  }
  template <typename RestorePointTimeT = Aws::Utils::DateTime>
  ContinuousBackupRestoreConfiguration& WithRestorePointTime(RestorePointTimeT&& value) {
    SetRestorePointTime(std::forward<RestorePointTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_restorePointTime{};
  bool m_restorePointTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
