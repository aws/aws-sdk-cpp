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
   * <p>Provides the configuration information to an <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Amazon
   * Kendra supported database</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DatabaseConfiguration">AWS
   * API Reference</a></p>
   */
  class DatabaseConfiguration
  {
  public:
    AWS_KENDRA_API DatabaseConfiguration() = default;
    AWS_KENDRA_API DatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of database engine that runs the database.</p>
     */
    inline DatabaseEngineType GetDatabaseEngineType() const { return m_databaseEngineType; }
    inline bool DatabaseEngineTypeHasBeenSet() const { return m_databaseEngineTypeHasBeenSet; }
    inline void SetDatabaseEngineType(DatabaseEngineType value) { m_databaseEngineTypeHasBeenSet = true; m_databaseEngineType = value; }
    inline DatabaseConfiguration& WithDatabaseEngineType(DatabaseEngineType value) { SetDatabaseEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information that's required to connect to a database.</p>
     */
    inline const ConnectionConfiguration& GetConnectionConfiguration() const { return m_connectionConfiguration; }
    inline bool ConnectionConfigurationHasBeenSet() const { return m_connectionConfigurationHasBeenSet; }
    template<typename ConnectionConfigurationT = ConnectionConfiguration>
    void SetConnectionConfiguration(ConnectionConfigurationT&& value) { m_connectionConfigurationHasBeenSet = true; m_connectionConfiguration = std::forward<ConnectionConfigurationT>(value); }
    template<typename ConnectionConfigurationT = ConnectionConfiguration>
    DatabaseConfiguration& WithConnectionConfiguration(ConnectionConfigurationT&& value) { SetConnectionConfiguration(std::forward<ConnectionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    DatabaseConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about where the index should get the document information from
     * the database.</p>
     */
    inline const ColumnConfiguration& GetColumnConfiguration() const { return m_columnConfiguration; }
    inline bool ColumnConfigurationHasBeenSet() const { return m_columnConfigurationHasBeenSet; }
    template<typename ColumnConfigurationT = ColumnConfiguration>
    void SetColumnConfiguration(ColumnConfigurationT&& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = std::forward<ColumnConfigurationT>(value); }
    template<typename ColumnConfigurationT = ColumnConfiguration>
    DatabaseConfiguration& WithColumnConfiguration(ColumnConfigurationT&& value) { SetColumnConfiguration(std::forward<ColumnConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the database column that provides information for user
     * context filtering.</p>
     */
    inline const AclConfiguration& GetAclConfiguration() const { return m_aclConfiguration; }
    inline bool AclConfigurationHasBeenSet() const { return m_aclConfigurationHasBeenSet; }
    template<typename AclConfigurationT = AclConfiguration>
    void SetAclConfiguration(AclConfigurationT&& value) { m_aclConfigurationHasBeenSet = true; m_aclConfiguration = std::forward<AclConfigurationT>(value); }
    template<typename AclConfigurationT = AclConfiguration>
    DatabaseConfiguration& WithAclConfiguration(AclConfigurationT&& value) { SetAclConfiguration(std::forward<AclConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about how Amazon Kendra uses quote marks around SQL
     * identifiers when querying a database data source.</p>
     */
    inline const SqlConfiguration& GetSqlConfiguration() const { return m_sqlConfiguration; }
    inline bool SqlConfigurationHasBeenSet() const { return m_sqlConfigurationHasBeenSet; }
    template<typename SqlConfigurationT = SqlConfiguration>
    void SetSqlConfiguration(SqlConfigurationT&& value) { m_sqlConfigurationHasBeenSet = true; m_sqlConfiguration = std::forward<SqlConfigurationT>(value); }
    template<typename SqlConfigurationT = SqlConfiguration>
    DatabaseConfiguration& WithSqlConfiguration(SqlConfigurationT&& value) { SetSqlConfiguration(std::forward<SqlConfigurationT>(value)); return *this;}
    ///@}
  private:

    DatabaseEngineType m_databaseEngineType{DatabaseEngineType::NOT_SET};
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
