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
  class GetLegalHoldResult
  {
  public:
    AWS_BACKUP_API GetLegalHoldResult();
    AWS_BACKUP_API GetLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The title of the legal hold.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline GetLegalHoldResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GetLegalHoldResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the legal hold.</p>
     */
    inline const LegalHoldStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LegalHoldStatus& value) { m_status = value; }
    inline void SetStatus(LegalHoldStatus&& value) { m_status = std::move(value); }
    inline GetLegalHoldResult& WithStatus(const LegalHoldStatus& value) { SetStatus(value); return *this;}
    inline GetLegalHoldResult& WithStatus(LegalHoldStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the legal hold.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetLegalHoldResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetLegalHoldResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for removing the legal hold.</p>
     */
    inline const Aws::String& GetCancelDescription() const{ return m_cancelDescription; }
    inline void SetCancelDescription(const Aws::String& value) { m_cancelDescription = value; }
    inline void SetCancelDescription(Aws::String&& value) { m_cancelDescription = std::move(value); }
    inline void SetCancelDescription(const char* value) { m_cancelDescription.assign(value); }
    inline GetLegalHoldResult& WithCancelDescription(const Aws::String& value) { SetCancelDescription(value); return *this;}
    inline GetLegalHoldResult& WithCancelDescription(Aws::String&& value) { SetCancelDescription(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithCancelDescription(const char* value) { SetCancelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldId = value; }
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldId = std::move(value); }
    inline void SetLegalHoldId(const char* value) { m_legalHoldId.assign(value); }
    inline GetLegalHoldResult& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}
    inline GetLegalHoldResult& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework ARN for the specified legal hold. The format of the ARN depends
     * on the resource type.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const{ return m_legalHoldArn; }
    inline void SetLegalHoldArn(const Aws::String& value) { m_legalHoldArn = value; }
    inline void SetLegalHoldArn(Aws::String&& value) { m_legalHoldArn = std::move(value); }
    inline void SetLegalHoldArn(const char* value) { m_legalHoldArn.assign(value); }
    inline GetLegalHoldResult& WithLegalHoldArn(const Aws::String& value) { SetLegalHoldArn(value); return *this;}
    inline GetLegalHoldResult& WithLegalHoldArn(Aws::String&& value) { SetLegalHoldArn(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithLegalHoldArn(const char* value) { SetLegalHoldArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetLegalHoldResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetLegalHoldResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the legal hold was cancelled.</p>
     */
    inline const Aws::Utils::DateTime& GetCancellationDate() const{ return m_cancellationDate; }
    inline void SetCancellationDate(const Aws::Utils::DateTime& value) { m_cancellationDate = value; }
    inline void SetCancellationDate(Aws::Utils::DateTime&& value) { m_cancellationDate = std::move(value); }
    inline GetLegalHoldResult& WithCancellationDate(const Aws::Utils::DateTime& value) { SetCancellationDate(value); return *this;}
    inline GetLegalHoldResult& WithCancellationDate(Aws::Utils::DateTime&& value) { SetCancellationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time until which the legal hold record is retained.</p>
     */
    inline const Aws::Utils::DateTime& GetRetainRecordUntil() const{ return m_retainRecordUntil; }
    inline void SetRetainRecordUntil(const Aws::Utils::DateTime& value) { m_retainRecordUntil = value; }
    inline void SetRetainRecordUntil(Aws::Utils::DateTime&& value) { m_retainRecordUntil = std::move(value); }
    inline GetLegalHoldResult& WithRetainRecordUntil(const Aws::Utils::DateTime& value) { SetRetainRecordUntil(value); return *this;}
    inline GetLegalHoldResult& WithRetainRecordUntil(Aws::Utils::DateTime&& value) { SetRetainRecordUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to assign a set of resources, such as resource types or backup
     * vaults.</p>
     */
    inline const RecoveryPointSelection& GetRecoveryPointSelection() const{ return m_recoveryPointSelection; }
    inline void SetRecoveryPointSelection(const RecoveryPointSelection& value) { m_recoveryPointSelection = value; }
    inline void SetRecoveryPointSelection(RecoveryPointSelection&& value) { m_recoveryPointSelection = std::move(value); }
    inline GetLegalHoldResult& WithRecoveryPointSelection(const RecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}
    inline GetLegalHoldResult& WithRecoveryPointSelection(RecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLegalHoldResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLegalHoldResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLegalHoldResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_title;

    LegalHoldStatus m_status;

    Aws::String m_description;

    Aws::String m_cancelDescription;

    Aws::String m_legalHoldId;

    Aws::String m_legalHoldArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_cancellationDate;

    Aws::Utils::DateTime m_retainRecordUntil;

    RecoveryPointSelection m_recoveryPointSelection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
