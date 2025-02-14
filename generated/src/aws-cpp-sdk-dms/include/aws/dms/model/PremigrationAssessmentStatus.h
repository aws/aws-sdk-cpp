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
   * <p>The results returned in <code>describe-replications</code> to display the
   * results of the premigration assessment from the replication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/PremigrationAssessmentStatus">AWS
   * API Reference</a></p>
   */
  class PremigrationAssessmentStatus
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API PremigrationAssessmentStatus();
    AWS_DATABASEMIGRATIONSERVICE_API PremigrationAssessmentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API PremigrationAssessmentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this assessment run.</p>
     */
    inline const Aws::String& GetPremigrationAssessmentRunArn() const{ return m_premigrationAssessmentRunArn; }
    inline bool PremigrationAssessmentRunArnHasBeenSet() const { return m_premigrationAssessmentRunArnHasBeenSet; }
    inline void SetPremigrationAssessmentRunArn(const Aws::String& value) { m_premigrationAssessmentRunArnHasBeenSet = true; m_premigrationAssessmentRunArn = value; }
    inline void SetPremigrationAssessmentRunArn(Aws::String&& value) { m_premigrationAssessmentRunArnHasBeenSet = true; m_premigrationAssessmentRunArn = std::move(value); }
    inline void SetPremigrationAssessmentRunArn(const char* value) { m_premigrationAssessmentRunArnHasBeenSet = true; m_premigrationAssessmentRunArn.assign(value); }
    inline PremigrationAssessmentStatus& WithPremigrationAssessmentRunArn(const Aws::String& value) { SetPremigrationAssessmentRunArn(value); return *this;}
    inline PremigrationAssessmentStatus& WithPremigrationAssessmentRunArn(Aws::String&& value) { SetPremigrationAssessmentRunArn(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithPremigrationAssessmentRunArn(const char* value) { SetPremigrationAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configurable setting you can set to <code>true</code> (the defualt setting)
     * or <code>false</code>. Use this setting to to stop the replication from starting
     * automatically if the assessment fails. This can help you evaluate the issue that
     * is preventing the replication from running successfully.</p>
     */
    inline bool GetFailOnAssessmentFailure() const{ return m_failOnAssessmentFailure; }
    inline bool FailOnAssessmentFailureHasBeenSet() const { return m_failOnAssessmentFailureHasBeenSet; }
    inline void SetFailOnAssessmentFailure(bool value) { m_failOnAssessmentFailureHasBeenSet = true; m_failOnAssessmentFailure = value; }
    inline PremigrationAssessmentStatus& WithFailOnAssessmentFailure(bool value) { SetFailOnAssessmentFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the assessment run status. The status can be one of the
     * following values:</p> <ul> <li> <p> <code>cancelling</code>: The assessment run
     * was canceled.</p> </li> <li> <p> <code>deleting</code>: The assessment run was
     * deleted.</p> </li> <li> <p> <code>failed</code>: At least one individual
     * assessment completed with a failed status. </p> </li> <li> <p>
     * <code>error-provisioning</code>: An internal error occurred while resources were
     * provisioned (during the <code>provisioning</code> status).</p> </li> <li> <p>
     * <code>error-executing</code> An internal error occurred while individual
     * assessments ran (during the <code>running</code> status).</p> </li> <li> <p>
     * <code>invalid state</code>: The assessment run is in an unknown state. </p>
     * </li> <li> <p> <code>passed</code>: All individual assessments have completed
     * and none have a failed status.</p> </li> <li> <p> <code>provisioning</code>: The
     * resources required to run individual assessments are being provisioned. </p>
     * </li> <li> <p> <code>running</code>: Individual assessments are being run. </p>
     * </li> <li> <p> <code>starting</code>: The assessment run is starting, but
     * resources are not yet being provisioned for individual assessments. </p> </li>
     * <li> <p> <code>warning</code>: At least one individual assessment completed with
     * a warning status. </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline PremigrationAssessmentStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline PremigrationAssessmentStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date which the assessment run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetPremigrationAssessmentRunCreationDate() const{ return m_premigrationAssessmentRunCreationDate; }
    inline bool PremigrationAssessmentRunCreationDateHasBeenSet() const { return m_premigrationAssessmentRunCreationDateHasBeenSet; }
    inline void SetPremigrationAssessmentRunCreationDate(const Aws::Utils::DateTime& value) { m_premigrationAssessmentRunCreationDateHasBeenSet = true; m_premigrationAssessmentRunCreationDate = value; }
    inline void SetPremigrationAssessmentRunCreationDate(Aws::Utils::DateTime&& value) { m_premigrationAssessmentRunCreationDateHasBeenSet = true; m_premigrationAssessmentRunCreationDate = std::move(value); }
    inline PremigrationAssessmentStatus& WithPremigrationAssessmentRunCreationDate(const Aws::Utils::DateTime& value) { SetPremigrationAssessmentRunCreationDate(value); return *this;}
    inline PremigrationAssessmentStatus& WithPremigrationAssessmentRunCreationDate(Aws::Utils::DateTime&& value) { SetPremigrationAssessmentRunCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ReplicationTaskAssessmentRunProgress& GetAssessmentProgress() const{ return m_assessmentProgress; }
    inline bool AssessmentProgressHasBeenSet() const { return m_assessmentProgressHasBeenSet; }
    inline void SetAssessmentProgress(const ReplicationTaskAssessmentRunProgress& value) { m_assessmentProgressHasBeenSet = true; m_assessmentProgress = value; }
    inline void SetAssessmentProgress(ReplicationTaskAssessmentRunProgress&& value) { m_assessmentProgressHasBeenSet = true; m_assessmentProgress = std::move(value); }
    inline PremigrationAssessmentStatus& WithAssessmentProgress(const ReplicationTaskAssessmentRunProgress& value) { SetAssessmentProgress(value); return *this;}
    inline PremigrationAssessmentStatus& WithAssessmentProgress(ReplicationTaskAssessmentRunProgress&& value) { SetAssessmentProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last message generated by an individual assessment failure.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }
    inline PremigrationAssessmentStatus& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}
    inline PremigrationAssessmentStatus& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that Database Migration Service Serverless created to
     * store the results of this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationBucket() const{ return m_resultLocationBucket; }
    inline bool ResultLocationBucketHasBeenSet() const { return m_resultLocationBucketHasBeenSet; }
    inline void SetResultLocationBucket(const Aws::String& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = value; }
    inline void SetResultLocationBucket(Aws::String&& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = std::move(value); }
    inline void SetResultLocationBucket(const char* value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket.assign(value); }
    inline PremigrationAssessmentStatus& WithResultLocationBucket(const Aws::String& value) { SetResultLocationBucket(value); return *this;}
    inline PremigrationAssessmentStatus& WithResultLocationBucket(Aws::String&& value) { SetResultLocationBucket(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithResultLocationBucket(const char* value) { SetResultLocationBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder within an Amazon S3 bucket where you want Database Migration
     * Service to store the results of this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationFolder() const{ return m_resultLocationFolder; }
    inline bool ResultLocationFolderHasBeenSet() const { return m_resultLocationFolderHasBeenSet; }
    inline void SetResultLocationFolder(const Aws::String& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = value; }
    inline void SetResultLocationFolder(Aws::String&& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = std::move(value); }
    inline void SetResultLocationFolder(const char* value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder.assign(value); }
    inline PremigrationAssessmentStatus& WithResultLocationFolder(const Aws::String& value) { SetResultLocationFolder(value); return *this;}
    inline PremigrationAssessmentStatus& WithResultLocationFolder(Aws::String&& value) { SetResultLocationFolder(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithResultLocationFolder(const char* value) { SetResultLocationFolder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported values are <code>SSE_KMS</code> and <code>SSE_S3</code>. If
     * these values are not provided, then the files are not encrypted at rest. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.KMSKeys">Creating
     * Amazon Web Services KMS keys to encrypt Amazon S3 target objects</a>.</p>
     */
    inline const Aws::String& GetResultEncryptionMode() const{ return m_resultEncryptionMode; }
    inline bool ResultEncryptionModeHasBeenSet() const { return m_resultEncryptionModeHasBeenSet; }
    inline void SetResultEncryptionMode(const Aws::String& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = value; }
    inline void SetResultEncryptionMode(Aws::String&& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = std::move(value); }
    inline void SetResultEncryptionMode(const char* value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode.assign(value); }
    inline PremigrationAssessmentStatus& WithResultEncryptionMode(const Aws::String& value) { SetResultEncryptionMode(value); return *this;}
    inline PremigrationAssessmentStatus& WithResultEncryptionMode(Aws::String&& value) { SetResultEncryptionMode(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithResultEncryptionMode(const char* value) { SetResultEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>SSE_KMS</code>.</p>
     */
    inline const Aws::String& GetResultKmsKeyArn() const{ return m_resultKmsKeyArn; }
    inline bool ResultKmsKeyArnHasBeenSet() const { return m_resultKmsKeyArnHasBeenSet; }
    inline void SetResultKmsKeyArn(const Aws::String& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = value; }
    inline void SetResultKmsKeyArn(Aws::String&& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = std::move(value); }
    inline void SetResultKmsKeyArn(const char* value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn.assign(value); }
    inline PremigrationAssessmentStatus& WithResultKmsKeyArn(const Aws::String& value) { SetResultKmsKeyArn(value); return *this;}
    inline PremigrationAssessmentStatus& WithResultKmsKeyArn(Aws::String&& value) { SetResultKmsKeyArn(std::move(value)); return *this;}
    inline PremigrationAssessmentStatus& WithResultKmsKeyArn(const char* value) { SetResultKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ReplicationTaskAssessmentRunResultStatistic& GetResultStatistic() const{ return m_resultStatistic; }
    inline bool ResultStatisticHasBeenSet() const { return m_resultStatisticHasBeenSet; }
    inline void SetResultStatistic(const ReplicationTaskAssessmentRunResultStatistic& value) { m_resultStatisticHasBeenSet = true; m_resultStatistic = value; }
    inline void SetResultStatistic(ReplicationTaskAssessmentRunResultStatistic&& value) { m_resultStatisticHasBeenSet = true; m_resultStatistic = std::move(value); }
    inline PremigrationAssessmentStatus& WithResultStatistic(const ReplicationTaskAssessmentRunResultStatistic& value) { SetResultStatistic(value); return *this;}
    inline PremigrationAssessmentStatus& WithResultStatistic(ReplicationTaskAssessmentRunResultStatistic&& value) { SetResultStatistic(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_premigrationAssessmentRunArn;
    bool m_premigrationAssessmentRunArnHasBeenSet = false;

    bool m_failOnAssessmentFailure;
    bool m_failOnAssessmentFailureHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_premigrationAssessmentRunCreationDate;
    bool m_premigrationAssessmentRunCreationDateHasBeenSet = false;

    ReplicationTaskAssessmentRunProgress m_assessmentProgress;
    bool m_assessmentProgressHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_resultLocationBucket;
    bool m_resultLocationBucketHasBeenSet = false;

    Aws::String m_resultLocationFolder;
    bool m_resultLocationFolderHasBeenSet = false;

    Aws::String m_resultEncryptionMode;
    bool m_resultEncryptionModeHasBeenSet = false;

    Aws::String m_resultKmsKeyArn;
    bool m_resultKmsKeyArnHasBeenSet = false;

    ReplicationTaskAssessmentRunResultStatistic m_resultStatistic;
    bool m_resultStatisticHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
