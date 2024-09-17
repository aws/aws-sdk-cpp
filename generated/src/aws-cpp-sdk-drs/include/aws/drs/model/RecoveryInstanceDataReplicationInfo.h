/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationError.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInitiation.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInfoReplicatedDisk.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Information about Data Replication</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDataReplicationInfo">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDataReplicationInfo
  {
  public:
    AWS_DRS_API RecoveryInstanceDataReplicationInfo();
    AWS_DRS_API RecoveryInstanceDataReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about Data Replication</p>
     */
    inline const RecoveryInstanceDataReplicationError& GetDataReplicationError() const{ return m_dataReplicationError; }
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }
    inline void SetDataReplicationError(const RecoveryInstanceDataReplicationError& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = value; }
    inline void SetDataReplicationError(RecoveryInstanceDataReplicationError&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::move(value); }
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationError(const RecoveryInstanceDataReplicationError& value) { SetDataReplicationError(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationError(RecoveryInstanceDataReplicationError&& value) { SetDataReplicationError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline const RecoveryInstanceDataReplicationInitiation& GetDataReplicationInitiation() const{ return m_dataReplicationInitiation; }
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }
    inline void SetDataReplicationInitiation(const RecoveryInstanceDataReplicationInitiation& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = value; }
    inline void SetDataReplicationInitiation(RecoveryInstanceDataReplicationInitiation&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::move(value); }
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationInitiation(const RecoveryInstanceDataReplicationInitiation& value) { SetDataReplicationInitiation(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationInitiation(RecoveryInstanceDataReplicationInitiation&& value) { SetDataReplicationInitiation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the data replication.</p>
     */
    inline const RecoveryInstanceDataReplicationState& GetDataReplicationState() const{ return m_dataReplicationState; }
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }
    inline void SetDataReplicationState(const RecoveryInstanceDataReplicationState& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }
    inline void SetDataReplicationState(RecoveryInstanceDataReplicationState&& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = std::move(value); }
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationState(const RecoveryInstanceDataReplicationState& value) { SetDataReplicationState(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationState(RecoveryInstanceDataReplicationState&& value) { SetDataReplicationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline const Aws::String& GetEtaDateTime() const{ return m_etaDateTime; }
    inline bool EtaDateTimeHasBeenSet() const { return m_etaDateTimeHasBeenSet; }
    inline void SetEtaDateTime(const Aws::String& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = value; }
    inline void SetEtaDateTime(Aws::String&& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = std::move(value); }
    inline void SetEtaDateTime(const char* value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime.assign(value); }
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(const Aws::String& value) { SetEtaDateTime(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(Aws::String&& value) { SetEtaDateTime(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(const char* value) { SetEtaDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data replication lag duration.</p>
     */
    inline const Aws::String& GetLagDuration() const{ return m_lagDuration; }
    inline bool LagDurationHasBeenSet() const { return m_lagDurationHasBeenSet; }
    inline void SetLagDuration(const Aws::String& value) { m_lagDurationHasBeenSet = true; m_lagDuration = value; }
    inline void SetLagDuration(Aws::String&& value) { m_lagDurationHasBeenSet = true; m_lagDuration = std::move(value); }
    inline void SetLagDuration(const char* value) { m_lagDurationHasBeenSet = true; m_lagDuration.assign(value); }
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(const Aws::String& value) { SetLagDuration(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(Aws::String&& value) { SetLagDuration(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(const char* value) { SetLagDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disks that should be replicated.</p>
     */
    inline const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    inline void SetReplicatedDisks(const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = value; }
    inline void SetReplicatedDisks(Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::move(value); }
    inline RecoveryInstanceDataReplicationInfo& WithReplicatedDisks(const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithReplicatedDisks(Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfo& AddReplicatedDisks(const RecoveryInstanceDataReplicationInfoReplicatedDisk& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(value); return *this; }
    inline RecoveryInstanceDataReplicationInfo& AddReplicatedDisks(RecoveryInstanceDataReplicationInfoReplicatedDisk&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>AWS Availability zone into which data is being replicated.</p>
     */
    inline const Aws::String& GetStagingAvailabilityZone() const{ return m_stagingAvailabilityZone; }
    inline bool StagingAvailabilityZoneHasBeenSet() const { return m_stagingAvailabilityZoneHasBeenSet; }
    inline void SetStagingAvailabilityZone(const Aws::String& value) { m_stagingAvailabilityZoneHasBeenSet = true; m_stagingAvailabilityZone = value; }
    inline void SetStagingAvailabilityZone(Aws::String&& value) { m_stagingAvailabilityZoneHasBeenSet = true; m_stagingAvailabilityZone = std::move(value); }
    inline void SetStagingAvailabilityZone(const char* value) { m_stagingAvailabilityZoneHasBeenSet = true; m_stagingAvailabilityZone.assign(value); }
    inline RecoveryInstanceDataReplicationInfo& WithStagingAvailabilityZone(const Aws::String& value) { SetStagingAvailabilityZone(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithStagingAvailabilityZone(Aws::String&& value) { SetStagingAvailabilityZone(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithStagingAvailabilityZone(const char* value) { SetStagingAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the staging Outpost</p>
     */
    inline const Aws::String& GetStagingOutpostArn() const{ return m_stagingOutpostArn; }
    inline bool StagingOutpostArnHasBeenSet() const { return m_stagingOutpostArnHasBeenSet; }
    inline void SetStagingOutpostArn(const Aws::String& value) { m_stagingOutpostArnHasBeenSet = true; m_stagingOutpostArn = value; }
    inline void SetStagingOutpostArn(Aws::String&& value) { m_stagingOutpostArnHasBeenSet = true; m_stagingOutpostArn = std::move(value); }
    inline void SetStagingOutpostArn(const char* value) { m_stagingOutpostArnHasBeenSet = true; m_stagingOutpostArn.assign(value); }
    inline RecoveryInstanceDataReplicationInfo& WithStagingOutpostArn(const Aws::String& value) { SetStagingOutpostArn(value); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithStagingOutpostArn(Aws::String&& value) { SetStagingOutpostArn(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfo& WithStagingOutpostArn(const char* value) { SetStagingOutpostArn(value); return *this;}
    ///@}
  private:

    RecoveryInstanceDataReplicationError m_dataReplicationError;
    bool m_dataReplicationErrorHasBeenSet = false;

    RecoveryInstanceDataReplicationInitiation m_dataReplicationInitiation;
    bool m_dataReplicationInitiationHasBeenSet = false;

    RecoveryInstanceDataReplicationState m_dataReplicationState;
    bool m_dataReplicationStateHasBeenSet = false;

    Aws::String m_etaDateTime;
    bool m_etaDateTimeHasBeenSet = false;

    Aws::String m_lagDuration;
    bool m_lagDurationHasBeenSet = false;

    Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;

    Aws::String m_stagingAvailabilityZone;
    bool m_stagingAvailabilityZoneHasBeenSet = false;

    Aws::String m_stagingOutpostArn;
    bool m_stagingOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
