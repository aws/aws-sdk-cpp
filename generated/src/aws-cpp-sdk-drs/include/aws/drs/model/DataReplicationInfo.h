/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DataReplicationError.h>
#include <aws/drs/model/DataReplicationInitiation.h>
#include <aws/drs/model/DataReplicationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/DataReplicationInfoReplicatedDisk.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DataReplicationInfo">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfo
  {
  public:
    AWS_DRS_API DataReplicationInfo() = default;
    AWS_DRS_API DataReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline const DataReplicationError& GetDataReplicationError() const { return m_dataReplicationError; }
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }
    template<typename DataReplicationErrorT = DataReplicationError>
    void SetDataReplicationError(DataReplicationErrorT&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::forward<DataReplicationErrorT>(value); }
    template<typename DataReplicationErrorT = DataReplicationError>
    DataReplicationInfo& WithDataReplicationError(DataReplicationErrorT&& value) { SetDataReplicationError(std::forward<DataReplicationErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline const DataReplicationInitiation& GetDataReplicationInitiation() const { return m_dataReplicationInitiation; }
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }
    template<typename DataReplicationInitiationT = DataReplicationInitiation>
    void SetDataReplicationInitiation(DataReplicationInitiationT&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::forward<DataReplicationInitiationT>(value); }
    template<typename DataReplicationInitiationT = DataReplicationInitiation>
    DataReplicationInfo& WithDataReplicationInitiation(DataReplicationInitiationT&& value) { SetDataReplicationInitiation(std::forward<DataReplicationInitiationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the data replication.</p>
     */
    inline DataReplicationState GetDataReplicationState() const { return m_dataReplicationState; }
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }
    inline void SetDataReplicationState(DataReplicationState value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }
    inline DataReplicationInfo& WithDataReplicationState(DataReplicationState value) { SetDataReplicationState(value); return *this;}
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
    DataReplicationInfo& WithEtaDateTime(EtaDateTimeT&& value) { SetEtaDateTime(std::forward<EtaDateTimeT>(value)); return *this;}
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
    DataReplicationInfo& WithLagDuration(LagDurationT&& value) { SetLagDuration(std::forward<LagDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disks that should be replicated.</p>
     */
    inline const Aws::Vector<DataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const { return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    template<typename ReplicatedDisksT = Aws::Vector<DataReplicationInfoReplicatedDisk>>
    void SetReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::forward<ReplicatedDisksT>(value); }
    template<typename ReplicatedDisksT = Aws::Vector<DataReplicationInfoReplicatedDisk>>
    DataReplicationInfo& WithReplicatedDisks(ReplicatedDisksT&& value) { SetReplicatedDisks(std::forward<ReplicatedDisksT>(value)); return *this;}
    template<typename ReplicatedDisksT = DataReplicationInfoReplicatedDisk>
    DataReplicationInfo& AddReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.emplace_back(std::forward<ReplicatedDisksT>(value)); return *this; }
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
    DataReplicationInfo& WithStagingAvailabilityZone(StagingAvailabilityZoneT&& value) { SetStagingAvailabilityZone(std::forward<StagingAvailabilityZoneT>(value)); return *this;}
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
    DataReplicationInfo& WithStagingOutpostArn(StagingOutpostArnT&& value) { SetStagingOutpostArn(std::forward<StagingOutpostArnT>(value)); return *this;}
    ///@}
  private:

    DataReplicationError m_dataReplicationError;
    bool m_dataReplicationErrorHasBeenSet = false;

    DataReplicationInitiation m_dataReplicationInitiation;
    bool m_dataReplicationInitiationHasBeenSet = false;

    DataReplicationState m_dataReplicationState{DataReplicationState::NOT_SET};
    bool m_dataReplicationStateHasBeenSet = false;

    Aws::String m_etaDateTime;
    bool m_etaDateTimeHasBeenSet = false;

    Aws::String m_lagDuration;
    bool m_lagDurationHasBeenSet = false;

    Aws::Vector<DataReplicationInfoReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;

    Aws::String m_stagingAvailabilityZone;
    bool m_stagingAvailabilityZoneHasBeenSet = false;

    Aws::String m_stagingOutpostArn;
    bool m_stagingOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
