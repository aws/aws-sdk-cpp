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
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest() = default;
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentFrameworkShareRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the share request. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssessmentFrameworkShareRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the shared custom framework. </p>
     */
    inline const Aws::String& GetFrameworkId() const { return m_frameworkId; }
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
    template<typename FrameworkIdT = Aws::String>
    void SetFrameworkId(FrameworkIdT&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::forward<FrameworkIdT>(value); }
    template<typename FrameworkIdT = Aws::String>
    AssessmentFrameworkShareRequest& WithFrameworkId(FrameworkIdT&& value) { SetFrameworkId(std::forward<FrameworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the custom framework that the share request is for. </p>
     */
    inline const Aws::String& GetFrameworkName() const { return m_frameworkName; }
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }
    template<typename FrameworkNameT = Aws::String>
    void SetFrameworkName(FrameworkNameT&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::forward<FrameworkNameT>(value); }
    template<typename FrameworkNameT = Aws::String>
    AssessmentFrameworkShareRequest& WithFrameworkName(FrameworkNameT&& value) { SetFrameworkName(std::forward<FrameworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the shared custom framework.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const { return m_frameworkDescription; }
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }
    template<typename FrameworkDescriptionT = Aws::String>
    void SetFrameworkDescription(FrameworkDescriptionT&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::forward<FrameworkDescriptionT>(value); }
    template<typename FrameworkDescriptionT = Aws::String>
    AssessmentFrameworkShareRequest& WithFrameworkDescription(FrameworkDescriptionT&& value) { SetFrameworkDescription(std::forward<FrameworkDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the share request. </p>
     */
    inline ShareRequestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ShareRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssessmentFrameworkShareRequest& WithStatus(ShareRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account of the sender. </p>
     */
    inline const Aws::String& GetSourceAccount() const { return m_sourceAccount; }
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }
    template<typename SourceAccountT = Aws::String>
    void SetSourceAccount(SourceAccountT&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::forward<SourceAccountT>(value); }
    template<typename SourceAccountT = Aws::String>
    AssessmentFrameworkShareRequest& WithSourceAccount(SourceAccountT&& value) { SetSourceAccount(std::forward<SourceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account of the recipient. </p>
     */
    inline const Aws::String& GetDestinationAccount() const { return m_destinationAccount; }
    inline bool DestinationAccountHasBeenSet() const { return m_destinationAccountHasBeenSet; }
    template<typename DestinationAccountT = Aws::String>
    void SetDestinationAccount(DestinationAccountT&& value) { m_destinationAccountHasBeenSet = true; m_destinationAccount = std::forward<DestinationAccountT>(value); }
    template<typename DestinationAccountT = Aws::String>
    AssessmentFrameworkShareRequest& WithDestinationAccount(DestinationAccountT&& value) { SetDestinationAccount(std::forward<DestinationAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region of the recipient. </p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    AssessmentFrameworkShareRequest& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the share request expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    AssessmentFrameworkShareRequest& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the share request was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AssessmentFrameworkShareRequest& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the share request was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    AssessmentFrameworkShareRequest& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional comment from the sender about the share request. </p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    AssessmentFrameworkShareRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of standard controls that are part of the shared custom framework.
     * </p>
     */
    inline int GetStandardControlsCount() const { return m_standardControlsCount; }
    inline bool StandardControlsCountHasBeenSet() const { return m_standardControlsCountHasBeenSet; }
    inline void SetStandardControlsCount(int value) { m_standardControlsCountHasBeenSet = true; m_standardControlsCount = value; }
    inline AssessmentFrameworkShareRequest& WithStandardControlsCount(int value) { SetStandardControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of custom controls that are part of the shared custom
     * framework.</p>
     */
    inline int GetCustomControlsCount() const { return m_customControlsCount; }
    inline bool CustomControlsCountHasBeenSet() const { return m_customControlsCountHasBeenSet; }
    inline void SetCustomControlsCount(int value) { m_customControlsCountHasBeenSet = true; m_customControlsCount = value; }
    inline AssessmentFrameworkShareRequest& WithCustomControlsCount(int value) { SetCustomControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance type that the shared custom framework supports, such as CIS or
     * HIPAA.</p>
     */
    inline const Aws::String& GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    template<typename ComplianceTypeT = Aws::String>
    void SetComplianceType(ComplianceTypeT&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::forward<ComplianceTypeT>(value); }
    template<typename ComplianceTypeT = Aws::String>
    AssessmentFrameworkShareRequest& WithComplianceType(ComplianceTypeT&& value) { SetComplianceType(std::forward<ComplianceTypeT>(value)); return *this;}
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

    ShareRequestStatus m_status{ShareRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet = false;

    Aws::String m_destinationAccount;
    bool m_destinationAccountHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    int m_standardControlsCount{0};
    bool m_standardControlsCountHasBeenSet = false;

    int m_customControlsCount{0};
    bool m_customControlsCountHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
