/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/ReplicationTaskAssessmentRunProgress.h>
#include <aws/dms/model/ReplicationTaskAssessmentRunResultStatistic.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes a premigration assessment run that you
   * have started using the <code>StartReplicationTaskAssessmentRun</code>
   * operation.</p> <p>Some of the information appears based on other operations that
   * can return the <code>ReplicationTaskAssessmentRun</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskAssessmentRun">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskAssessmentRun
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline const Aws::String& GetReplicationTaskAssessmentRunArn() const { return m_replicationTaskAssessmentRunArn; }
    inline bool ReplicationTaskAssessmentRunArnHasBeenSet() const { return m_replicationTaskAssessmentRunArnHasBeenSet; }
    template<typename ReplicationTaskAssessmentRunArnT = Aws::String>
    void SetReplicationTaskAssessmentRunArn(ReplicationTaskAssessmentRunArnT&& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = std::forward<ReplicationTaskAssessmentRunArnT>(value); }
    template<typename ReplicationTaskAssessmentRunArnT = Aws::String>
    ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunArn(ReplicationTaskAssessmentRunArnT&& value) { SetReplicationTaskAssessmentRunArn(std::forward<ReplicationTaskAssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the migration task associated with this premigration assessment
     * run.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    ReplicationTaskAssessmentRun& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assessment run status. </p> <p>This status can have one of the following
     * values:</p> <ul> <li> <p> <code>"cancelling"</code> – The assessment run was
     * canceled by the <code>CancelReplicationTaskAssessmentRun</code> operation.</p>
     * </li> <li> <p> <code>"deleting"</code> – The assessment run was deleted by the
     * <code>DeleteReplicationTaskAssessmentRun</code> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – At least one individual assessment completed with a
     * <code>failed</code> status.</p> </li> <li> <p> <code>"error-provisioning"</code>
     * – An internal error occurred while resources were provisioned (during
     * <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>"error-executing"</code> – An internal error occurred while individual
     * assessments ran (during <code>running</code> status).</p> </li> <li> <p>
     * <code>"invalid state"</code> – The assessment run is in an unknown state.</p>
     * </li> <li> <p> <code>"passed"</code> – All individual assessments have
     * completed, and none has a <code>failed</code> status.</p> </li> <li> <p>
     * <code>"provisioning"</code> – Resources required to run individual assessments
     * are being provisioned.</p> </li> <li> <p> <code>"running"</code> – Individual
     * assessments are being run.</p> </li> <li> <p> <code>"starting"</code> – The
     * assessment run is starting, but resources are not yet being provisioned for
     * individual assessments.</p> </li> <li> <p> <code>"warning"</code> – At least one
     * individual assessment completed with a <code>warning</code> status or all
     * individual assessments were skipped (completed with a <code>skipped</code>
     * status).</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReplicationTaskAssessmentRun& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date on which the assessment run was created using the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskAssessmentRunCreationDate() const { return m_replicationTaskAssessmentRunCreationDate; }
    inline bool ReplicationTaskAssessmentRunCreationDateHasBeenSet() const { return m_replicationTaskAssessmentRunCreationDateHasBeenSet; }
    template<typename ReplicationTaskAssessmentRunCreationDateT = Aws::Utils::DateTime>
    void SetReplicationTaskAssessmentRunCreationDate(ReplicationTaskAssessmentRunCreationDateT&& value) { m_replicationTaskAssessmentRunCreationDateHasBeenSet = true; m_replicationTaskAssessmentRunCreationDate = std::forward<ReplicationTaskAssessmentRunCreationDateT>(value); }
    template<typename ReplicationTaskAssessmentRunCreationDateT = Aws::Utils::DateTime>
    ReplicationTaskAssessmentRun& WithReplicationTaskAssessmentRunCreationDate(ReplicationTaskAssessmentRunCreationDateT&& value) { SetReplicationTaskAssessmentRunCreationDate(std::forward<ReplicationTaskAssessmentRunCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indication of the completion progress for the individual assessments
     * specified to run.</p>
     */
    inline const ReplicationTaskAssessmentRunProgress& GetAssessmentProgress() const { return m_assessmentProgress; }
    inline bool AssessmentProgressHasBeenSet() const { return m_assessmentProgressHasBeenSet; }
    template<typename AssessmentProgressT = ReplicationTaskAssessmentRunProgress>
    void SetAssessmentProgress(AssessmentProgressT&& value) { m_assessmentProgressHasBeenSet = true; m_assessmentProgress = std::forward<AssessmentProgressT>(value); }
    template<typename AssessmentProgressT = ReplicationTaskAssessmentRunProgress>
    ReplicationTaskAssessmentRun& WithAssessmentProgress(AssessmentProgressT&& value) { SetAssessmentProgress(std::forward<AssessmentProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last message generated by an individual assessment failure.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    ReplicationTaskAssessmentRun& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the service role used to start the assessment run using the
     * <code>StartReplicationTaskAssessmentRun</code> operation. The role must allow
     * the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    ReplicationTaskAssessmentRun& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 bucket where DMS stores the results of this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationBucket() const { return m_resultLocationBucket; }
    inline bool ResultLocationBucketHasBeenSet() const { return m_resultLocationBucketHasBeenSet; }
    template<typename ResultLocationBucketT = Aws::String>
    void SetResultLocationBucket(ResultLocationBucketT&& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = std::forward<ResultLocationBucketT>(value); }
    template<typename ResultLocationBucketT = Aws::String>
    ReplicationTaskAssessmentRun& WithResultLocationBucket(ResultLocationBucketT&& value) { SetResultLocationBucket(std::forward<ResultLocationBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Folder in an Amazon S3 bucket where DMS stores the results of this assessment
     * run.</p>
     */
    inline const Aws::String& GetResultLocationFolder() const { return m_resultLocationFolder; }
    inline bool ResultLocationFolderHasBeenSet() const { return m_resultLocationFolderHasBeenSet; }
    template<typename ResultLocationFolderT = Aws::String>
    void SetResultLocationFolder(ResultLocationFolderT&& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = std::forward<ResultLocationFolderT>(value); }
    template<typename ResultLocationFolderT = Aws::String>
    ReplicationTaskAssessmentRun& WithResultLocationFolder(ResultLocationFolderT&& value) { SetResultLocationFolder(std::forward<ResultLocationFolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption mode used to encrypt the assessment run results.</p>
     */
    inline const Aws::String& GetResultEncryptionMode() const { return m_resultEncryptionMode; }
    inline bool ResultEncryptionModeHasBeenSet() const { return m_resultEncryptionModeHasBeenSet; }
    template<typename ResultEncryptionModeT = Aws::String>
    void SetResultEncryptionMode(ResultEncryptionModeT&& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = std::forward<ResultEncryptionModeT>(value); }
    template<typename ResultEncryptionModeT = Aws::String>
    ReplicationTaskAssessmentRun& WithResultEncryptionMode(ResultEncryptionModeT&& value) { SetResultEncryptionMode(std::forward<ResultEncryptionModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the KMS encryption key used to encrypt the assessment run results.</p>
     */
    inline const Aws::String& GetResultKmsKeyArn() const { return m_resultKmsKeyArn; }
    inline bool ResultKmsKeyArnHasBeenSet() const { return m_resultKmsKeyArnHasBeenSet; }
    template<typename ResultKmsKeyArnT = Aws::String>
    void SetResultKmsKeyArn(ResultKmsKeyArnT&& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = std::forward<ResultKmsKeyArnT>(value); }
    template<typename ResultKmsKeyArnT = Aws::String>
    ReplicationTaskAssessmentRun& WithResultKmsKeyArn(ResultKmsKeyArnT&& value) { SetResultKmsKeyArn(std::forward<ResultKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique name of the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const { return m_assessmentRunName; }
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }
    template<typename AssessmentRunNameT = Aws::String>
    void SetAssessmentRunName(AssessmentRunNameT&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::forward<AssessmentRunNameT>(value); }
    template<typename AssessmentRunNameT = Aws::String>
    ReplicationTaskAssessmentRun& WithAssessmentRunName(AssessmentRunNameT&& value) { SetAssessmentRunName(std::forward<AssessmentRunNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the following PreflightAssessmentRun is the latest for the
     * ReplicationTask. The status is either true or false.</p>
     */
    inline bool GetIsLatestTaskAssessmentRun() const { return m_isLatestTaskAssessmentRun; }
    inline bool IsLatestTaskAssessmentRunHasBeenSet() const { return m_isLatestTaskAssessmentRunHasBeenSet; }
    inline void SetIsLatestTaskAssessmentRun(bool value) { m_isLatestTaskAssessmentRunHasBeenSet = true; m_isLatestTaskAssessmentRun = value; }
    inline ReplicationTaskAssessmentRun& WithIsLatestTaskAssessmentRun(bool value) { SetIsLatestTaskAssessmentRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Result statistics for a completed assessment run, showing aggregated
     * statistics of IndividualAssessments for how many assessments were passed,
     * failed, or encountered issues such as errors or warnings. </p>
     */
    inline const ReplicationTaskAssessmentRunResultStatistic& GetResultStatistic() const { return m_resultStatistic; }
    inline bool ResultStatisticHasBeenSet() const { return m_resultStatisticHasBeenSet; }
    template<typename ResultStatisticT = ReplicationTaskAssessmentRunResultStatistic>
    void SetResultStatistic(ResultStatisticT&& value) { m_resultStatisticHasBeenSet = true; m_resultStatistic = std::forward<ResultStatisticT>(value); }
    template<typename ResultStatisticT = ReplicationTaskAssessmentRunResultStatistic>
    ReplicationTaskAssessmentRun& WithResultStatistic(ResultStatisticT&& value) { SetResultStatistic(std::forward<ResultStatisticT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskAssessmentRunArn;
    bool m_replicationTaskAssessmentRunArnHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskAssessmentRunCreationDate{};
    bool m_replicationTaskAssessmentRunCreationDateHasBeenSet = false;

    ReplicationTaskAssessmentRunProgress m_assessmentProgress;
    bool m_assessmentProgressHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_resultLocationBucket;
    bool m_resultLocationBucketHasBeenSet = false;

    Aws::String m_resultLocationFolder;
    bool m_resultLocationFolderHasBeenSet = false;

    Aws::String m_resultEncryptionMode;
    bool m_resultEncryptionModeHasBeenSet = false;

    Aws::String m_resultKmsKeyArn;
    bool m_resultKmsKeyArnHasBeenSet = false;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet = false;

    bool m_isLatestTaskAssessmentRun{false};
    bool m_isLatestTaskAssessmentRunHasBeenSet = false;

    ReplicationTaskAssessmentRunResultStatistic m_resultStatistic;
    bool m_resultStatisticHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
