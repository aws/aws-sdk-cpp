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


    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline StartReplicationRequest& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline StartReplicationRequest& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication for which to start
     * replication.</p>
     */
    inline StartReplicationRequest& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    /**
     * <p>The replication type.</p>
     */
    inline const Aws::String& GetStartReplicationType() const{ return m_startReplicationType; }

    /**
     * <p>The replication type.</p>
     */
    inline bool StartReplicationTypeHasBeenSet() const { return m_startReplicationTypeHasBeenSet; }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(const Aws::String& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = value; }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(Aws::String&& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = std::move(value); }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(const char* value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType.assign(value); }

    /**
     * <p>The replication type.</p>
     */
    inline StartReplicationRequest& WithStartReplicationType(const Aws::String& value) { SetStartReplicationType(value); return *this;}

    /**
     * <p>The replication type.</p>
     */
    inline StartReplicationRequest& WithStartReplicationType(Aws::String&& value) { SetStartReplicationType(std::move(value)); return *this;}

    /**
     * <p>The replication type.</p>
     */
    inline StartReplicationRequest& WithStartReplicationType(const char* value) { SetStartReplicationType(value); return *this;}


    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline StartReplicationRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline StartReplicationRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline StartReplicationRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline StartReplicationRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     */
    inline StartReplicationRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline StartReplicationRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline StartReplicationRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline StartReplicationRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}

  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_startReplicationType;
    bool m_startReplicationTypeHasBeenSet = false;

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
