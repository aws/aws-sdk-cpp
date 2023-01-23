/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/SchemaDefinition.h>
#include <aws/keyspaces/model/Comment.h>
#include <aws/keyspaces/model/CapacitySpecification.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/PointInTimeRecovery.h>
#include <aws/keyspaces/model/TimeToLive.h>
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
  class CreateTableRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API CreateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline CreateTableRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline CreateTableRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace that the table is going to be created in.</p>
     */
    inline CreateTableRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline CreateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline CreateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline CreateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline const SchemaDefinition& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline void SetSchemaDefinition(const SchemaDefinition& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline void SetSchemaDefinition(SchemaDefinition&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline CreateTableRequest& WithSchemaDefinition(const SchemaDefinition& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>The <code>schemaDefinition</code> consists of the following parameters.</p>
     * <p>For each column to be created:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cql.elements.html#cql.data-types">Data
     * types</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>The primary key
     * of the table consists of the following columns:</p> <p>•
     * <code>partitionKeys</code> - The partition key can be a single column, or it can
     * be a compound value composed of two or more columns. The partition key portion
     * of the primary key is required and determines how Amazon Keyspaces stores your
     * data.</p> <p>• <code>name</code> - The name of each partition key column.</p>
     * <p>• <code>clusteringKeys</code> - The optional clustering column portion of
     * your primary key determines how the data is clustered and sorted within each
     * partition.</p> <p>• <code>name</code> - The name of the clustering column. </p>
     * <p>• <code>orderBy</code> - Sets the ascendant (<code>ASC</code>) or descendant
     * (<code>DESC</code>) order modifier.</p> <p>To define a column as static use
     * <code>staticColumns</code> - Static columns store values that are shared by all
     * rows in the same partition:</p> <p>• <code>name</code> - The name of the
     * column.</p> <p>• <code>type</code> - An Amazon Keyspaces data type.</p>
     */
    inline CreateTableRequest& WithSchemaDefinition(SchemaDefinition&& value) { SetSchemaDefinition(std::move(value)); return *this;}


    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline void SetComment(const Comment& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline void SetComment(Comment&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline CreateTableRequest& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>This parameter allows to enter a description of the table.</p>
     */
    inline CreateTableRequest& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}


    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const CapacitySpecification& GetCapacitySpecification() const{ return m_capacitySpecification; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool CapacitySpecificationHasBeenSet() const { return m_capacitySpecificationHasBeenSet; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetCapacitySpecification(const CapacitySpecification& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = value; }

    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetCapacitySpecification(CapacitySpecification&& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = std::move(value); }

    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithCapacitySpecification(const CapacitySpecification& value) { SetCapacitySpecification(value); return *this;}

    /**
     * <p>Specifies the read/write throughput capacity mode for the table. The options
     * are:</p> <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithCapacitySpecification(CapacitySpecification&& value) { SetCapacitySpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const EncryptionSpecification& GetEncryptionSpecification() const{ return m_encryptionSpecification; }

    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool EncryptionSpecificationHasBeenSet() const { return m_encryptionSpecificationHasBeenSet; }

    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetEncryptionSpecification(const EncryptionSpecification& value) { m_encryptionSpecificationHasBeenSet = true; m_encryptionSpecification = value; }

    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetEncryptionSpecification(EncryptionSpecification&& value) { m_encryptionSpecificationHasBeenSet = true; m_encryptionSpecification = std::move(value); }

    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithEncryptionSpecification(const EncryptionSpecification& value) { SetEncryptionSpecification(value); return *this;}

    /**
     * <p>Specifies how the encryption key for encryption at rest is managed for the
     * table. You can choose one of the following KMS key (KMS key):</p> <p>•
     * <code>type:AWS_OWNED_KMS_KEY</code> - This key is owned by Amazon Keyspaces.
     * </p> <p>• <code>type:CUSTOMER_MANAGED_KMS_KEY</code> - This key is stored in
     * your account and is created, owned, and managed by you. This option requires the
     * <code>kms_key_identifier</code> of the KMS key in Amazon Resource Name (ARN)
     * format as input.</p> <p>The default is <code>type:AWS_OWNED_KMS_KEY</code>. </p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/EncryptionAtRest.html">Encryption
     * at rest</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithEncryptionSpecification(EncryptionSpecification&& value) { SetEncryptionSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const PointInTimeRecovery& GetPointInTimeRecovery() const{ return m_pointInTimeRecovery; }

    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool PointInTimeRecoveryHasBeenSet() const { return m_pointInTimeRecoveryHasBeenSet; }

    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetPointInTimeRecovery(const PointInTimeRecovery& value) { m_pointInTimeRecoveryHasBeenSet = true; m_pointInTimeRecovery = value; }

    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetPointInTimeRecovery(PointInTimeRecovery&& value) { m_pointInTimeRecoveryHasBeenSet = true; m_pointInTimeRecovery = std::move(value); }

    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithPointInTimeRecovery(const PointInTimeRecovery& value) { SetPointInTimeRecovery(value); return *this;}

    /**
     * <p>Specifies if <code>pointInTimeRecovery</code> is enabled or disabled for the
     * table. The options are:</p> <p>• <code>ENABLED</code> </p> <p>•
     * <code>DISABLED</code> </p> <p>If it's not specified, the default is
     * <code>DISABLED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
     * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithPointInTimeRecovery(PointInTimeRecovery&& value) { SetPointInTimeRecovery(std::move(value)); return *this;}


    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const TimeToLive& GetTtl() const{ return m_ttl; }

    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTtl(const TimeToLive& value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTtl(TimeToLive&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }

    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithTtl(const TimeToLive& value) { SetTtl(value); return *this;}

    /**
     * <p>Enables Time to Live custom settings for the table. The options are:</p> <p>•
     * <code>status:enabled</code> </p> <p>• <code>status:disabled</code> </p> <p>The
     * default is <code>status:disabled</code>. After <code>ttl</code> is enabled, you
     * can't disable it for the table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL.html">Expiring
     * data by using Amazon Keyspaces Time to Live (TTL)</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithTtl(TimeToLive&& value) { SetTtl(std::move(value)); return *this;}


    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline int GetDefaultTimeToLive() const{ return m_defaultTimeToLive; }

    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline bool DefaultTimeToLiveHasBeenSet() const { return m_defaultTimeToLiveHasBeenSet; }

    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline void SetDefaultTimeToLive(int value) { m_defaultTimeToLiveHasBeenSet = true; m_defaultTimeToLive = value; }

    /**
     * <p>The default Time to Live setting in seconds for the table.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_default_ttl">Setting
     * the default TTL value for a table</a> in the <i>Amazon Keyspaces Developer
     * Guide</i>.</p>
     */
    inline CreateTableRequest& WithDefaultTimeToLive(int value) { SetDefaultTimeToLive(value); return *this;}


    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pair tags to be attached to the resource. </p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline CreateTableRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    SchemaDefinition m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;

    Comment m_comment;
    bool m_commentHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
