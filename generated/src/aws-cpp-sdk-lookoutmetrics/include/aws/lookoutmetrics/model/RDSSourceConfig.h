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
   * <p>Contains information about the Amazon Relational Database Service (RDS)
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/RDSSourceConfig">AWS
   * API Reference</a></p>
   */
  class RDSSourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API RDSSourceConfig();
    AWS_LOOKOUTMETRICS_API RDSSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API RDSSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string identifying the database instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline RDSSourceConfig& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline RDSSourceConfig& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A string identifying the database instance.</p>
     */
    inline RDSSourceConfig& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The host name of the database.</p>
     */
    inline const Aws::String& GetDatabaseHost() const{ return m_databaseHost; }

    /**
     * <p>The host name of the database.</p>
     */
    inline bool DatabaseHostHasBeenSet() const { return m_databaseHostHasBeenSet; }

    /**
     * <p>The host name of the database.</p>
     */
    inline void SetDatabaseHost(const Aws::String& value) { m_databaseHostHasBeenSet = true; m_databaseHost = value; }

    /**
     * <p>The host name of the database.</p>
     */
    inline void SetDatabaseHost(Aws::String&& value) { m_databaseHostHasBeenSet = true; m_databaseHost = std::move(value); }

    /**
     * <p>The host name of the database.</p>
     */
    inline void SetDatabaseHost(const char* value) { m_databaseHostHasBeenSet = true; m_databaseHost.assign(value); }

    /**
     * <p>The host name of the database.</p>
     */
    inline RDSSourceConfig& WithDatabaseHost(const Aws::String& value) { SetDatabaseHost(value); return *this;}

    /**
     * <p>The host name of the database.</p>
     */
    inline RDSSourceConfig& WithDatabaseHost(Aws::String&& value) { SetDatabaseHost(std::move(value)); return *this;}

    /**
     * <p>The host name of the database.</p>
     */
    inline RDSSourceConfig& WithDatabaseHost(const char* value) { SetDatabaseHost(value); return *this;}


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
    inline RDSSourceConfig& WithDatabasePort(int value) { SetDatabasePort(value); return *this;}


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
    inline RDSSourceConfig& WithSecretManagerArn(const Aws::String& value) { SetSecretManagerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline RDSSourceConfig& WithSecretManagerArn(Aws::String&& value) { SetSecretManagerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager role.</p>
     */
    inline RDSSourceConfig& WithSecretManagerArn(const char* value) { SetSecretManagerArn(value); return *this;}


    /**
     * <p>The name of the RDS database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the RDS database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the RDS database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the RDS database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the RDS database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the RDS database.</p>
     */
    inline RDSSourceConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the RDS database.</p>
     */
    inline RDSSourceConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the RDS database.</p>
     */
    inline RDSSourceConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table in the database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RDSSourceConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RDSSourceConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database.</p>
     */
    inline RDSSourceConfig& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline RDSSourceConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline RDSSourceConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline RDSSourceConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline RDSSourceConfig& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>An object containing information about the Amazon Virtual Private Cloud (VPC)
     * configuration.</p>
     */
    inline RDSSourceConfig& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

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
