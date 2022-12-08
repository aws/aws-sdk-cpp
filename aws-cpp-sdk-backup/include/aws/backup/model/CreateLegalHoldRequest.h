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
    AWS_BACKUP_API CreateLegalHoldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>This is the string description of the legal hold.</p>
     */
    inline CreateLegalHoldRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline CreateLegalHoldRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline CreateLegalHoldRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>This is a user-chosen string used to distinguish between otherwise identical
     * calls. Retrying a successful request with the same idempotency token results in
     * a success message with no action taken.</p>
     */
    inline CreateLegalHoldRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline const RecoveryPointSelection& GetRecoveryPointSelection() const{ return m_recoveryPointSelection; }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline bool RecoveryPointSelectionHasBeenSet() const { return m_recoveryPointSelectionHasBeenSet; }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(const RecoveryPointSelection& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = value; }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(RecoveryPointSelection&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::move(value); }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline CreateLegalHoldRequest& WithRecoveryPointSelection(const RecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline CreateLegalHoldRequest& WithRecoveryPointSelection(RecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}


    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline CreateLegalHoldRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    RecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
