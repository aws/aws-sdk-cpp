/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/TieringConfigurationInputForCreate.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Backup {
namespace Model {

/**
 */
class CreateTieringConfigurationRequest : public BackupRequest {
 public:
  AWS_BACKUP_API CreateTieringConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTieringConfiguration"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A tiering configuration must contain a unique
   * <code>TieringConfigurationName</code> string you create and must contain a
   * <code>BackupVaultName</code> and <code>ResourceSelection</code>. You may
   * optionally include a <code>CreatorRequestId</code> string.</p> <p>The
   * <code>TieringConfigurationName</code> is a unique string that is the name of the
   * tiering configuration. This cannot be changed after creation, and it must
   * consist of only alphanumeric characters and underscores.</p>
   */
  inline const TieringConfigurationInputForCreate& GetTieringConfiguration() const { return m_tieringConfiguration; }
  inline bool TieringConfigurationHasBeenSet() const { return m_tieringConfigurationHasBeenSet; }
  template <typename TieringConfigurationT = TieringConfigurationInputForCreate>
  void SetTieringConfiguration(TieringConfigurationT&& value) {
    m_tieringConfigurationHasBeenSet = true;
    m_tieringConfiguration = std::forward<TieringConfigurationT>(value);
  }
  template <typename TieringConfigurationT = TieringConfigurationInputForCreate>
  CreateTieringConfigurationRequest& WithTieringConfiguration(TieringConfigurationT&& value) {
    SetTieringConfiguration(std::forward<TieringConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the tiering configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTieringConfigurationTags() const { return m_tieringConfigurationTags; }
  inline bool TieringConfigurationTagsHasBeenSet() const { return m_tieringConfigurationTagsHasBeenSet; }
  template <typename TieringConfigurationTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTieringConfigurationTags(TieringConfigurationTagsT&& value) {
    m_tieringConfigurationTagsHasBeenSet = true;
    m_tieringConfigurationTags = std::forward<TieringConfigurationTagsT>(value);
  }
  template <typename TieringConfigurationTagsT = Aws::Map<Aws::String, Aws::String>>
  CreateTieringConfigurationRequest& WithTieringConfigurationTags(TieringConfigurationTagsT&& value) {
    SetTieringConfigurationTags(std::forward<TieringConfigurationTagsT>(value));
    return *this;
  }
  template <typename TieringConfigurationTagsKeyT = Aws::String, typename TieringConfigurationTagsValueT = Aws::String>
  CreateTieringConfigurationRequest& AddTieringConfigurationTags(TieringConfigurationTagsKeyT&& key,
                                                                 TieringConfigurationTagsValueT&& value) {
    m_tieringConfigurationTagsHasBeenSet = true;
    m_tieringConfigurationTags.emplace(std::forward<TieringConfigurationTagsKeyT>(key),
                                       std::forward<TieringConfigurationTagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is a unique string that identifies the request and allows failed
   * requests to be retried without the risk of running the operation twice. This
   * parameter is optional. If used, this parameter must contain 1 to 50 alphanumeric
   * or '-_.' characters.</p>
   */
  inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
  inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
  template <typename CreatorRequestIdT = Aws::String>
  void SetCreatorRequestId(CreatorRequestIdT&& value) {
    m_creatorRequestIdHasBeenSet = true;
    m_creatorRequestId = std::forward<CreatorRequestIdT>(value);
  }
  template <typename CreatorRequestIdT = Aws::String>
  CreateTieringConfigurationRequest& WithCreatorRequestId(CreatorRequestIdT&& value) {
    SetCreatorRequestId(std::forward<CreatorRequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TieringConfigurationInputForCreate m_tieringConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tieringConfigurationTags;

  Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_tieringConfigurationHasBeenSet = false;
  bool m_tieringConfigurationTagsHasBeenSet = false;
  bool m_creatorRequestIdHasBeenSet = true;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
