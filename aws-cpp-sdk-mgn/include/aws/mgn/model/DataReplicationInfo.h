/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DataReplicationError.h>
#include <aws/mgn/model/DataReplicationInitiation.h>
#include <aws/mgn/model/DataReplicationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/DataReplicationInfoReplicatedDisk.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Request data replication info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationInfo">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfo
  {
  public:
    AWS_MGN_API DataReplicationInfo();
    AWS_MGN_API DataReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline const DataReplicationError& GetDataReplicationError() const{ return m_dataReplicationError; }

    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }

    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline void SetDataReplicationError(const DataReplicationError& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = value; }

    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline void SetDataReplicationError(DataReplicationError&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::move(value); }

    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline DataReplicationInfo& WithDataReplicationError(const DataReplicationError& value) { SetDataReplicationError(value); return *this;}

    /**
     * <p>Error in obtaining data replication info.</p>
     */
    inline DataReplicationInfo& WithDataReplicationError(DataReplicationError&& value) { SetDataReplicationError(std::move(value)); return *this;}


    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline const DataReplicationInitiation& GetDataReplicationInitiation() const{ return m_dataReplicationInitiation; }

    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }

    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline void SetDataReplicationInitiation(const DataReplicationInitiation& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = value; }

    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline void SetDataReplicationInitiation(DataReplicationInitiation&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::move(value); }

    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline DataReplicationInfo& WithDataReplicationInitiation(const DataReplicationInitiation& value) { SetDataReplicationInitiation(value); return *this;}

    /**
     * <p>Request to query whether data replication has been initiated.</p>
     */
    inline DataReplicationInfo& WithDataReplicationInitiation(DataReplicationInitiation&& value) { SetDataReplicationInitiation(std::move(value)); return *this;}


    /**
     * <p>Request to query the data replication state.</p>
     */
    inline const DataReplicationState& GetDataReplicationState() const{ return m_dataReplicationState; }

    /**
     * <p>Request to query the data replication state.</p>
     */
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }

    /**
     * <p>Request to query the data replication state.</p>
     */
    inline void SetDataReplicationState(const DataReplicationState& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }

    /**
     * <p>Request to query the data replication state.</p>
     */
    inline void SetDataReplicationState(DataReplicationState&& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = std::move(value); }

    /**
     * <p>Request to query the data replication state.</p>
     */
    inline DataReplicationInfo& WithDataReplicationState(const DataReplicationState& value) { SetDataReplicationState(value); return *this;}

    /**
     * <p>Request to query the data replication state.</p>
     */
    inline DataReplicationInfo& WithDataReplicationState(DataReplicationState&& value) { SetDataReplicationState(std::move(value)); return *this;}


    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline const Aws::String& GetEtaDateTime() const{ return m_etaDateTime; }

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline bool EtaDateTimeHasBeenSet() const { return m_etaDateTimeHasBeenSet; }

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline void SetEtaDateTime(const Aws::String& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = value; }

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline void SetEtaDateTime(Aws::String&& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = std::move(value); }

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline void SetEtaDateTime(const char* value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime.assign(value); }

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline DataReplicationInfo& WithEtaDateTime(const Aws::String& value) { SetEtaDateTime(value); return *this;}

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline DataReplicationInfo& WithEtaDateTime(Aws::String&& value) { SetEtaDateTime(std::move(value)); return *this;}

    /**
     * <p>Request to query the time when data replication will be complete.</p>
     */
    inline DataReplicationInfo& WithEtaDateTime(const char* value) { SetEtaDateTime(value); return *this;}


    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline const Aws::String& GetLagDuration() const{ return m_lagDuration; }

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline bool LagDurationHasBeenSet() const { return m_lagDurationHasBeenSet; }

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline void SetLagDuration(const Aws::String& value) { m_lagDurationHasBeenSet = true; m_lagDuration = value; }

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline void SetLagDuration(Aws::String&& value) { m_lagDurationHasBeenSet = true; m_lagDuration = std::move(value); }

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline void SetLagDuration(const char* value) { m_lagDurationHasBeenSet = true; m_lagDuration.assign(value); }

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline DataReplicationInfo& WithLagDuration(const Aws::String& value) { SetLagDuration(value); return *this;}

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline DataReplicationInfo& WithLagDuration(Aws::String&& value) { SetLagDuration(std::move(value)); return *this;}

    /**
     * <p>Request to query data replication lag duration.</p>
     */
    inline DataReplicationInfo& WithLagDuration(const char* value) { SetLagDuration(value); return *this;}


    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline const Aws::String& GetLastSnapshotDateTime() const{ return m_lastSnapshotDateTime; }

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline bool LastSnapshotDateTimeHasBeenSet() const { return m_lastSnapshotDateTimeHasBeenSet; }

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline void SetLastSnapshotDateTime(const Aws::String& value) { m_lastSnapshotDateTimeHasBeenSet = true; m_lastSnapshotDateTime = value; }

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline void SetLastSnapshotDateTime(Aws::String&& value) { m_lastSnapshotDateTimeHasBeenSet = true; m_lastSnapshotDateTime = std::move(value); }

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline void SetLastSnapshotDateTime(const char* value) { m_lastSnapshotDateTimeHasBeenSet = true; m_lastSnapshotDateTime.assign(value); }

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline DataReplicationInfo& WithLastSnapshotDateTime(const Aws::String& value) { SetLastSnapshotDateTime(value); return *this;}

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline DataReplicationInfo& WithLastSnapshotDateTime(Aws::String&& value) { SetLastSnapshotDateTime(std::move(value)); return *this;}

    /**
     * <p>Request to query data replication last snapshot time.</p>
     */
    inline DataReplicationInfo& WithLastSnapshotDateTime(const char* value) { SetLastSnapshotDateTime(value); return *this;}


    /**
     * <p>Request to query disks replicated.</p>
     */
    inline const Aws::Vector<DataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline void SetReplicatedDisks(const Aws::Vector<DataReplicationInfoReplicatedDisk>& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = value; }

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline void SetReplicatedDisks(Aws::Vector<DataReplicationInfoReplicatedDisk>&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::move(value); }

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline DataReplicationInfo& WithReplicatedDisks(const Aws::Vector<DataReplicationInfoReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline DataReplicationInfo& WithReplicatedDisks(Aws::Vector<DataReplicationInfoReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline DataReplicationInfo& AddReplicatedDisks(const DataReplicationInfoReplicatedDisk& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(value); return *this; }

    /**
     * <p>Request to query disks replicated.</p>
     */
    inline DataReplicationInfo& AddReplicatedDisks(DataReplicationInfoReplicatedDisk&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(std::move(value)); return *this; }

  private:

    DataReplicationError m_dataReplicationError;
    bool m_dataReplicationErrorHasBeenSet = false;

    DataReplicationInitiation m_dataReplicationInitiation;
    bool m_dataReplicationInitiationHasBeenSet = false;

    DataReplicationState m_dataReplicationState;
    bool m_dataReplicationStateHasBeenSet = false;

    Aws::String m_etaDateTime;
    bool m_etaDateTimeHasBeenSet = false;

    Aws::String m_lagDuration;
    bool m_lagDurationHasBeenSet = false;

    Aws::String m_lastSnapshotDateTime;
    bool m_lastSnapshotDateTimeHasBeenSet = false;

    Aws::Vector<DataReplicationInfoReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
