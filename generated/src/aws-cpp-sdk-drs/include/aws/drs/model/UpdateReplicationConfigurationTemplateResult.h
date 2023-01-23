/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
  class UpdateReplicationConfigurationTemplateResult
  {
  public:
    AWS_DRS_API UpdateReplicationConfigurationTemplateResult();
    AWS_DRS_API UpdateReplicationConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API UpdateReplicationConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Replication Configuration Template ARN.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Whether to associate the default Elastic Disaster Recovery Security group
     * with the Replication Configuration Template.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>The data plane routing mechanism that will be used for replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>The type of EBS encryption to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the EBS encryption key to be used during replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithPitPolicy(const Aws::Vector<PITPolicyRule>& value) { SetPitPolicy(value); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithPitPolicy(Aws::Vector<PITPolicyRule>&& value) { SetPitPolicy(std::move(value)); return *this;}

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddPitPolicy(const PITPolicyRule& value) { m_pitPolicy.push_back(value); return *this; }

    /**
     * <p>The Point in time (PIT) policy to manage snapshots taken during
     * replication.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddPitPolicy(PITPolicyRule&& value) { m_pitPolicy.push_back(std::move(value)); return *this; }


    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const{ return m_replicationConfigurationTemplateID; }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const Aws::String& value) { m_replicationConfigurationTemplateID = value; }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(Aws::String&& value) { m_replicationConfigurationTemplateID = std::move(value); }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const char* value) { m_replicationConfigurationTemplateID.assign(value); }

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(const Aws::String& value) { SetReplicationConfigurationTemplateID(value); return *this;}

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(Aws::String&& value) { SetReplicationConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>The Replication Configuration Template ID.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(const char* value) { SetReplicationConfigurationTemplateID(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to be used for the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs that will be used by the replication server.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


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
    inline UpdateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet to be used by the replication staging area.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


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
    inline UpdateReplicationConfigurationTemplateResult& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with all resources created in the replication
     * staging area: EC2 replication server, EBS volumes, EBS snapshots, etc.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags to be associated with the Replication Configuration Template
     * resource.</p>
     */
    inline UpdateReplicationConfigurationTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline UpdateReplicationConfigurationTemplateResult& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

  private:

    Aws::String m_arn;

    bool m_associateDefaultSecurityGroup;

    long long m_bandwidthThrottling;

    bool m_createPublicIP;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType;

    ReplicationConfigurationEbsEncryption m_ebsEncryption;

    Aws::String m_ebsEncryptionKeyArn;

    Aws::Vector<PITPolicyRule> m_pitPolicy;

    Aws::String m_replicationConfigurationTemplateID;

    Aws::String m_replicationServerInstanceType;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;

    Aws::String m_stagingAreaSubnetId;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;

    Aws::Map<Aws::String, Aws::String> m_tags;

    bool m_useDedicatedReplicationServer;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
