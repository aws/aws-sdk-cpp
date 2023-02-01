/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/drs/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/drs/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/PITPolicyRule.h>
#include <aws/drs/model/ReplicationConfigurationReplicatedDisk.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{
  class UpdateReplicationConfigurationResult
  {
  public:
    AWS_DRS_API UpdateReplicationConfigurationResult();
    AWS_DRS_API UpdateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API UpdateReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottling = value; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline UpdateReplicationConfigurationResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIP = value; }

    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline UpdateReplicationConfigurationResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRouting = value; }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRouting = std::move(value); }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskType = value; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryption = value; }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryption = std::move(value); }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArn = value; }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline const Aws::Vector<PITPolicyRule>& GetPitPolicy() const{ return m_pitPolicy; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline void SetPitPolicy(const Aws::Vector<PITPolicyRule>& value) { m_pitPolicy = value; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline void SetPitPolicy(Aws::Vector<PITPolicyRule>&& value) { m_pitPolicy = std::move(value); }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithPitPolicy(const Aws::Vector<PITPolicyRule>& value) { SetPitPolicy(value); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationResult& WithPitPolicy(Aws::Vector<PITPolicyRule>&& value) { SetPitPolicy(std::move(value)); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationResult& AddPitPolicy(const PITPolicyRule& value) { m_pitPolicy.push_back(value); return *this; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationResult& AddPitPolicy(PITPolicyRule&& value) { m_pitPolicy.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline void SetReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { m_replicatedDisks = value; }

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline void SetReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { m_replicatedDisks = std::move(value); }

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicatedDisks(const ReplicationConfigurationReplicatedDisk& value) { m_replicatedDisks.push_back(value); return *this; }

    /**
     * <p>The configuration of the disks of the Source Server to be replicated.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicatedDisks(ReplicationConfigurationReplicatedDisk&& value) { m_replicatedDisks.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceType = value; }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceType.assign(value); }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Source Server for this Replication Configuration.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetId = value; }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTags = value; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTags = std::move(value); }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServer = value; }

    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline UpdateReplicationConfigurationResult& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

  private:

    bool m_associateDefaultSecurityGroup;

    long long m_bandwidthThrottling;

    bool m_createPublicIP;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType;

    ReplicationConfigurationEbsEncryption m_ebsEncryption;

    Aws::String m_ebsEncryptionKeyArn;

    Aws::String m_name;

    Aws::Vector<PITPolicyRule> m_pitPolicy;

    Aws::Vector<ReplicationConfigurationReplicatedDisk> m_replicatedDisks;

    Aws::String m_replicationServerInstanceType;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;

    Aws::String m_sourceServerID;

    Aws::String m_stagingAreaSubnetId;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;

    bool m_useDedicatedReplicationServer;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
