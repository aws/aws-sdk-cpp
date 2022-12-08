/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/VpcConfiguration.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Provides information about the Amazon Redshift database
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/RedshiftSourceConfig">AWS
   * API Reference</a></p>
   */
  class RedshiftSourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API RedshiftSourceConfig();
    AWS_LOOKOUTMETRICS_API RedshiftSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API RedshiftSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline RedshiftSourceConfig& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline RedshiftSourceConfig& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A string identifying the Redshift cluster.</p>
     */
    inline RedshiftSourceConfig& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the database host.</p>
     */
    inline const Aws::String& GetDatabaseHost() const{ return m_databaseHost; }

    /**
     * <p>The name of the database host.</p>
     */
    inline bool DatabaseHostHasBeenSet() const { return m_databaseHostHasBeenSet; }

    /**
     * <p>The name of the database host.</p>
     */
    inline void SetDatabaseHost(const Aws::String& value) { m_databaseHostHasBeenSet = true; m_databaseHost = value; }

    /**
     * <p>The name of the database host.</p>
     */
    inline void SetDatabaseHost(Aws::String&& value) { m_databaseHostHasBeenSet = true; m_databaseHost = std::move(value); }

    /**
     * <p>The name of the database host.</p>
     */
    inline void SetDatabaseHost(const char* value) { m_databaseHostHasBeenSet = true; m_databaseHost.assign(value); }

    /**
     * <p>The name of the database host.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseHost(const Aws::String& value) { SetDatabaseHost(value); return *this;}

    /**
     * <p>The name of the database host.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseHost(Aws::String&& value) { SetDatabaseHost(std::move(value)); return *this;}

    /**
     * <p>The name of the database host.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseHost(const char* value) { SetDatabaseHost(value); return *this;}


    /**
     * <p>The port number where the database can be accessed.</p>
     */
    inline int GetDatabasePort() const{ return m_databasePort; }

    /**
     * <p>The port number where the database can be accessed.</p>
     */
    inline bool DatabasePortHasBeenSet() const { return m_databasePortHasBeenSet; }

    /**
     * <p>The port number where the database can be accessed.</p>
     */
    inline void SetDatabasePort(int value) { m_databasePortHasBeenSet = true; m_databasePort = value; }

    /**
     * <p>The port number where the database can be accessed.</p>
     */
    inline RedshiftSourceConfig& WithDatabasePort(int value) { SetDatabasePort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const{ return m_secretManagerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline void SetSecretManagerArn(const Aws::String& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline void SetSecretManagerArn(Aws::String&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline void SetSecretManagerArn(const char* value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline RedshiftSourceConfig& WithSecretManagerArn(const Aws::String& value) { SetSecretManagerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline RedshiftSourceConfig& WithSecretManagerArn(Aws::String&& value) { SetSecretManagerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline RedshiftSourceConfig& WithSecretManagerArn(const char* value) { SetSecretManagerArn(value); return *this;}


    /**
     * <p>The Redshift database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The Redshift database name.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The Redshift database name.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The Redshift database name.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The Redshift database name.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The Redshift database name.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The Redshift database name.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The Redshift database name.</p>
     */
    inline RedshiftSourceConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline RedshiftSourceConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline RedshiftSourceConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name of the Redshift database.</p>
     */
    inline RedshiftSourceConfig& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline RedshiftSourceConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline RedshiftSourceConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role providing access to the
     * database.</p>
     */
    inline RedshiftSourceConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline RedshiftSourceConfig& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Contains information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline RedshiftSourceConfig& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_databaseHost;
    bool m_databaseHostHasBeenSet = false;

    int m_databasePort;
    bool m_databasePortHasBeenSet = false;

    Aws::String m_secretManagerArn;
    bool m_secretManagerArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
