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
    AWS_BACKUP_API LegalHold();
    AWS_BACKUP_API LegalHold(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API LegalHold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of a legal hold.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline LegalHold& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline LegalHold& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline LegalHold& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the legal hold.</p>
     */
    inline const LegalHoldStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LegalHoldStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LegalHoldStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LegalHold& WithStatus(const LegalHoldStatus& value) { SetStatus(value); return *this;}
    inline LegalHold& WithStatus(LegalHoldStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a legal hold.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LegalHold& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LegalHold& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LegalHold& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = value; }
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::move(value); }
    inline void SetLegalHoldId(const char* value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId.assign(value); }
    inline LegalHold& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}
    inline LegalHold& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}
    inline LegalHold& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the legal hold; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const{ return m_legalHoldArn; }
    inline bool LegalHoldArnHasBeenSet() const { return m_legalHoldArnHasBeenSet; }
    inline void SetLegalHoldArn(const Aws::String& value) { m_legalHoldArnHasBeenSet = true; m_legalHoldArn = value; }
    inline void SetLegalHoldArn(Aws::String&& value) { m_legalHoldArnHasBeenSet = true; m_legalHoldArn = std::move(value); }
    inline void SetLegalHoldArn(const char* value) { m_legalHoldArnHasBeenSet = true; m_legalHoldArn.assign(value); }
    inline LegalHold& WithLegalHoldArn(const Aws::String& value) { SetLegalHoldArn(value); return *this;}
    inline LegalHold& WithLegalHoldArn(Aws::String&& value) { SetLegalHoldArn(std::move(value)); return *this;}
    inline LegalHold& WithLegalHoldArn(const char* value) { SetLegalHoldArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline LegalHold& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline LegalHold& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was cancelled.</p>
     */
    inline const Aws::Utils::DateTime& GetCancellationDate() const{ return m_cancellationDate; }
    inline bool CancellationDateHasBeenSet() const { return m_cancellationDateHasBeenSet; }
    inline void SetCancellationDate(const Aws::Utils::DateTime& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = value; }
    inline void SetCancellationDate(Aws::Utils::DateTime&& value) { m_cancellationDateHasBeenSet = true; m_cancellationDate = std::move(value); }
    inline LegalHold& WithCancellationDate(const Aws::Utils::DateTime& value) { SetCancellationDate(value); return *this;}
    inline LegalHold& WithCancellationDate(Aws::Utils::DateTime&& value) { SetCancellationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    LegalHoldStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;

    Aws::String m_legalHoldArn;
    bool m_legalHoldArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_cancellationDate;
    bool m_cancellationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
