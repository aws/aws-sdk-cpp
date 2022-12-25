/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
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
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateReplicationConfigurationRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateReplicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationConfiguration"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }

    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }

    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }

    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }

    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }

    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }

    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }

    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }

    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }

    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }

    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }

    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }

    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }

    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>Update replication configuration name request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration name request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline void SetReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = value; }

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline void SetReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::move(value); }

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddReplicatedDisks(const ReplicationConfigurationReplicatedDisk& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(value); return *this; }

    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddReplicatedDisks(ReplicationConfigurationReplicatedDisk&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(std::move(value)); return *this; }


    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }

    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }

    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline UpdateReplicationConfigurationRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

  private:

    bool m_associateDefaultSecurityGroup;
    bool m_associateDefaultSecurityGroupHasBeenSet = false;

    long long m_bandwidthThrottling;
    bool m_bandwidthThrottlingHasBeenSet = false;

    bool m_createPublicIP;
    bool m_createPublicIPHasBeenSet = false;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting;
    bool m_dataPlaneRoutingHasBeenSet = false;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType;
    bool m_defaultLargeStagingDiskTypeHasBeenSet = false;

    ReplicationConfigurationEbsEncryption m_ebsEncryption;
    bool m_ebsEncryptionHasBeenSet = false;

    Aws::String m_ebsEncryptionKeyArn;
    bool m_ebsEncryptionKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ReplicationConfigurationReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;

    Aws::String m_replicationServerInstanceType;
    bool m_replicationServerInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;
    bool m_replicationServersSecurityGroupsIDsHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_stagingAreaSubnetId;
    bool m_stagingAreaSubnetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;
    bool m_stagingAreaTagsHasBeenSet = false;

    bool m_useDedicatedReplicationServer;
    bool m_useDedicatedReplicationServerHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
