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
#include <aws/keyspaces/model/CdcSpecification.h>
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
    AWS_KEYSPACES_API UpdateTableRequest() = default;

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
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    UpdateTableRequest& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateTableRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For each column to be added to the specified table:</p> <ul> <li> <p>
     * <code>name</code> - The name of the column.</p> </li> <li> <p> <code>type</code>
     * - An Amazon Keyspaces data type. For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> </li> </ul>
     */
    inline const Aws::Vector<ColumnDefinition>& GetAddColumns() const { return m_addColumns; }
    inline bool AddColumnsHasBeenSet() const { return m_addColumnsHasBeenSet; }
    template<typename AddColumnsT = Aws::Vector<ColumnDefinition>>
    void SetAddColumns(AddColumnsT&& value) { m_addColumnsHasBeenSet = true; m_addColumns = std::forward<AddColumnsT>(value); }
    template<typename AddColumnsT = Aws::Vector<ColumnDefinition>>
    UpdateTableRequest& WithAddColumns(AddColumnsT&& value) { SetAddColumns(std::forward<AddColumnsT>(value)); return *this;}
    template<typename AddColumnsT = ColumnDefinition>
    UpdateTableRequest& AddAddColumns(AddColumnsT&& value) { m_addColumnsHasBeenSet = true; m_addColumns.emplace_back(std::forward<AddColumnsT>(value)); return *this; }
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
    inline const CapacitySpecification& GetCapacitySpecification() const { return m_capacitySpecification; }
    inline bool CapacitySpecificationHasBeenSet() const { return m_capacitySpecificationHasBeenSet; }
    template<typename CapacitySpecificationT = CapacitySpecification>
    void SetCapacitySpecification(CapacitySpecificationT&& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = std::forward<CapacitySpecificationT>(value); }
    template<typename CapacitySpecificationT = CapacitySpecification>
    UpdateTableRequest& WithCapacitySpecification(CapacitySpecificationT&& value) { SetCapacitySpecification(std::forward<CapacitySpecificationT>(value)); return *this;}
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
    inline const EncryptionSpecification& GetEncryptionSpecification() const { return m_encryptionSpecification; }
    inline bool EncryptionSpecificationHasBeenSet() const { return m_encryptionSpecificationHasBeenSet; }
    template<typename EncryptionSpecificationT = EncryptionSpecification>
    void SetEncryptionSpecification(EncryptionSpecificationT&& value) { m_encryptionSpecificationHasBeenSet = true; m_encryptionSpecification = std::forward<EncryptionSpecificationT>(value); }
    template<typename EncryptionSpecificationT = EncryptionSpecification>
    UpdateTableRequest& WithEncryptionSpecification(EncryptionSpecificationT&& value) { SetEncryptionSpecification(std::forward<EncryptionSpecificationT>(value)); return *this;}
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
    inline const PointInTimeRecovery& GetPointInTimeRecovery() const { return m_pointInTimeRecovery; }
    inline bool PointInTimeRecoveryHasBeenSet() const { return m_pointInTimeRecoveryHasBeenSet; }
    template<typename PointInTimeRecoveryT = PointInTimeRecovery>
    void SetPointInTimeRecovery(PointInTimeRecoveryT&& value) { m_pointInTimeRecoveryHasBeenSet = true; m_pointInTimeRecovery = std::forward<PointInTimeRecoveryT>(value); }
    template<typename PointInTimeRecoveryT = PointInTimeRecovery>
    UpdateTableRequest& WithPointInTimeRecovery(PointInTimeRecoveryT&& value) { SetPointInTimeRecovery(std::forward<PointInTimeRecoveryT>(value)); return *this;}
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
    inline const TimeToLive& GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    template<typename TtlT = TimeToLive>
    void SetTtl(TtlT&& value) { m_ttlHasBeenSet = true; m_ttl = std::forward<TtlT>(value); }
    template<typename TtlT = TimeToLive>
    UpdateTableRequest& WithTtl(TtlT&& value) { SetTtl(std::forward<TtlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline int GetDefaultTimeToLive() const { return m_defaultTimeToLive; }
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
    inline const ClientSideTimestamps& GetClientSideTimestamps() const { return m_clientSideTimestamps; }
    inline bool ClientSideTimestampsHasBeenSet() const { return m_clientSideTimestampsHasBeenSet; }
    template<typename ClientSideTimestampsT = ClientSideTimestamps>
    void SetClientSideTimestamps(ClientSideTimestampsT&& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = std::forward<ClientSideTimestampsT>(value); }
    template<typename ClientSideTimestampsT = ClientSideTimestamps>
    UpdateTableRequest& WithClientSideTimestamps(ClientSideTimestampsT&& value) { SetClientSideTimestamps(std::forward<ClientSideTimestampsT>(value)); return *this;}
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
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const { return m_autoScalingSpecification; }
    inline bool AutoScalingSpecificationHasBeenSet() const { return m_autoScalingSpecificationHasBeenSet; }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    void SetAutoScalingSpecification(AutoScalingSpecificationT&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::forward<AutoScalingSpecificationT>(value); }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    UpdateTableRequest& WithAutoScalingSpecification(AutoScalingSpecificationT&& value) { SetAutoScalingSpecification(std::forward<AutoScalingSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region specific settings of a multi-Regional table.</p>
     */
    inline const Aws::Vector<ReplicaSpecification>& GetReplicaSpecifications() const { return m_replicaSpecifications; }
    inline bool ReplicaSpecificationsHasBeenSet() const { return m_replicaSpecificationsHasBeenSet; }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecification>>
    void SetReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications = std::forward<ReplicaSpecificationsT>(value); }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecification>>
    UpdateTableRequest& WithReplicaSpecifications(ReplicaSpecificationsT&& value) { SetReplicaSpecifications(std::forward<ReplicaSpecificationsT>(value)); return *this;}
    template<typename ReplicaSpecificationsT = ReplicaSpecification>
    UpdateTableRequest& AddReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications.emplace_back(std::forward<ReplicaSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CDC stream settings of the table.</p>
     */
    inline const CdcSpecification& GetCdcSpecification() const { return m_cdcSpecification; }
    inline bool CdcSpecificationHasBeenSet() const { return m_cdcSpecificationHasBeenSet; }
    template<typename CdcSpecificationT = CdcSpecification>
    void SetCdcSpecification(CdcSpecificationT&& value) { m_cdcSpecificationHasBeenSet = true; m_cdcSpecification = std::forward<CdcSpecificationT>(value); }
    template<typename CdcSpecificationT = CdcSpecification>
    UpdateTableRequest& WithCdcSpecification(CdcSpecificationT&& value) { SetCdcSpecification(std::forward<CdcSpecificationT>(value)); return *this;}
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

    int m_defaultTimeToLive{0};
    bool m_defaultTimeToLiveHasBeenSet = false;

    ClientSideTimestamps m_clientSideTimestamps;
    bool m_clientSideTimestampsHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;

    Aws::Vector<ReplicaSpecification> m_replicaSpecifications;
    bool m_replicaSpecificationsHasBeenSet = false;

    CdcSpecification m_cdcSpecification;
    bool m_cdcSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
