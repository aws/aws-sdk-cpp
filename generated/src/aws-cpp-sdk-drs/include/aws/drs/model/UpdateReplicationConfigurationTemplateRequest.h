/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/drs/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/drs/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/PITPolicyRule.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class UpdateReplicationConfigurationTemplateRequest : public DrsRequest
  {
  public:
    AWS_DRS_API UpdateReplicationConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationConfigurationTemplate"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Source Server in Mbps.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }

    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }

    /**
     * <p>Whether to create a Public IP for the Recovery Instance by default.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline const Aws::Vector<PITPolicyRule>& GetPitPolicy() const{ return m_pitPolicy; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline bool PitPolicyHasBeenSet() const { return m_pitPolicyHasBeenSet; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline void SetPitPolicy(const Aws::Vector<PITPolicyRule>& value) { m_pitPolicyHasBeenSet = true; m_pitPolicy = value; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline void SetPitPolicy(Aws::Vector<PITPolicyRule>&& value) { m_pitPolicyHasBeenSet = true; m_pitPolicy = std::move(value); }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithPitPolicy(const Aws::Vector<PITPolicyRule>& value) { SetPitPolicy(value); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithPitPolicy(Aws::Vector<PITPolicyRule>&& value) { SetPitPolicy(std::move(value)); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddPitPolicy(const PITPolicyRule& value) { m_pitPolicyHasBeenSet = true; m_pitPolicy.push_back(value); return *this; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddPitPolicy(PITPolicyRule&& value) { m_pitPolicyHasBeenSet = true; m_pitPolicy.push_back(std::move(value)); return *this; }


    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const{ return m_replicationConfigurationTemplateID; }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline bool ReplicationConfigurationTemplateIDHasBeenSet() const { return m_replicationConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const Aws::String& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = value; }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(Aws::String&& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = std::move(value); }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const char* value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID.assign(value); }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(const Aws::String& value) { SetReplicationConfigurationTemplateID(value); return *this;}

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(Aws::String&& value) { SetReplicationConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(const char* value) { SetReplicationConfigurationTemplateID(value); return *this;}


    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }

    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }

    /**
     * <p>Whether to use a dedicated Replication Server in the replication staging
     * area.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::Vector<PITPolicyRule> m_pitPolicy;
    bool m_pitPolicyHasBeenSet = false;

    Aws::String m_replicationConfigurationTemplateID;
    bool m_replicationConfigurationTemplateIDHasBeenSet = false;

    Aws::String m_replicationServerInstanceType;
    bool m_replicationServerInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;
    bool m_replicationServersSecurityGroupsIDsHasBeenSet = false;

    Aws::String m_stagingAreaSubnetId;
    bool m_stagingAreaSubnetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;
    bool m_stagingAreaTagsHasBeenSet = false;

    bool m_useDedicatedReplicationServer;
    bool m_useDedicatedReplicationServerHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
