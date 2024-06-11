/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ShareRequestStatus.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> Represents a share request for a custom framework in Audit Manager.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentFrameworkShareRequest">AWS
   * API Reference</a></p>
   */
  class AssessmentFrameworkShareRequest
  {
  public:
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest();
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the share request. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssessmentFrameworkShareRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the shared custom framework. </p>
     */
    inline const Aws::String& GetFrameworkId() const{ return m_frameworkId; }
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
    inline void SetFrameworkId(const Aws::String& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = value; }
    inline void SetFrameworkId(Aws::String&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::move(value); }
    inline void SetFrameworkId(const char* value) { m_frameworkIdHasBeenSet = true; m_frameworkId.assign(value); }
    inline AssessmentFrameworkShareRequest& WithFrameworkId(const Aws::String& value) { SetFrameworkId(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkId(Aws::String&& value) { SetFrameworkId(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkId(const char* value) { SetFrameworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the custom framework that the share request is for. </p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = value; }
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::move(value); }
    inline void SetFrameworkName(const char* value) { m_frameworkNameHasBeenSet = true; m_frameworkName.assign(value); }
    inline AssessmentFrameworkShareRequest& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the shared custom framework.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const{ return m_frameworkDescription; }
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }
    inline void SetFrameworkDescription(const Aws::String& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = value; }
    inline void SetFrameworkDescription(Aws::String&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::move(value); }
    inline void SetFrameworkDescription(const char* value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription.assign(value); }
    inline AssessmentFrameworkShareRequest& WithFrameworkDescription(const Aws::String& value) { SetFrameworkDescription(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkDescription(Aws::String&& value) { SetFrameworkDescription(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithFrameworkDescription(const char* value) { SetFrameworkDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the share request. </p>
     */
    inline const ShareRequestStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ShareRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ShareRequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssessmentFrameworkShareRequest& WithStatus(const ShareRequestStatus& value) { SetStatus(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithStatus(ShareRequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account of the sender. </p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }
    inline AssessmentFrameworkShareRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline const Aws::String& GetDestinationAccount() const{ return m_destinationAccount; }
    inline bool DestinationAccountHasBeenSet() const { return m_destinationAccountHasBeenSet; }
    inline void SetDestinationAccount(const Aws::String& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = value; }
    inline void SetDestinationAccount(Aws::String&& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = std::move(value); }
    inline void SetDestinationAccount(const char* value) { m_destinationAccountHasBeenSet = true; m_destinationAccount.assign(value); }
    inline AssessmentFrameworkShareRequest& WithDestinationAccount(const Aws::String& value) { SetDestinationAccount(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithDestinationAccount(Aws::String&& value) { SetDestinationAccount(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithDestinationAccount(const char* value) { SetDestinationAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }
    inline AssessmentFrameworkShareRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the share request expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline AssessmentFrameworkShareRequest& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the share request was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AssessmentFrameworkShareRequest& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the share request was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline AssessmentFrameworkShareRequest& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline AssessmentFrameworkShareRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of standard controls that are part of the shared custom framework.
     * </p>
     */
    inline int GetStandardControlsCount() const{ return m_standardControlsCount; }
    inline bool StandardControlsCountHasBeenSet() const { return m_standardControlsCountHasBeenSet; }
    inline void SetStandardControlsCount(int value) { m_standardControlsCountHasBeenSet = true; m_standardControlsCount = value; }
    inline AssessmentFrameworkShareRequest& WithStandardControlsCount(int value) { SetStandardControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of custom controls that are part of the shared custom
     * framework.</p>
     */
    inline int GetCustomControlsCount() const{ return m_customControlsCount; }
    inline bool CustomControlsCountHasBeenSet() const { return m_customControlsCountHasBeenSet; }
    inline void SetCustomControlsCount(int value) { m_customControlsCountHasBeenSet = true; m_customControlsCount = value; }
    inline AssessmentFrameworkShareRequest& WithCustomControlsCount(int value) { SetCustomControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance type that the shared custom framework supports, such as CIS or
     * HIPAA.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline AssessmentFrameworkShareRequest& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline AssessmentFrameworkShareRequest& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline AssessmentFrameworkShareRequest& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet = false;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet = false;

    ShareRequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet = false;

    Aws::String m_destinationAccount;
    bool m_destinationAccountHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    int m_standardControlsCount;
    bool m_standardControlsCountHasBeenSet = false;

    int m_customControlsCount;
    bool m_customControlsCountHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
