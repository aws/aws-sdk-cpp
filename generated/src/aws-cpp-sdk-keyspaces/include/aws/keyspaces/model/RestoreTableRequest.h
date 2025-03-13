/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/keyspaces/model/CapacitySpecification.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/PointInTimeRecovery.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
#include <aws/keyspaces/model/Tag.h>
#include <aws/keyspaces/model/ReplicaSpecification.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class RestoreTableRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API RestoreTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTable"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline const Aws::String& GetSourceKeyspaceName() const { return m_sourceKeyspaceName; }
    inline bool SourceKeyspaceNameHasBeenSet() const { return m_sourceKeyspaceNameHasBeenSet; }
    template<typename SourceKeyspaceNameT = Aws::String>
    void SetSourceKeyspaceName(SourceKeyspaceNameT&& value) { m_sourceKeyspaceNameHasBeenSet = true; m_sourceKeyspaceName = std::forward<SourceKeyspaceNameT>(value); }
    template<typename SourceKeyspaceNameT = Aws::String>
    RestoreTableRequest& WithSourceKeyspaceName(SourceKeyspaceNameT&& value) { SetSourceKeyspaceName(std::forward<SourceKeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source table.</p>
     */
    inline const Aws::String& GetSourceTableName() const { return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    template<typename SourceTableNameT = Aws::String>
    void SetSourceTableName(SourceTableNameT&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::forward<SourceTableNameT>(value); }
    template<typename SourceTableNameT = Aws::String>
    RestoreTableRequest& WithSourceTableName(SourceTableNameT&& value) { SetSourceTableName(std::forward<SourceTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target keyspace.</p>
     */
    inline const Aws::String& GetTargetKeyspaceName() const { return m_targetKeyspaceName; }
    inline bool TargetKeyspaceNameHasBeenSet() const { return m_targetKeyspaceNameHasBeenSet; }
    template<typename TargetKeyspaceNameT = Aws::String>
    void SetTargetKeyspaceName(TargetKeyspaceNameT&& value) { m_targetKeyspaceNameHasBeenSet = true; m_targetKeyspaceName = std::forward<TargetKeyspaceNameT>(value); }
    template<typename TargetKeyspaceNameT = Aws::String>
    RestoreTableRequest& WithTargetKeyspaceName(TargetKeyspaceNameT&& value) { SetTargetKeyspaceName(std::forward<TargetKeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target table.</p>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    RestoreTableRequest& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreTimestamp() const { return m_restoreTimestamp; }
    inline bool RestoreTimestampHasBeenSet() const { return m_restoreTimestampHasBeenSet; }
    template<typename RestoreTimestampT = Aws::Utils::DateTime>
    void SetRestoreTimestamp(RestoreTimestampT&& value) { m_restoreTimestampHasBeenSet = true; m_restoreTimestamp = std::forward<RestoreTimestampT>(value); }
    template<typename RestoreTimestampT = Aws::Utils::DateTime>
    RestoreTableRequest& WithRestoreTimestamp(RestoreTimestampT&& value) { SetRestoreTimestamp(std::forward<RestoreTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p>
     * </li> <li> <p> <code>throughputMode:PROVISIONED</code> - Provisioned capacity
     * mode requires <code>readCapacityUnits</code> and <code>writeCapacityUnits</code>
     * as input.</p> </li> </ul> <p>The default is
     * <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const CapacitySpecification& GetCapacitySpecificationOverride() const { return m_capacitySpecificationOverride; }
    inline bool CapacitySpecificationOverrideHasBeenSet() const { return m_capacitySpecificationOverrideHasBeenSet; }
    template<typename CapacitySpecificationOverrideT = CapacitySpecification>
    void SetCapacitySpecificationOverride(CapacitySpecificationOverrideT&& value) { m_capacitySpecificationOverrideHasBeenSet = true; m_capacitySpecificationOverride = std::forward<CapacitySpecificationOverrideT>(value); }
    template<typename CapacitySpecificationOverrideT = CapacitySpecification>
    RestoreTableRequest& WithCapacitySpecificationOverride(CapacitySpecificationOverrideT&& value) { SetCapacitySpecificationOverride(std::forward<CapacitySpecificationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <ul> <li> <p>
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> </li> <li> <p> <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is
     * stored in your account and is created, owned, and managed by you. This option
     * requires the <code>kms_key_identifier</code> of the KMS key in Amazon Resource
     * Name (ARN) format as input. </p> </li> </ul> <p>The default is
     * <code>type:AWS_OWNED_KMS_KEY</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const EncryptionSpecification& GetEncryptionSpecificationOverride() const { return m_encryptionSpecificationOverride; }
    inline bool EncryptionSpecificationOverrideHasBeenSet() const { return m_encryptionSpecificationOverrideHasBeenSet; }
    template<typename EncryptionSpecificationOverrideT = EncryptionSpecification>
    void SetEncryptionSpecificationOverride(EncryptionSpecificationOverrideT&& value) { m_encryptionSpecificationOverrideHasBeenSet = true; m_encryptionSpecificationOverride = std::forward<EncryptionSpecificationOverrideT>(value); }
    template<typename EncryptionSpecificationOverrideT = EncryptionSpecification>
    RestoreTableRequest& WithEncryptionSpecificationOverride(EncryptionSpecificationOverrideT&& value) { SetEncryptionSpecificationOverride(std::forward<EncryptionSpecificationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <ul> <li> <p> <code>status=ENABLED</code> </p> </li> <li>
     * <p> <code>status=DISABLED</code> </p> </li> </ul> <p>If it's not specified, the
     * default is <code>status=DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const PointInTimeRecovery& GetPointInTimeRecoveryOverride() const { return m_pointInTimeRecoveryOverride; }
    inline bool PointInTimeRecoveryOverrideHasBeenSet() const { return m_pointInTimeRecoveryOverrideHasBeenSet; }
    template<typename PointInTimeRecoveryOverrideT = PointInTimeRecovery>
    void SetPointInTimeRecoveryOverride(PointInTimeRecoveryOverrideT&& value) { m_pointInTimeRecoveryOverrideHasBeenSet = true; m_pointInTimeRecoveryOverride = std::forward<PointInTimeRecoveryOverrideT>(value); }
    template<typename PointInTimeRecoveryOverrideT = PointInTimeRecovery>
    RestoreTableRequest& WithPointInTimeRecoveryOverride(PointInTimeRecoveryOverrideT&& value) { SetPointInTimeRecoveryOverride(std::forward<PointInTimeRecoveryOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsOverride() const { return m_tagsOverride; }
    inline bool TagsOverrideHasBeenSet() const { return m_tagsOverrideHasBeenSet; }
    template<typename TagsOverrideT = Aws::Vector<Tag>>
    void SetTagsOverride(TagsOverrideT&& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride = std::forward<TagsOverrideT>(value); }
    template<typename TagsOverrideT = Aws::Vector<Tag>>
    RestoreTableRequest& WithTagsOverride(TagsOverrideT&& value) { SetTagsOverride(std::forward<TagsOverrideT>(value)); return *this;}
    template<typename TagsOverrideT = Tag>
    RestoreTableRequest& AddTagsOverride(TagsOverrideT&& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride.emplace_back(std::forward<TagsOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The optional auto scaling settings for the restored table in provisioned
     * capacity mode. Specifies if the service can manage throughput capacity of a
     * provisioned table automatically on your behalf. Amazon Keyspaces auto scaling
     * helps you provision throughput capacity for variable workloads efficiently by
     * increasing and decreasing your table's read and write capacity automatically in
     * response to application traffic.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/autoscaling.html">Managing
     * throughput capacity automatically with Amazon Keyspaces auto scaling</a> in the
     * <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const { return m_autoScalingSpecification; }
    inline bool AutoScalingSpecificationHasBeenSet() const { return m_autoScalingSpecificationHasBeenSet; }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    void SetAutoScalingSpecification(AutoScalingSpecificationT&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::forward<AutoScalingSpecificationT>(value); }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    RestoreTableRequest& WithAutoScalingSpecification(AutoScalingSpecificationT&& value) { SetAutoScalingSpecification(std::forward<AutoScalingSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional Region specific settings of a multi-Regional table.</p>
     */
    inline const Aws::Vector<ReplicaSpecification>& GetReplicaSpecifications() const { return m_replicaSpecifications; }
    inline bool ReplicaSpecificationsHasBeenSet() const { return m_replicaSpecificationsHasBeenSet; }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecification>>
    void SetReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications = std::forward<ReplicaSpecificationsT>(value); }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecification>>
    RestoreTableRequest& WithReplicaSpecifications(ReplicaSpecificationsT&& value) { SetReplicaSpecifications(std::forward<ReplicaSpecificationsT>(value)); return *this;}
    template<typename ReplicaSpecificationsT = ReplicaSpecification>
    RestoreTableRequest& AddReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications.emplace_back(std::forward<ReplicaSpecificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceKeyspaceName;
    bool m_sourceKeyspaceNameHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_targetKeyspaceName;
    bool m_targetKeyspaceNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTimestamp{};
    bool m_restoreTimestampHasBeenSet = false;

    CapacitySpecification m_capacitySpecificationOverride;
    bool m_capacitySpecificationOverrideHasBeenSet = false;

    EncryptionSpecification m_encryptionSpecificationOverride;
    bool m_encryptionSpecificationOverrideHasBeenSet = false;

    PointInTimeRecovery m_pointInTimeRecoveryOverride;
    bool m_pointInTimeRecoveryOverrideHasBeenSet = false;

    Aws::Vector<Tag> m_tagsOverride;
    bool m_tagsOverrideHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;

    Aws::Vector<ReplicaSpecification> m_replicaSpecifications;
    bool m_replicaSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
