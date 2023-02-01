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


    /**
     * <p>Information about Data Replication</p>
     */
    inline const RecoveryInstanceDataReplicationError& GetDataReplicationError() const{ return m_dataReplicationError; }

    /**
     * <p>Information about Data Replication</p>
     */
    inline bool DataReplicationErrorHasBeenSet() const { return m_dataReplicationErrorHasBeenSet; }

    /**
     * <p>Information about Data Replication</p>
     */
    inline void SetDataReplicationError(const RecoveryInstanceDataReplicationError& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = value; }

    /**
     * <p>Information about Data Replication</p>
     */
    inline void SetDataReplicationError(RecoveryInstanceDataReplicationError&& value) { m_dataReplicationErrorHasBeenSet = true; m_dataReplicationError = std::move(value); }

    /**
     * <p>Information about Data Replication</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationError(const RecoveryInstanceDataReplicationError& value) { SetDataReplicationError(value); return *this;}

    /**
     * <p>Information about Data Replication</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationError(RecoveryInstanceDataReplicationError&& value) { SetDataReplicationError(std::move(value)); return *this;}


    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline const RecoveryInstanceDataReplicationInitiation& GetDataReplicationInitiation() const{ return m_dataReplicationInitiation; }

    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline bool DataReplicationInitiationHasBeenSet() const { return m_dataReplicationInitiationHasBeenSet; }

    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline void SetDataReplicationInitiation(const RecoveryInstanceDataReplicationInitiation& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = value; }

    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline void SetDataReplicationInitiation(RecoveryInstanceDataReplicationInitiation&& value) { m_dataReplicationInitiationHasBeenSet = true; m_dataReplicationInitiation = std::move(value); }

    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationInitiation(const RecoveryInstanceDataReplicationInitiation& value) { SetDataReplicationInitiation(value); return *this;}

    /**
     * <p>Information about whether the data replication has been initiated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationInitiation(RecoveryInstanceDataReplicationInitiation&& value) { SetDataReplicationInitiation(std::move(value)); return *this;}


    /**
     * <p>The state of the data replication.</p>
     */
    inline const RecoveryInstanceDataReplicationState& GetDataReplicationState() const{ return m_dataReplicationState; }

    /**
     * <p>The state of the data replication.</p>
     */
    inline bool DataReplicationStateHasBeenSet() const { return m_dataReplicationStateHasBeenSet; }

    /**
     * <p>The state of the data replication.</p>
     */
    inline void SetDataReplicationState(const RecoveryInstanceDataReplicationState& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = value; }

    /**
     * <p>The state of the data replication.</p>
     */
    inline void SetDataReplicationState(RecoveryInstanceDataReplicationState&& value) { m_dataReplicationStateHasBeenSet = true; m_dataReplicationState = std::move(value); }

    /**
     * <p>The state of the data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationState(const RecoveryInstanceDataReplicationState& value) { SetDataReplicationState(value); return *this;}

    /**
     * <p>The state of the data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithDataReplicationState(RecoveryInstanceDataReplicationState&& value) { SetDataReplicationState(std::move(value)); return *this;}


    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline const Aws::String& GetEtaDateTime() const{ return m_etaDateTime; }

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline bool EtaDateTimeHasBeenSet() const { return m_etaDateTimeHasBeenSet; }

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline void SetEtaDateTime(const Aws::String& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = value; }

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline void SetEtaDateTime(Aws::String&& value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime = std::move(value); }

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline void SetEtaDateTime(const char* value) { m_etaDateTimeHasBeenSet = true; m_etaDateTime.assign(value); }

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(const Aws::String& value) { SetEtaDateTime(value); return *this;}

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(Aws::String&& value) { SetEtaDateTime(std::move(value)); return *this;}

    /**
     * <p>An estimate of when the data replication will be completed.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithEtaDateTime(const char* value) { SetEtaDateTime(value); return *this;}


    /**
     * <p>Data replication lag duration.</p>
     */
    inline const Aws::String& GetLagDuration() const{ return m_lagDuration; }

    /**
     * <p>Data replication lag duration.</p>
     */
    inline bool LagDurationHasBeenSet() const { return m_lagDurationHasBeenSet; }

    /**
     * <p>Data replication lag duration.</p>
     */
    inline void SetLagDuration(const Aws::String& value) { m_lagDurationHasBeenSet = true; m_lagDuration = value; }

    /**
     * <p>Data replication lag duration.</p>
     */
    inline void SetLagDuration(Aws::String&& value) { m_lagDurationHasBeenSet = true; m_lagDuration = std::move(value); }

    /**
     * <p>Data replication lag duration.</p>
     */
    inline void SetLagDuration(const char* value) { m_lagDurationHasBeenSet = true; m_lagDuration.assign(value); }

    /**
     * <p>Data replication lag duration.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(const Aws::String& value) { SetLagDuration(value); return *this;}

    /**
     * <p>Data replication lag duration.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(Aws::String&& value) { SetLagDuration(std::move(value)); return *this;}

    /**
     * <p>Data replication lag duration.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithLagDuration(const char* value) { SetLagDuration(value); return *this;}


    /**
     * <p>The disks that should be replicated.</p>
     */
    inline const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline void SetReplicatedDisks(const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = value; }

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline void SetReplicatedDisks(Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::move(value); }

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithReplicatedDisks(const Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& WithReplicatedDisks(Aws::Vector<RecoveryInstanceDataReplicationInfoReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& AddReplicatedDisks(const RecoveryInstanceDataReplicationInfoReplicatedDisk& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(value); return *this; }

    /**
     * <p>The disks that should be replicated.</p>
     */
    inline RecoveryInstanceDataReplicationInfo& AddReplicatedDisks(RecoveryInstanceDataReplicationInfoReplicatedDisk&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace drs
} // namespace Aws
