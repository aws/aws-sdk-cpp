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
    AWS_BACKUP_API CreateLegalHoldResult();
    AWS_BACKUP_API CreateLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_title = value; }

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline void SetTitle(const char* value) { m_title.assign(value); }

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline CreateLegalHoldResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline CreateLegalHoldResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>This is the string title of the legal hold returned after creating the legal
     * hold.</p>
     */
    inline CreateLegalHoldResult& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>This displays the status of the legal hold returned after creating the legal
     * hold. Statuses can be <code>ACTIVE</code>, <code>PENDING</code>,
     * <code>CANCELED</code>, <code>CANCELING</code>, or <code>FAILED</code>.</p>
     */
    inline const LegalHoldStatus& GetStatus() const{ return m_status; }

    /**
     * <p>This displays the status of the legal hold returned after creating the legal
     * hold. Statuses can be <code>ACTIVE</code>, <code>PENDING</code>,
     * <code>CANCELED</code>, <code>CANCELING</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(const LegalHoldStatus& value) { m_status = value; }

    /**
     * <p>This displays the status of the legal hold returned after creating the legal
     * hold. Statuses can be <code>ACTIVE</code>, <code>PENDING</code>,
     * <code>CANCELED</code>, <code>CANCELING</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(LegalHoldStatus&& value) { m_status = std::move(value); }

    /**
     * <p>This displays the status of the legal hold returned after creating the legal
     * hold. Statuses can be <code>ACTIVE</code>, <code>PENDING</code>,
     * <code>CANCELED</code>, <code>CANCELING</code>, or <code>FAILED</code>.</p>
     */
    inline CreateLegalHoldResult& WithStatus(const LegalHoldStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>This displays the status of the legal hold returned after creating the legal
     * hold. Statuses can be <code>ACTIVE</code>, <code>PENDING</code>,
     * <code>CANCELED</code>, <code>CANCELING</code>, or <code>FAILED</code>.</p>
     */
    inline CreateLegalHoldResult& WithStatus(LegalHoldStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline CreateLegalHoldResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline CreateLegalHoldResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>This is the returned string description of the legal hold.</p>
     */
    inline CreateLegalHoldResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldId = value; }

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldId = std::move(value); }

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline void SetLegalHoldId(const char* value) { m_legalHoldId.assign(value); }

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}

    /**
     * <p>Legal hold ID returned for the specified legal hold on a recovery point.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}


    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldArn() const{ return m_legalHoldArn; }

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline void SetLegalHoldArn(const Aws::String& value) { m_legalHoldArn = value; }

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline void SetLegalHoldArn(Aws::String&& value) { m_legalHoldArn = std::move(value); }

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline void SetLegalHoldArn(const char* value) { m_legalHoldArn.assign(value); }

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldArn(const Aws::String& value) { SetLegalHoldArn(value); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldArn(Aws::String&& value) { SetLegalHoldArn(std::move(value)); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Number) of the created legal hold.</p>
     */
    inline CreateLegalHoldResult& WithLegalHoldArn(const char* value) { SetLegalHoldArn(value); return *this;}


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
    inline CreateLegalHoldResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Time in number format when legal hold was created.</p>
     */
    inline CreateLegalHoldResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


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
    inline CreateLegalHoldResult& WithRecoveryPointSelection(const RecoveryPointSelection& value) { SetRecoveryPointSelection(value); return *this;}

    /**
     * <p>This specifies criteria to assign a set of resources, such as resource types
     * or backup vaults.</p>
     */
    inline CreateLegalHoldResult& WithRecoveryPointSelection(RecoveryPointSelection&& value) { SetRecoveryPointSelection(std::move(value)); return *this;}

  private:

    Aws::String m_title;

    LegalHoldStatus m_status;

    Aws::String m_description;

    Aws::String m_legalHoldId;

    Aws::String m_legalHoldArn;

    Aws::Utils::DateTime m_creationDate;

    RecoveryPointSelection m_recoveryPointSelection;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
