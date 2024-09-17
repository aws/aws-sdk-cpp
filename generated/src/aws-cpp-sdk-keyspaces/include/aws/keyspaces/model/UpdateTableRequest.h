/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/CapacitySpecification.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/PointInTimeRecovery.h>
#include <aws/keyspaces/model/TimeToLive.h>
#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
#include <aws/keyspaces/model/ColumnDefinition.h>
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
  class UpdateTableRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API UpdateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the keyspace the specified table is stored in.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }
    inline UpdateTableRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline UpdateTableRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For each column to be added to the specified table:</p> <ul> <li> <p>
     * <code>name</code> - The name of the column.</p> </li> <li> <p> <code>type</code>
     * - An Amazon Keyspaces data type. For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> </li> </ul>
     */
    inline const Aws::Vector<ColumnDefinition>& GetAddColumns() const{ return m_addColumns; }
    inline bool AddColumnsHasBeenSet() const { return m_addColumnsHasBeenSet; }
    inline void SetAddColumns(const Aws::Vector<ColumnDefinition>& value) { m_addColumnsHasBeenSet = true; m_addColumns = value; }
    inline void SetAddColumns(Aws::Vector<ColumnDefinition>&& value) { m_addColumnsHasBeenSet = true; m_addColumns = std::move(value); }
    inline UpdateTableRequest& WithAddColumns(const Aws::Vector<ColumnDefinition>& value) { SetAddColumns(value); return *this;}
    inline UpdateTableRequest& WithAddColumns(Aws::Vector<ColumnDefinition>&& value) { SetAddColumns(std::move(value)); return *this;}
    inline UpdateTableRequest& AddAddColumns(const ColumnDefinition& value) { m_addColumnsHasBeenSet = true; m_addColumns.push_back(value); return *this; }
    inline UpdateTableRequest& AddAddColumns(ColumnDefinition&& value) { m_addColumnsHasBeenSet = true; m_addColumns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Modifies the read/write throughput capacity mode for the table. The options
     * are:</p> <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> and </p>
     * </li> <li> <p> <code>throughputMode:PROVISIONED</code> - Provisioned capacity
     * mode requires <code>readCapacityUnits</code> and <code>writeCapacityUnits</code>
     * as input.</p> </li> </ul> <p>The default is
     * <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const CapacitySpecification& GetCapacitySpecification() const{ return m_capacitySpecification; }
    inline bool CapacitySpecificationHasBeenSet() const { return m_capacitySpecificationHasBeenSet; }
    inline void SetCapacitySpecification(const CapacitySpecification& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = value; }
    inline void SetCapacitySpecification(CapacitySpecification&& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = std::move(value); }
    inline UpdateTableRequest& WithCapacitySpecification(const CapacitySpecification& value) { SetCapacitySpecification(value); return *this;}
    inline UpdateTableRequest& WithCapacitySpecification(CapacitySpecification&& value) { SetCapacitySpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the encryption settings of the table. You can choose one of the
     * following KMS key (KMS key):</p> <ul> <li> <p>
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> </li> <li> <p> <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is
     * stored in your account and is created, owned, and managed by you. This option
     * requires the <code>kms_key_identifier</code> of the KMS key in Amazon Resource
     * Name (ARN) format as input. </p> </li> </ul> <p>The default is
     * <code>AWS_OWNED_KMS_KEY</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const EncryptionSpecification& GetEncryptionSpecification() const{ return m_encryptionSpecification; }
    inline bool EncryptionSpecificationHasBeenSet() const { return m_encryptionSpecificationHasBeenSet; }
    inline void SetEncryptionSpecification(const EncryptionSpecification& value) { m_encryptionSpecificationHasBeenSet = true; m_encryptionSpecification = value; }
    inline void SetEncryptionSpecification(EncryptionSpecification&& value) { m_encryptionSpecificationHasBeenSet = true; m_encryptionSpecification = std::move(value); }
    inline UpdateTableRequest& WithEncryptionSpecification(const EncryptionSpecification& value) { SetEncryptionSpecification(value); return *this;}
    inline UpdateTableRequest& WithEncryptionSpecification(EncryptionSpecification&& value) { SetEncryptionSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the <code>pointInTimeRecovery</code> settings of the table. The
     * options are:</p> <ul> <li> <p> <code>status=ENABLED</code> </p> </li> <li> <p>
     * <code>status=DISABLED</code> </p> </li> </ul> <p>If it's not specified, the
     * default is <code>status=DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const PointInTimeRecovery& GetPointInTimeRecovery() const{ return m_pointInTimeRecovery; }
    inline bool PointInTimeRecoveryHasBeenSet() const { return m_pointInTimeRecoveryHasBeenSet; }
    inline void SetPointInTimeRecovery(const PointInTimeRecovery& value) { m_pointInTimeRecoveryHasBeenSet = true; m_pointInTimeRecovery = value; }
    inline void SetPointInTimeRecovery(PointInTimeRecovery&& value) { m_pointInTimeRecoveryHasBeenSet = true; m_pointInTimeRecovery = std::move(value); }
    inline UpdateTableRequest& WithPointInTimeRecovery(const PointInTimeRecovery& value) { SetPointInTimeRecovery(value); return *this;}
    inline UpdateTableRequest& WithPointInTimeRecovery(PointInTimeRecovery&& value) { SetPointInTimeRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies Time to Live custom settings for the table. The options are:</p>
     * <ul> <li> <p> <code>status:enabled</code> </p> </li> <li> <p>
     * <code>status:disabled</code> </p> </li> </ul> <p>The default is
     * <code>status:disabled</code>. After <code>ttl</code> is enabled, you can't
     * disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const TimeToLive& GetTtl() const{ return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(const TimeToLive& value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline void SetTtl(TimeToLive&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }
    inline UpdateTableRequest& WithTtl(const TimeToLive& value) { SetTtl(value); return *this;}
    inline UpdateTableRequest& WithTtl(TimeToLive&& value) { SetTtl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline int GetDefaultTimeToLive() const{ return m_defaultTimeToLive; }
    inline bool DefaultTimeToLiveHasBeenSet() const { return m_defaultTimeToLiveHasBeenSet; }
    inline void SetDefaultTimeToLive(int value) { m_defaultTimeToLiveHasBeenSet = true; m_defaultTimeToLive = value; }
    inline UpdateTableRequest& WithDefaultTimeToLive(int value) { SetDefaultTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables client-side timestamps for the table. By default, the setting is
     * disabled. You can enable client-side timestamps with the following option:</p>
     * <ul> <li> <p> <code>status: "enabled"</code> </p> </li> </ul> <p>Once
     * client-side timestamps are enabled for a table, this setting cannot be
     * disabled.</p>
     */
    inline const ClientSideTimestamps& GetClientSideTimestamps() const{ return m_clientSideTimestamps; }
    inline bool ClientSideTimestampsHasBeenSet() const { return m_clientSideTimestampsHasBeenSet; }
    inline void SetClientSideTimestamps(const ClientSideTimestamps& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = value; }
    inline void SetClientSideTimestamps(ClientSideTimestamps&& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = std::move(value); }
    inline UpdateTableRequest& WithClientSideTimestamps(const ClientSideTimestamps& value) { SetClientSideTimestamps(value); return *this;}
    inline UpdateTableRequest& WithClientSideTimestamps(ClientSideTimestamps&& value) { SetClientSideTimestamps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional auto scaling settings to update for a table in provisioned
     * capacity mode. Specifies if the service can manage throughput capacity of a
     * provisioned table automatically on your behalf. Amazon Keyspaces auto scaling
     * helps you provision throughput capacity for variable workloads efficiently by
     * increasing and decreasing your table's read and write capacity automatically in
     * response to application traffic.</p> <p>If auto scaling is already enabled for
     * the table, you can use <code>UpdateTable</code> to update the minimum and
     * maximum values or the auto scaling policy settings independently.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/autoscaling.html">Managing
     * throughput capacity automatically with Amazon Keyspaces auto scaling</a> in the
     * <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const{ return m_autoScalingSpecification; }
    inline bool AutoScalingSpecificationHasBeenSet() const { return m_autoScalingSpecificationHasBeenSet; }
    inline void SetAutoScalingSpecification(const AutoScalingSpecification& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = value; }
    inline void SetAutoScalingSpecification(AutoScalingSpecification&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::move(value); }
    inline UpdateTableRequest& WithAutoScalingSpecification(const AutoScalingSpecification& value) { SetAutoScalingSpecification(value); return *this;}
    inline UpdateTableRequest& WithAutoScalingSpecification(AutoScalingSpecification&& value) { SetAutoScalingSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region specific settings of a multi-Regional table.</p>
     */
    inline const Aws::Vector<ReplicaSpecification>& GetReplicaSpecifications() const{ return m_replicaSpecifications; }
    inline bool ReplicaSpecificationsHasBeenSet() const { return m_replicaSpecificationsHasBeenSet; }
    inline void SetReplicaSpecifications(const Aws::Vector<ReplicaSpecification>& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications = value; }
    inline void SetReplicaSpecifications(Aws::Vector<ReplicaSpecification>&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications = std::move(value); }
    inline UpdateTableRequest& WithReplicaSpecifications(const Aws::Vector<ReplicaSpecification>& value) { SetReplicaSpecifications(value); return *this;}
    inline UpdateTableRequest& WithReplicaSpecifications(Aws::Vector<ReplicaSpecification>&& value) { SetReplicaSpecifications(std::move(value)); return *this;}
    inline UpdateTableRequest& AddReplicaSpecifications(const ReplicaSpecification& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications.push_back(value); return *this; }
    inline UpdateTableRequest& AddReplicaSpecifications(ReplicaSpecification&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<ColumnDefinition> m_addColumns;
    bool m_addColumnsHasBeenSet = false;

    CapacitySpecification m_capacitySpecification;
    bool m_capacitySpecificationHasBeenSet = false;

    EncryptionSpecification m_encryptionSpecification;
    bool m_encryptionSpecificationHasBeenSet = false;

    PointInTimeRecovery m_pointInTimeRecovery;
    bool m_pointInTimeRecoveryHasBeenSet = false;

    TimeToLive m_ttl;
    bool m_ttlHasBeenSet = false;

    int m_defaultTimeToLive;
    bool m_defaultTimeToLiveHasBeenSet = false;

    ClientSideTimestamps m_clientSideTimestamps;
    bool m_clientSideTimestampsHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;

    Aws::Vector<ReplicaSpecification> m_replicaSpecifications;
    bool m_replicaSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
