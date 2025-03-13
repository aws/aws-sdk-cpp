/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/LegalHoldStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RecoveryPointSelection.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class CreateLegalHoldResult
  {
  public:
    AWS_BACKUP_API CreateLegalHoldResult() = default;
    AWS_BACKUP_API CreateLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The title of the legal hold.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CreateLegalHoldResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the legal hold.</p>
     */
    inline LegalHoldStatus GetStatus() const { return m_status; }
    inline void SetStatus(LegalHoldStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateLegalHoldResult& WithStatus(LegalHoldStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the legal hold.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateLegalHoldResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const { return m_legalHoldId; }
    template<typename LegalHoldIdT = Aws::String>
    void SetLegalHoldId(LegalHoldIdT&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::forward<LegalHoldIdT>(value); }
    template<typename LegalHoldIdT = Aws::String>
    CreateLegalHoldResult& WithLegalHoldId(LegalHoldIdT&& value) { SetLegalHoldId(std::forward<LegalHoldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const { return m_legalHoldArn; }
    template<typename LegalHoldArnT = Aws::String>
    void SetLegalHoldArn(LegalHoldArnT&& value) { m_legalHoldArnHasBeenSet = true; m_legalHoldArn = std::forward<LegalHoldArnT>(value); }
    template<typename LegalHoldArnT = Aws::String>
    CreateLegalHoldResult& WithLegalHoldArn(LegalHoldArnT&& value) { SetLegalHoldArn(std::forward<LegalHoldArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    CreateLegalHoldResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to assign to a set of resources, such as resource types or
     * backup vaults.</p>
     */
    inline const RecoveryPointSelection& GetRecoveryPointSelection() const { return m_recoveryPointSelection; }
    template<typename RecoveryPointSelectionT = RecoveryPointSelection>
    void SetRecoveryPointSelection(RecoveryPointSelectionT&& value) { m_recoveryPointSelectionHasBeenSet = true; m_recoveryPointSelection = std::forward<RecoveryPointSelectionT>(value); }
    template<typename RecoveryPointSelectionT = RecoveryPointSelection>
    CreateLegalHoldResult& WithRecoveryPointSelection(RecoveryPointSelectionT&& value) { SetRecoveryPointSelection(std::forward<RecoveryPointSelectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLegalHoldResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    RecoveryPointSelection m_recoveryPointSelection;
    bool m_recoveryPointSelectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
