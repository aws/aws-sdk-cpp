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
#include <aws/keyspaces/model/Tag.h>
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
    AWS_KEYSPACES_API RestoreTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTable"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline const Aws::String& GetSourceKeyspaceName() const{ return m_sourceKeyspaceName; }

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline bool SourceKeyspaceNameHasBeenSet() const { return m_sourceKeyspaceNameHasBeenSet; }

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline void SetSourceKeyspaceName(const Aws::String& value) { m_sourceKeyspaceNameHasBeenSet = true; m_sourceKeyspaceName = value; }

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline void SetSourceKeyspaceName(Aws::String&& value) { m_sourceKeyspaceNameHasBeenSet = true; m_sourceKeyspaceName = std::move(value); }

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline void SetSourceKeyspaceName(const char* value) { m_sourceKeyspaceNameHasBeenSet = true; m_sourceKeyspaceName.assign(value); }

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceKeyspaceName(const Aws::String& value) { SetSourceKeyspaceName(value); return *this;}

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceKeyspaceName(Aws::String&& value) { SetSourceKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The keyspace name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceKeyspaceName(const char* value) { SetSourceKeyspaceName(value); return *this;}


    /**
     * <p>The name of the source table.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }

    /**
     * <p>The name of the source table.</p>
     */
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }

    /**
     * <p>The name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}

    /**
     * <p>The name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the source table.</p>
     */
    inline RestoreTableRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}


    /**
     * <p>The name of the target keyspace.</p>
     */
    inline const Aws::String& GetTargetKeyspaceName() const{ return m_targetKeyspaceName; }

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline bool TargetKeyspaceNameHasBeenSet() const { return m_targetKeyspaceNameHasBeenSet; }

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline void SetTargetKeyspaceName(const Aws::String& value) { m_targetKeyspaceNameHasBeenSet = true; m_targetKeyspaceName = value; }

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline void SetTargetKeyspaceName(Aws::String&& value) { m_targetKeyspaceNameHasBeenSet = true; m_targetKeyspaceName = std::move(value); }

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline void SetTargetKeyspaceName(const char* value) { m_targetKeyspaceNameHasBeenSet = true; m_targetKeyspaceName.assign(value); }

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline RestoreTableRequest& WithTargetKeyspaceName(const Aws::String& value) { SetTargetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline RestoreTableRequest& WithTargetKeyspaceName(Aws::String&& value) { SetTargetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the target keyspace.</p>
     */
    inline RestoreTableRequest& WithTargetKeyspaceName(const char* value) { SetTargetKeyspaceName(value); return *this;}


    /**
     * <p>The name of the target table.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }

    /**
     * <p>The name of the target table.</p>
     */
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }

    /**
     * <p>The name of the target table.</p>
     */
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }

    /**
     * <p>The name of the target table.</p>
     */
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }

    /**
     * <p>The name of the target table.</p>
     */
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }

    /**
     * <p>The name of the target table.</p>
     */
    inline RestoreTableRequest& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}

    /**
     * <p>The name of the target table.</p>
     */
    inline RestoreTableRequest& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the target table.</p>
     */
    inline RestoreTableRequest& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}


    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreTimestamp() const{ return m_restoreTimestamp; }

    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline bool RestoreTimestampHasBeenSet() const { return m_restoreTimestampHasBeenSet; }

    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline void SetRestoreTimestamp(const Aws::Utils::DateTime& value) { m_restoreTimestampHasBeenSet = true; m_restoreTimestamp = value; }

    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline void SetRestoreTimestamp(Aws::Utils::DateTime&& value) { m_restoreTimestampHasBeenSet = true; m_restoreTimestamp = std::move(value); }

    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline RestoreTableRequest& WithRestoreTimestamp(const Aws::Utils::DateTime& value) { SetRestoreTimestamp(value); return *this;}

    /**
     * <p>The restore timestamp in ISO 8601 format.</p>
     */
    inline RestoreTableRequest& WithRestoreTimestamp(Aws::Utils::DateTime&& value) { SetRestoreTimestamp(std::move(value)); return *this;}


    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const CapacitySpecification& GetCapacitySpecificationOverride() const{ return m_capacitySpecificationOverride; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool CapacitySpecificationOverrideHasBeenSet() const { return m_capacitySpecificationOverrideHasBeenSet; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetCapacitySpecificationOverride(const CapacitySpecification& value) { m_capacitySpecificationOverrideHasBeenSet = true; m_capacitySpecificationOverride = value; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetCapacitySpecificationOverride(CapacitySpecification&& value) { m_capacitySpecificationOverrideHasBeenSet = true; m_capacitySpecificationOverride = std::move(value); }

    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithCapacitySpecificationOverride(const CapacitySpecification& value) { SetCapacitySpecificationOverride(value); return *this;}

    /**
     * <p>Specifies the read/write throughput capacity mode for the target table. The
     * options are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithCapacitySpecificationOverride(CapacitySpecification&& value) { SetCapacitySpecificationOverride(std::move(value)); return *this;}


    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const EncryptionSpecification& GetEncryptionSpecificationOverride() const{ return m_encryptionSpecificationOverride; }

    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool EncryptionSpecificationOverrideHasBeenSet() const { return m_encryptionSpecificationOverrideHasBeenSet; }

    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetEncryptionSpecificationOverride(const EncryptionSpecification& value) { m_encryptionSpecificationOverrideHasBeenSet = true; m_encryptionSpecificationOverride = value; }

    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetEncryptionSpecificationOverride(EncryptionSpecification&& value) { m_encryptionSpecificationOverrideHasBeenSet = true; m_encryptionSpecificationOverride = std::move(value); }

    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithEncryptionSpecificationOverride(const EncryptionSpecification& value) { SetEncryptionSpecificationOverride(value); return *this;}

    /**
     * <p>Specifies the encryption settings for the target table. You can choose one of
     * the following KMS key (KMS key):</p> <p>• <code>type:AWS_OWNED_KMS_KEY</code> -
     * This key is owned by Amazon Keyspaces. </p> <p>•
     * <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in your account
     * and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input. </p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithEncryptionSpecificationOverride(EncryptionSpecification&& value) { SetEncryptionSpecificationOverride(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const PointInTimeRecovery& GetPointInTimeRecoveryOverride() const{ return m_pointInTimeRecoveryOverride; }

    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool PointInTimeRecoveryOverrideHasBeenSet() const { return m_pointInTimeRecoveryOverrideHasBeenSet; }

    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetPointInTimeRecoveryOverride(const PointInTimeRecovery& value) { m_pointInTimeRecoveryOverrideHasBeenSet = true; m_pointInTimeRecoveryOverride = value; }

    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetPointInTimeRecoveryOverride(PointInTimeRecovery&& value) { m_pointInTimeRecoveryOverrideHasBeenSet = true; m_pointInTimeRecoveryOverride = std::move(value); }

    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithPointInTimeRecoveryOverride(const PointInTimeRecovery& value) { SetPointInTimeRecoveryOverride(value); return *this;}

    /**
     * <p>Specifies the <code>pointInTimeRecovery</code> settings for the target table.
     * The options are:</p> <p>• <code>ENABLED</code> </p> <p>• <code>DISABLED</code>
     * </p> <p>If it's not specified, the default is <code>DISABLED</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithPointInTimeRecoveryOverride(PointInTimeRecovery&& value) { SetPointInTimeRecoveryOverride(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsOverride() const{ return m_tagsOverride; }

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline bool TagsOverrideHasBeenSet() const { return m_tagsOverrideHasBeenSet; }

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTagsOverride(const Aws::Vector<Tag>& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride = value; }

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTagsOverride(Aws::Vector<Tag>&& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride = std::move(value); }

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithTagsOverride(const Aws::Vector<Tag>& value) { SetTagsOverride(value); return *this;}

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& WithTagsOverride(Aws::Vector<Tag>&& value) { SetTagsOverride(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& AddTagsOverride(const Tag& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride.push_back(value); return *this; }

    /**
     * <p>A list of key-value pair tags to be attached to the restored table. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline RestoreTableRequest& AddTagsOverride(Tag&& value) { m_tagsOverrideHasBeenSet = true; m_tagsOverride.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceKeyspaceName;
    bool m_sourceKeyspaceNameHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_targetKeyspaceName;
    bool m_targetKeyspaceNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTimestamp;
    bool m_restoreTimestampHasBeenSet = false;

    CapacitySpecification m_capacitySpecificationOverride;
    bool m_capacitySpecificationOverrideHasBeenSet = false;

    EncryptionSpecification m_encryptionSpecificationOverride;
    bool m_encryptionSpecificationOverrideHasBeenSet = false;

    PointInTimeRecovery m_pointInTimeRecoveryOverride;
    bool m_pointInTimeRecoveryOverrideHasBeenSet = false;

    Aws::Vector<Tag> m_tagsOverride;
    bool m_tagsOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
