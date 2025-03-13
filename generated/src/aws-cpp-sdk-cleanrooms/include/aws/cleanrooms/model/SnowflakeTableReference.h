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
    AWS_CLEANROOMS_API SnowflakeTableReference() = default;
    AWS_CLEANROOMS_API SnowflakeTableReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SnowflakeTableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The secret ARN of the Snowflake table reference.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    SnowflakeTableReference& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account identifier for the Snowflake table reference.</p>
     */
    inline const Aws::String& GetAccountIdentifier() const { return m_accountIdentifier; }
    inline bool AccountIdentifierHasBeenSet() const { return m_accountIdentifierHasBeenSet; }
    template<typename AccountIdentifierT = Aws::String>
    void SetAccountIdentifier(AccountIdentifierT&& value) { m_accountIdentifierHasBeenSet = true; m_accountIdentifier = std::forward<AccountIdentifierT>(value); }
    template<typename AccountIdentifierT = Aws::String>
    SnowflakeTableReference& WithAccountIdentifier(AccountIdentifierT&& value) { SetAccountIdentifier(std::forward<AccountIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the database the Snowflake table belongs to.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    SnowflakeTableReference& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Snowflake table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    SnowflakeTableReference& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema name of the Snowflake table reference.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SnowflakeTableReference& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the Snowflake table.</p>
     */
    inline const SnowflakeTableSchema& GetTableSchema() const { return m_tableSchema; }
    inline bool TableSchemaHasBeenSet() const { return m_tableSchemaHasBeenSet; }
    template<typename TableSchemaT = SnowflakeTableSchema>
    void SetTableSchema(TableSchemaT&& value) { m_tableSchemaHasBeenSet = true; m_tableSchema = std::forward<TableSchemaT>(value); }
    template<typename TableSchemaT = SnowflakeTableSchema>
    SnowflakeTableReference& WithTableSchema(TableSchemaT&& value) { SetTableSchema(std::forward<TableSchemaT>(value)); return *this;}
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
