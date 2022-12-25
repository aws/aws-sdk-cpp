/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDisk.h>
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
namespace mgn
{
namespace Model
{
  class UpdateReplicationConfigurationResult
  {
  public:
    AWS_MGN_API UpdateReplicationConfigurationResult();
    AWS_MGN_API UpdateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UpdateReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Replication Configuration associate default Application Migration Service
     * Security Group.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Replication Configuration associate default Application Migration Service
     * Security Group.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Replication Configuration associate default Application Migration Service
     * Security Group.</p>
     */
    inline UpdateReplicationConfigurationResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Replication Configuration set bandwidth throttling.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Replication Configuration set bandwidth throttling.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottling = value; }

    /**
     * <p>Replication Configuration set bandwidth throttling.</p>
     */
    inline UpdateReplicationConfigurationResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Replication Configuration create Public IP.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Replication Configuration create Public IP.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIP = value; }

    /**
     * <p>Replication Configuration create Public IP.</p>
     */
    inline UpdateReplicationConfigurationResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRouting = value; }

    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRouting = std::move(value); }

    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskType = value; }

    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline UpdateReplicationConfigurationResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryption = value; }

    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryption = std::move(value); }

    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArn = value; }

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>Replication Configuration name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Replication Configuration name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Replication Configuration name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Replication Configuration name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Replication Configuration name.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Replication Configuration name.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration name.</p>
     */
    inline UpdateReplicationConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline void SetReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { m_replicatedDisks = value; }

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline void SetReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { m_replicatedDisks = std::move(value); }

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicatedDisks(const ReplicationConfigurationReplicatedDisk& value) { m_replicatedDisks.push_back(value); return *this; }

    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicatedDisks(ReplicationConfigurationReplicatedDisk&& value) { m_replicatedDisks.push_back(std::move(value)); return *this; }


    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceType = value; }

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceType.assign(value); }

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline UpdateReplicationConfigurationResult& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetId = value; }

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTags = value; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTags = std::move(value); }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline UpdateReplicationConfigurationResult& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Replication Configuration use Dedicated Replication Server.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Replication Configuration use Dedicated Replication Server.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServer = value; }

    /**
     * <p>Replication Configuration use Dedicated Replication Server.</p>
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

    Aws::Vector<ReplicationConfigurationReplicatedDisk> m_replicatedDisks;

    Aws::String m_replicationServerInstanceType;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;

    Aws::String m_sourceServerID;

    Aws::String m_stagingAreaSubnetId;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;

    bool m_useDedicatedReplicationServer;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
