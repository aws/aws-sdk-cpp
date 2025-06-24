/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointSelection.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateLegalHoldRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateLegalHoldRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The title of the legal hold.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CreateLegalHoldRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the legal hold.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateLegalHoldRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateLegalHoldRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to assign a set of resources, such as resource types or backup
     * vaults.</p>
     */
    inline const RecoveryPointSelection& GetRecoveryPointSelection() const { return m_recoveryPointSelection; }
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }
    template<typename RecoveryPointSelectionT = RecoveryPointSelection>
    void SetRecoveryPointSelection(RecoveryPointSelectionT&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::forward<RecoveryPointSelectionT>(value); }
    template<typename RecoveryPointSelectionT = RecoveryPointSelection>
    CreateLegalHoldRequest& WithRecoveryPointSelection(RecoveryPointSelectionT&& value) { SetRecoveryPointSelection(std::forward<RecoveryPointSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLegalHoldRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLegalHoldRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    RecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
