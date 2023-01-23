/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DatabaseEngineType.h>
#include <aws/kendra/model/ConnectionConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/ColumnConfiguration.h>
#include <aws/kendra/model/AclConfiguration.h>
#include <aws/kendra/model/SqlConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to a index. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DatabaseConfiguration">AWS
   * API Reference</a></p>
   */
  class DatabaseConfiguration
  {
  public:
    AWS_KENDRA_API DatabaseConfiguration();
    AWS_KENDRA_API DatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline const DatabaseEngineType& GetDatabaseEngineType() const{ return m_databaseEngineType; }

    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline bool DatabaseEngineTypeHasBeenSet() const { return m_databaseEngineTypeHasBeenSet; }

    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline void SetDatabaseEngineType(const DatabaseEngineType& value) { m_databaseEngineTypeHasBeenSet = true; m_databaseEngineType = value; }

    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline void SetDatabaseEngineType(DatabaseEngineType&& value) { m_databaseEngineTypeHasBeenSet = true; m_databaseEngineType = std::move(value); }

    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline DatabaseConfiguration& WithDatabaseEngineType(const DatabaseEngineType& value) { SetDatabaseEngineType(value); return *this;}

    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline DatabaseConfiguration& WithDatabaseEngineType(DatabaseEngineType&& value) { SetDatabaseEngineType(std::move(value)); return *this;}


    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline const ConnectionConfiguration& GetConnectionConfiguration() const{ return m_connectionConfiguration; }

    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline bool ConnectionConfigurationHasBeenSet() const { return m_connectionConfigurationHasBeenSet; }

    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline void SetConnectionConfiguration(const ConnectionConfiguration& value) { m_connectionConfigurationHasBeenSet = true; m_connectionConfiguration = value; }

    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline void SetConnectionConfiguration(ConnectionConfiguration&& value) { m_connectionConfigurationHasBeenSet = true; m_connectionConfiguration = std::move(value); }

    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline DatabaseConfiguration& WithConnectionConfiguration(const ConnectionConfiguration& value) { SetConnectionConfiguration(value); return *this;}

    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline DatabaseConfiguration& WithConnectionConfiguration(ConnectionConfiguration&& value) { SetConnectionConfiguration(std::move(value)); return *this;}


    
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline DatabaseConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline DatabaseConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline const ColumnConfiguration& GetColumnConfiguration() const{ return m_columnConfiguration; }

    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline bool ColumnConfigurationHasBeenSet() const { return m_columnConfigurationHasBeenSet; }

    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline void SetColumnConfiguration(const ColumnConfiguration& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = value; }

    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline void SetColumnConfiguration(ColumnConfiguration&& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = std::move(value); }

    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline DatabaseConfiguration& WithColumnConfiguration(const ColumnConfiguration& value) { SetColumnConfiguration(value); return *this;}

    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline DatabaseConfiguration& WithColumnConfiguration(ColumnConfiguration&& value) { SetColumnConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline const AclConfiguration& GetAclConfiguration() const{ return m_aclConfiguration; }

    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline bool AclConfigurationHasBeenSet() const { return m_aclConfigurationHasBeenSet; }

    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline void SetAclConfiguration(const AclConfiguration& value) { m_aclConfigurationHasBeenSet = true; m_aclConfiguration = value; }

    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline void SetAclConfiguration(AclConfiguration&& value) { m_aclConfigurationHasBeenSet = true; m_aclConfiguration = std::move(value); }

    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline DatabaseConfiguration& WithAclConfiguration(const AclConfiguration& value) { SetAclConfiguration(value); return *this;}

    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline DatabaseConfiguration& WithAclConfiguration(AclConfiguration&& value) { SetAclConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline const SqlConfiguration& GetSqlConfiguration() const{ return m_sqlConfiguration; }

    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline bool SqlConfigurationHasBeenSet() const { return m_sqlConfigurationHasBeenSet; }

    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline void SetSqlConfiguration(const SqlConfiguration& value) { m_sqlConfigurationHasBeenSet = true; m_sqlConfiguration = value; }

    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline void SetSqlConfiguration(SqlConfiguration&& value) { m_sqlConfigurationHasBeenSet = true; m_sqlConfiguration = std::move(value); }

    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline DatabaseConfiguration& WithSqlConfiguration(const SqlConfiguration& value) { SetSqlConfiguration(value); return *this;}

    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline DatabaseConfiguration& WithSqlConfiguration(SqlConfiguration&& value) { SetSqlConfiguration(std::move(value)); return *this;}

  private:

    DatabaseEngineType m_databaseEngineType;
    bool m_databaseEngineTypeHasBeenSet = false;

    ConnectionConfiguration m_connectionConfiguration;
    bool m_connectionConfigurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    ColumnConfiguration m_columnConfiguration;
    bool m_columnConfigurationHasBeenSet = false;

    AclConfiguration m_aclConfiguration;
    bool m_aclConfigurationHasBeenSet = false;

    SqlConfiguration m_sqlConfiguration;
    bool m_sqlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
