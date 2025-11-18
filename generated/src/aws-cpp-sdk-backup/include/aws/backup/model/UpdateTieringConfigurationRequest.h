/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/TieringConfigurationInputForUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Backup {
namespace Model {

/**
 */
class UpdateTieringConfigurationRequest : public BackupRequest {
 public:
  AWS_BACKUP_API UpdateTieringConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTieringConfiguration"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of a tiering configuration to update.</p>
   */
  inline const Aws::String& GetTieringConfigurationName() const { return m_tieringConfigurationName; }
  inline bool TieringConfigurationNameHasBeenSet() const { return m_tieringConfigurationNameHasBeenSet; }
  template <typename TieringConfigurationNameT = Aws::String>
  void SetTieringConfigurationName(TieringConfigurationNameT&& value) {
    m_tieringConfigurationNameHasBeenSet = true;
    m_tieringConfigurationName = std::forward<TieringConfigurationNameT>(value);
  }
  template <typename TieringConfigurationNameT = Aws::String>
  UpdateTieringConfigurationRequest& WithTieringConfigurationName(TieringConfigurationNameT&& value) {
    SetTieringConfigurationName(std::forward<TieringConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the body of a tiering configuration.</p>
   */
  inline const TieringConfigurationInputForUpdate& GetTieringConfiguration() const { return m_tieringConfiguration; }
  inline bool TieringConfigurationHasBeenSet() const { return m_tieringConfigurationHasBeenSet; }
  template <typename TieringConfigurationT = TieringConfigurationInputForUpdate>
  void SetTieringConfiguration(TieringConfigurationT&& value) {
    m_tieringConfigurationHasBeenSet = true;
    m_tieringConfiguration = std::forward<TieringConfigurationT>(value);
  }
  template <typename TieringConfigurationT = TieringConfigurationInputForUpdate>
  UpdateTieringConfigurationRequest& WithTieringConfiguration(TieringConfigurationT&& value) {
    SetTieringConfiguration(std::forward<TieringConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tieringConfigurationName;
  bool m_tieringConfigurationNameHasBeenSet = false;

  TieringConfigurationInputForUpdate m_tieringConfiguration;
  bool m_tieringConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
