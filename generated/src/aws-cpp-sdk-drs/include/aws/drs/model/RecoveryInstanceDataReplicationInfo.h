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
    AWS_DRS_API RecoveryInstanceDataReplicationInfo() = default;
    AWS_DRS_API RecoveryInstanceDataReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about Data Replication</p>
     */
    inline const RecoveryInstanceDataReplicationError& GetDataReplicationError() const { return m_dataReplicationError; }
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }
    template<typename DataReplicationErrorT = RecoveryInstanceDataReplicationError>
    void SetDataReplicationError(DataReplicationErrorT&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::forward<DataReplicationErrorT>(value); }
    template<typename DataReplicationErrorT = RecoveryInstanceDataReplicationError>
    RecoveryInstanceDataReplicationInfo& WithDataReplicationError(DataReplicationErrorT&& value) { SetDataReplicationError(std::forward<DataReplicationErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline const RecoveryInstanceDataReplicationInitiation& GetDataReplicationInitiation() const { return m_dataReplicationInitiation; }
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }
    template<typename DataReplicationInitiationT = RecoveryInstanceDataReplicationInitiation>
    void SetDataReplicationInitiation(DataReplicationInitiationT&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::forward<DataReplicationInitiationT>(value); }
    template<typename DataReplicationInitiationT = RecoveryInstanceDataReplicationInitiation>
    RecoveryInstanceDataReplicationInfo& WithDataReplicationInitiation(DataReplicationInitiationT&& value) { SetDataReplicationInitiation(std::forward<DataReplicationInitiationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the data replication.</p>
     */
    inline RecoveryInstanceDataReplicationState GetDataReplicationState() const { return m_dataReplicationState; }
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }
    inline void SetDataReplicationState(RecoveryInstanceDataReplicationState value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationState(RecoveryInstanceDataReplicationState value) { SetDataReplicationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline const Aws::String& GetEtaDateTime() const { return m_etaDateTime; }
    inline bool EtaDateTimeHasBeenSet() const { return m_etaDateTimeHasBeenSet; }
    template<typename EtaDateTimeT = Aws::String>
    void SetEtaDateTime(EtaDateTimeT&& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = std::forward<EtaDateTimeT>(value); }
    template<typename EtaDateTimeT = Aws::String>
    RecoveryInstanceDataReplicationInfo& WithEtaDateTime(EtaDateTimeT&& value) { SetEtaDateTime(std::forward<EtaDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data replication lag duration.</p>
     */
    inline const Aws::String& GetLagDuration() const { return m_lagDuration; }
    inline bool LagDurationHasBeenSet() const { return m_lagDurationHasBeenSet; }
    template<typename LagDurationT = Aws::String>
    void SetLagDuration(LagDurationT&& value) { m_lagDurationHasBeenSet = true; m_lagDuration = std::forward<LagDurationT>(value); }
    template<typename LagDurationT = Aws::String>
    RecoveryInstanceDataReplicationInfo& WithLagDuration(LagDurationT&& value) { SetLagDuration(std::forward<LagDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disks that should be replicated.</p>
     */
    inline const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const { return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    template<typename ReplicatedDisksT = Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>>
    void SetReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::forward<ReplicatedDisksT>(value); }
    template<typename ReplicatedDisksT = Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>>
    RecoveryInstanceDataReplicationInfo& WithReplicatedDisks(ReplicatedDisksT&& value) { SetReplicatedDisks(std::forward<ReplicatedDisksT>(value)); return *this;}
    template<typename ReplicatedDisksT = RecoveryInstanceDataReplicationInfoReplicatedDisk>
    RecoveryInstanceDataReplicationInfo& AddReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.emplace_back(std::forward<ReplicatedDisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>AWS Availability zone into which data is being replicated.</p>
     */
    inline const Aws::String& GetStagingAvailabilityZone() const { return m_stagingAvailabilityZone; }
    inline bool StagingAvailabilityZoneHasBeenSet() const { return m_stagingAvailabilityZoneHasBeenSet; }
    template<typename StagingAvailabilityZoneT = Aws::String>
    void SetStagingAvailabilityZone(StagingAvailabilityZoneT&& value) { m_stagingAvailabilityZoneHasBeenSet = true; m_stagingAvailabilityZone = std::forward<StagingAvailabilityZoneT>(value); }
    template<typename StagingAvailabilityZoneT = Aws::String>
    RecoveryInstanceDataReplicationInfo& WithStagingAvailabilityZone(StagingAvailabilityZoneT&& value) { SetStagingAvailabilityZone(std::forward<StagingAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the staging Outpost</p>
     */
    inline const Aws::String& GetStagingOutpostArn() const { return m_stagingOutpostArn; }
    inline bool StagingOutpostArnHasBeenSet() const { return m_stagingOutpostArnHasBeenSet; }
    template<typename StagingOutpostArnT = Aws::String>
    void SetStagingOutpostArn(StagingOutpostArnT&& value) { m_stagingOutpostArnHasBeenSet = true; m_stagingOutpostArn = std::forward<StagingOutpostArnT>(value); }
    template<typename StagingOutpostArnT = Aws::String>
    RecoveryInstanceDataReplicationInfo& WithStagingOutpostArn(StagingOutpostArnT&& value) { SetStagingOutpostArn(std::forward<StagingOutpostArnT>(value)); return *this;}
    ///@}
  private:

    RecoveryInstanceDataReplicationError m_dataReplicationError;
    bool m_dataReplicationErrorHasBeenSet = false;

    RecoveryInstanceDataReplicationInitiation m_dataReplicationInitiation;
    bool m_dataReplicationInitiationHasBeenSet = false;

    RecoveryInstanceDataReplicationState m_dataReplicationState{RecoveryInstanceDataReplicationState::NOT_SET};
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
