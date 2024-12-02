/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/SnowflakeTableSchema.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> A reference to a table within Snowflake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SnowflakeTableReference">AWS
   * API Reference</a></p>
   */
  class SnowflakeTableReference
  {
  public:
    AWS_CLEANROOMS_API SnowflakeTableReference();
    AWS_CLEANROOMS_API SnowflakeTableReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SnowflakeTableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The secret ARN of the Snowflake table reference.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline SnowflakeTableReference& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline SnowflakeTableReference& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline SnowflakeTableReference& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account identifier for the Snowflake table reference.</p>
     */
    inline const Aws::String& GetAccountIdentifier() const{ return m_accountIdentifier; }
    inline bool AccountIdentifierHasBeenSet() const { return m_accountIdentifierHasBeenSet; }
    inline void SetAccountIdentifier(const Aws::String& value) { m_accountIdentifierHasBeenSet = true; m_accountIdentifier = value; }
    inline void SetAccountIdentifier(Aws::String&& value) { m_accountIdentifierHasBeenSet = true; m_accountIdentifier = std::move(value); }
    inline void SetAccountIdentifier(const char* value) { m_accountIdentifierHasBeenSet = true; m_accountIdentifier.assign(value); }
    inline SnowflakeTableReference& WithAccountIdentifier(const Aws::String& value) { SetAccountIdentifier(value); return *this;}
    inline SnowflakeTableReference& WithAccountIdentifier(Aws::String&& value) { SetAccountIdentifier(std::move(value)); return *this;}
    inline SnowflakeTableReference& WithAccountIdentifier(const char* value) { SetAccountIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the database the Snowflake table belongs to.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline SnowflakeTableReference& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline SnowflakeTableReference& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline SnowflakeTableReference& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Snowflake table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline SnowflakeTableReference& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline SnowflakeTableReference& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline SnowflakeTableReference& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema name of the Snowflake table reference.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline SnowflakeTableReference& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline SnowflakeTableReference& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline SnowflakeTableReference& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the Snowflake table.</p>
     */
    inline const SnowflakeTableSchema& GetTableSchema() const{ return m_tableSchema; }
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }
    inline void SetTableSchema(const SnowflakeTableSchema& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = value; }
    inline void SetTableSchema(SnowflakeTableSchema&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::move(value); }
    inline SnowflakeTableReference& WithTableSchema(const SnowflakeTableSchema& value) { SetTableSchema(value); return *this;}
    inline SnowflakeTableReference& WithTableSchema(SnowflakeTableSchema&& value) { SetTableSchema(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_accountIdentifier;
    bool m_accountIdentifierHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    SnowflakeTableSchema m_tableSchema;
    bool m_tableSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
