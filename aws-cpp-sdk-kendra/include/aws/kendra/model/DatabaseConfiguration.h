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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DatabaseEngineType.h>
#include <aws/kendra/model/ConnectionConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/ColumnConfiguration.h>
#include <aws/kendra/model/AclConfiguration.h>
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
   * <p>Provides the information necessary to connect a database to an index.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DatabaseConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DatabaseConfiguration
  {
  public:
    DatabaseConfiguration();
    DatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The information necessary to connect to a database.</p>
     */
    inline const ConnectionConfiguration& GetConnectionConfiguration() const{ return m_connectionConfiguration; }

    /**
     * <p>The information necessary to connect to a database.</p>
     */
    inline bool ConnectionConfigurationHasBeenSet() const { return m_connectionConfigurationHasBeenSet; }

    /**
     * <p>The information necessary to connect to a database.</p>
     */
    inline void SetConnectionConfiguration(const ConnectionConfiguration& value) { m_connectionConfigurationHasBeenSet = true; m_connectionConfiguration = value; }

    /**
     * <p>The information necessary to connect to a database.</p>
     */
    inline void SetConnectionConfiguration(ConnectionConfiguration&& value) { m_connectionConfigurationHasBeenSet = true; m_connectionConfiguration = std::move(value); }

    /**
     * <p>The information necessary to connect to a database.</p>
     */
    inline DatabaseConfiguration& WithConnectionConfiguration(const ConnectionConfiguration& value) { SetConnectionConfiguration(value); return *this;}

    /**
     * <p>The information necessary to connect to a database.</p>
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

  private:

    DatabaseEngineType m_databaseEngineType;
    bool m_databaseEngineTypeHasBeenSet;

    ConnectionConfiguration m_connectionConfiguration;
    bool m_connectionConfigurationHasBeenSet;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet;

    ColumnConfiguration m_columnConfiguration;
    bool m_columnConfigurationHasBeenSet;

    AclConfiguration m_aclConfiguration;
    bool m_aclConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
