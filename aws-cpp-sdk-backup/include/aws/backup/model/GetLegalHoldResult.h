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


    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_title = value; }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline void SetTitle(const char* value) { m_title.assign(value); }

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>This is the string title of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>This is the status of the legal hold. Statuses can be <code>ACTIVE</code>,
     * <code>CREATING</code>, <code>CANCELED</code>, and <code>CANCELING</code>.</p>
     */
    inline const LegalHoldStatus& GetStatus() const{ return m_status; }

    /**
     * <p>This is the status of the legal hold. Statuses can be <code>ACTIVE</code>,
     * <code>CREATING</code>, <code>CANCELED</code>, and <code>CANCELING</code>.</p>
     */
    inline void SetStatus(const LegalHoldStatus& value) { m_status = value; }

    /**
     * <p>This is the status of the legal hold. Statuses can be <code>ACTIVE</code>,
     * <code>CREATING</code>, <code>CANCELED</code>, and <code>CANCELING</code>.</p>
     */
    inline void SetStatus(LegalHoldStatus&& value) { m_status = std::move(value); }

    /**
     * <p>This is the status of the legal hold. Statuses can be <code>ACTIVE</code>,
     * <code>CREATING</code>, <code>CANCELED</code>, and <code>CANCELING</code>.</p>
     */
    inline GetLegalHoldResult& WithStatus(const LegalHoldStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>This is the status of the legal hold. Statuses can be <code>ACTIVE</code>,
     * <code>CREATING</code>, <code>CANCELED</code>, and <code>CANCELING</code>.</p>
     */
    inline GetLegalHoldResult& WithStatus(LegalHoldStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline GetLegalHoldResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline const Aws::String& GetCancelDescription() const{ return m_cancelDescription; }

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline void SetCancelDescription(const Aws::String& value) { m_cancelDescription = value; }

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline void SetCancelDescription(Aws::String&& value) { m_cancelDescription = std::move(value); }

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline void SetCancelDescription(const char* value) { m_cancelDescription.assign(value); }

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline GetLegalHoldResult& WithCancelDescription(const Aws::String& value) { SetCancelDescription(value); return *this;}

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline GetLegalHoldResult& WithCancelDescription(Aws::String&& value) { SetCancelDescription(std::move(value)); return *this;}

    /**
     * <p>String describing the reason for removing the legal hold.</p>
     */
    inline GetLegalHoldResult& WithCancelDescription(const char* value) { SetCancelDescription(value); return *this;}


    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldId = value; }

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldId = std::move(value); }

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline void SetLegalHoldId(const char* value) { m_legalHoldId.assign(value); }

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}

    /**
     * <p>This is the returned ID associated with a specified legal hold.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}


    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const{ return m_legalHoldArn; }

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetLegalHoldArn(const Aws::String& value) { m_legalHoldArn = value; }

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetLegalHoldArn(Aws::String&& value) { m_legalHoldArn = std::move(value); }

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetLegalHoldArn(const char* value) { m_legalHoldArn.assign(value); }

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldArn(const Aws::String& value) { SetLegalHoldArn(value); return *this;}

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldArn(Aws::String&& value) { SetLegalHoldArn(std::move(value)); return *this;}

    /**
     * <p>This is the returned framework ARN for the specified legal hold. An Amazon
     * Resource Name (ARN) uniquely identifies a resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline GetLegalHoldResult& WithLegalHoldArn(const char* value) { SetLegalHoldArn(value); return *this;}


    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline GetLegalHoldResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline GetLegalHoldResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Time in number when legal hold was cancelled.</p>
     */
    inline const Aws::Utils::DateTime& GetCancellationDate() const{ return m_cancellationDate; }

    /**
     * <p>Time in number when legal hold was cancelled.</p>
     */
    inline void SetCancellationDate(const Aws::Utils::DateTime& value) { m_cancellationDate = value; }

    /**
     * <p>Time in number when legal hold was cancelled.</p>
     */
    inline void SetCancellationDate(Aws::Utils::DateTime&& value) { m_cancellationDate = std::move(value); }

    /**
     * <p>Time in number when legal hold was cancelled.</p>
     */
    inline GetLegalHoldResult& WithCancellationDate(const Aws::Utils::DateTime& value) { SetCancellationDate(value); return *this;}

    /**
     * <p>Time in number when legal hold was cancelled.</p>
     */
    inline GetLegalHoldResult& WithCancellationDate(Aws::Utils::DateTime&& value) { SetCancellationDate(std::move(value)); return *this;}


    /**
     * <p>This is the date and time until which the legal hold record will be
     * retained.</p>
     */
    inline const Aws::Utils::DateTime& GetRetainRecordUntil() const{ return m_retainRecordUntil; }

    /**
     * <p>This is the date and time until which the legal hold record will be
     * retained.</p>
     */
    inline void SetRetainRecordUntil(const Aws::Utils::DateTime& value) { m_retainRecordUntil = value; }

    /**
     * <p>This is the date and time until which the legal hold record will be
     * retained.</p>
     */
    inline void SetRetainRecordUntil(Aws::Utils::DateTime&& value) { m_retainRecordUntil = std::move(value); }

    /**
     * <p>This is the date and time until which the legal hold record will be
     * retained.</p>
     */
    inline GetLegalHoldResult& WithRetainRecordUntil(const Aws::Utils::DateTime& value) { SetRetainRecordUntil(value); return *this;}

    /**
     * <p>This is the date and time until which the legal hold record will be
     * retained.</p>
     */
    inline GetLegalHoldResult& WithRetainRecordUntil(Aws::Utils::DateTime&& value) { SetRetainRecordUntil(std::move(value)); return *this;}


    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline const RecoveryPointSelection& GetRecoveryPointSelection() const{ return m_recoveryPointSelection; }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(const RecoveryPointSelection& value) { m_recoveryPointSelection = value; }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline void SetRecoveryPointSelection(RecoveryPointSelection&& value) { m_recoveryPointSelection = std::move(value); }

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline GetLegalHoldResult& WithRecoveryPointSelection(const RecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline GetLegalHoldResult& WithRecoveryPointSelection(RecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
