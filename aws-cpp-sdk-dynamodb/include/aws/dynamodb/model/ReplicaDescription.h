/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexDescription.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains the details of the replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ReplicaDescription
  {
  public:
    ReplicaDescription();
    ReplicaDescription(Aws::Utils::Json::JsonView jsonValue);
    ReplicaDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline ReplicaDescription& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline ReplicaDescription& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline ReplicaDescription& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline const ReplicaStatus& GetReplicaStatus() const{ return m_replicaStatus; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(const ReplicaStatus& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(ReplicaStatus&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::move(value); }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaDescription& WithReplicaStatus(const ReplicaStatus& value) { SetReplicaStatus(value); return *this;}

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaDescription& WithReplicaStatus(ReplicaStatus&& value) { SetReplicaStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline const Aws::String& GetReplicaStatusDescription() const{ return m_replicaStatusDescription; }

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline bool ReplicaStatusDescriptionHasBeenSet() const { return m_replicaStatusDescriptionHasBeenSet; }

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline void SetReplicaStatusDescription(const Aws::String& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = value; }

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline void SetReplicaStatusDescription(Aws::String&& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = std::move(value); }

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline void SetReplicaStatusDescription(const char* value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription.assign(value); }

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline ReplicaDescription& WithReplicaStatusDescription(const Aws::String& value) { SetReplicaStatusDescription(value); return *this;}

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline ReplicaDescription& WithReplicaStatusDescription(Aws::String&& value) { SetReplicaStatusDescription(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline ReplicaDescription& WithReplicaStatusDescription(const char* value) { SetReplicaStatusDescription(value); return *this;}


    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline const Aws::String& GetReplicaStatusPercentProgress() const{ return m_replicaStatusPercentProgress; }

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline bool ReplicaStatusPercentProgressHasBeenSet() const { return m_replicaStatusPercentProgressHasBeenSet; }

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline void SetReplicaStatusPercentProgress(const Aws::String& value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress = value; }

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline void SetReplicaStatusPercentProgress(Aws::String&& value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress = std::move(value); }

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline void SetReplicaStatusPercentProgress(const char* value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress.assign(value); }

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline ReplicaDescription& WithReplicaStatusPercentProgress(const Aws::String& value) { SetReplicaStatusPercentProgress(value); return *this;}

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline ReplicaDescription& WithReplicaStatusPercentProgress(Aws::String&& value) { SetReplicaStatusPercentProgress(std::move(value)); return *this;}

    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline ReplicaDescription& WithReplicaStatusPercentProgress(const char* value) { SetReplicaStatusPercentProgress(value); return *this;}


    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const{ return m_kMSMasterKeyId; }

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline void SetKMSMasterKeyId(const Aws::String& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = value; }

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline void SetKMSMasterKeyId(Aws::String&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::move(value); }

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline void SetKMSMasterKeyId(const char* value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId.assign(value); }

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline ReplicaDescription& WithKMSMasterKeyId(const Aws::String& value) { SetKMSMasterKeyId(value); return *this;}

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline ReplicaDescription& WithKMSMasterKeyId(Aws::String&& value) { SetKMSMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS customer master key (CMK) of the replica that will be used for
     * AWS KMS encryption.</p>
     */
    inline ReplicaDescription& WithKMSMasterKeyId(const char* value) { SetKMSMasterKeyId(value); return *this;}


    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }

    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }

    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }

    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline void SetProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }

    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline ReplicaDescription& WithProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}

    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline ReplicaDescription& WithProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}


    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexDescription>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline ReplicaDescription& WithGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline ReplicaDescription& WithGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexDescription>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline ReplicaDescription& AddGlobalSecondaryIndexes(const ReplicaGlobalSecondaryIndexDescription& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline ReplicaDescription& AddGlobalSecondaryIndexes(ReplicaGlobalSecondaryIndexDescription&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    ReplicaStatus m_replicaStatus;
    bool m_replicaStatusHasBeenSet;

    Aws::String m_replicaStatusDescription;
    bool m_replicaStatusDescriptionHasBeenSet;

    Aws::String m_replicaStatusPercentProgress;
    bool m_replicaStatusPercentProgressHasBeenSet;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet;

    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
