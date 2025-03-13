/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/LegalHoldStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>A legal hold is an administrative tool that helps prevent backups from being
   * deleted while under a hold. While the hold is in place, backups under a hold
   * cannot be deleted and lifecycle policies that would alter the backup status
   * (such as transition to cold storage) are delayed until the legal hold is
   * removed. A backup can have more than one legal hold. Legal holds are applied to
   * one or more backups (also known as recovery points). These backups can be
   * filtered by resource types and by resource IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/LegalHold">AWS
   * API Reference</a></p>
   */
  class LegalHold
  {
  public:
    AWS_BACKUP_API LegalHold() = default;
    AWS_BACKUP_API LegalHold(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API LegalHold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of a legal hold.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    LegalHold& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the legal hold.</p>
     */
    inline LegalHoldStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LegalHoldStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LegalHold& WithStatus(LegalHoldStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a legal hold.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LegalHold& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const { return m_legalHoldId; }
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }
    template<typename LegalHoldIdT = Aws::String>
    void SetLegalHoldId(LegalHoldIdT&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::forward<LegalHoldIdT>(value); }
    template<typename LegalHoldIdT = Aws::String>
    LegalHold& WithLegalHoldId(LegalHoldIdT&& value) { SetLegalHoldId(std::forward<LegalHoldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the legal hold; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const { return m_legalHoldArn; }
    inline bool LegalHoldArnHasBeenSet() const { return m_legalHoldArnHasBeenSet; }
    template<typename LegalHoldArnT = Aws::String>
    void SetLegalHoldArn(LegalHoldArnT&& value) { m_legalHoldArnHasBeenSet = true; m_legalHoldArn = std::forward<LegalHoldArnT>(value); }
    template<typename LegalHoldArnT = Aws::String>
    LegalHold& WithLegalHoldArn(LegalHoldArnT&& value) { SetLegalHoldArn(std::forward<LegalHoldArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    LegalHold& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was cancelled.</p>
     */
    inline const Aws::Utils::DateTime& GetCancellationDate() const { return m_cancellationDate; }
    inline bool CancellationDateHasBeenSet() const { return m_cancellationDateHasBeenSet; }
    template<typename CancellationDateT = Aws::Utils::DateTime>
    void SetCancellationDate(CancellationDateT&& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = std::forward<CancellationDateT>(value); }
    template<typename CancellationDateT = Aws::Utils::DateTime>
    LegalHold& WithCancellationDate(CancellationDateT&& value) { SetCancellationDate(std::forward<CancellationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    LegalHoldStatus m_status{LegalHoldStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;

    Aws::String m_legalHoldArn;
    bool m_legalHoldArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_cancellationDate{};
    bool m_cancellationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
