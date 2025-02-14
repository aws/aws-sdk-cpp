/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationMessage">AWS
   * API Reference</a></p>
   */
  class StartReplicationRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplication"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }
    inline StartReplicationRequest& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}
    inline StartReplicationRequest& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}
    inline StartReplicationRequest& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication type.</p> <p>When the replication type is
     * <code>full-load</code> or <code>full-load-and-cdc</code>, the only valid value
     * for the first run of the replication is <code>start-replication</code>. This
     * option will start the replication.</p> <p>You can also use <a>ReloadTables</a>
     * to reload specific tables that failed during replication instead of restarting
     * the replication.</p> <p>The <code>resume-processing</code> option isn't
     * applicable for a full-load replication, because you can't resume partially
     * loaded tables during the full load phase.</p> <p>For a
     * <code>full-load-and-cdc</code> replication, DMS migrates table data, and then
     * applies data changes that occur on the source. To load all the tables again, and
     * start capturing source changes, use <code>reload-target</code>. Otherwise use
     * <code>resume-processing</code>, to replicate the changes from the last stop
     * position.</p>
     */
    inline const Aws::String& GetStartReplicationType() const{ return m_startReplicationType; }
    inline bool StartReplicationTypeHasBeenSet() const { return m_startReplicationTypeHasBeenSet; }
    inline void SetStartReplicationType(const Aws::String& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = value; }
    inline void SetStartReplicationType(Aws::String&& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = std::move(value); }
    inline void SetStartReplicationType(const char* value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType.assign(value); }
    inline StartReplicationRequest& WithStartReplicationType(const Aws::String& value) { SetStartReplicationType(value); return *this;}
    inline StartReplicationRequest& WithStartReplicationType(Aws::String&& value) { SetStartReplicationType(std::move(value)); return *this;}
    inline StartReplicationRequest& WithStartReplicationType(const char* value) { SetStartReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-defined settings for the premigration assessment. The possible values
     * are:</p> <ul> <li> <p> <code>ResultLocationFinder</code>: The folder within an
     * Amazon Amazon S3 bucket where you want DMS to store the results of this
     * assessment run.</p> </li> <li> <p> <code>ResultEncryptionMode</code>: The
     * supported values are <code>SSE_KMS</code> and <code>SSE_S3</code>. If these
     * values are not provided, then the files are not encrypted at rest. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.S3.html#CHAP_Target.S3.KMSKeys">Creating
     * Amazon Web Services KMS keys to encrypt Amazon Amazon S3 target objects</a>.</p>
     * </li> <li> <p> <code>ResultKmsKeyArn</code>: The ARN of a customer KMS
     * encryption key that you specify when you set <code>ResultEncryptionMode</code>
     * to <code>SSE_KMS</code>.</p> </li> <li> <p> <code>IncludeOnly</code>: A
     * space-separated list of names for specific individual assessments that you want
     * to include. These names come from the default list of individual assessments
     * that Database Migration Service supports for the associated migration.</p> </li>
     * <li> <p> <code>Exclude</code>: A space-separated list of names for specific
     * individual assessments that you want to exclude. These names come from the
     * default list of individual assessments that Database Migration Service supports
     * for the associated migration.</p> </li> <li> <p>
     * <code>FailOnAssessmentFailure</code>: A configurable setting you can set to
     * <code>true</code> (the default setting) or <code>false</code>. Use this setting
     * to to stop the replication from starting automatically if the assessment fails.
     * This can help you evaluate the issue that is preventing the replication from
     * running successfully.</p> </li> </ul>
     */
    inline const Aws::String& GetPremigrationAssessmentSettings() const{ return m_premigrationAssessmentSettings; }
    inline bool PremigrationAssessmentSettingsHasBeenSet() const { return m_premigrationAssessmentSettingsHasBeenSet; }
    inline void SetPremigrationAssessmentSettings(const Aws::String& value) { m_premigrationAssessmentSettingsHasBeenSet = true; m_premigrationAssessmentSettings = value; }
    inline void SetPremigrationAssessmentSettings(Aws::String&& value) { m_premigrationAssessmentSettingsHasBeenSet = true; m_premigrationAssessmentSettings = std::move(value); }
    inline void SetPremigrationAssessmentSettings(const char* value) { m_premigrationAssessmentSettingsHasBeenSet = true; m_premigrationAssessmentSettings.assign(value); }
    inline StartReplicationRequest& WithPremigrationAssessmentSettings(const Aws::String& value) { SetPremigrationAssessmentSettings(value); return *this;}
    inline StartReplicationRequest& WithPremigrationAssessmentSettings(Aws::String&& value) { SetPremigrationAssessmentSettings(std::move(value)); return *this;}
    inline StartReplicationRequest& WithPremigrationAssessmentSettings(const char* value) { SetPremigrationAssessmentSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }
    inline StartReplicationRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}
    inline StartReplicationRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }
    inline StartReplicationRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}
    inline StartReplicationRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}
    inline StartReplicationRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }
    inline StartReplicationRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}
    inline StartReplicationRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}
    inline StartReplicationRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_startReplicationType;
    bool m_startReplicationTypeHasBeenSet = false;

    Aws::String m_premigrationAssessmentSettings;
    bool m_premigrationAssessmentSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
