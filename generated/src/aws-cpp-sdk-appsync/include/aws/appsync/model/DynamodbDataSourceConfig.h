/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DeltaSyncConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an Amazon DynamoDB data source configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DynamodbDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class DynamodbDataSourceConfig
  {
  public:
    AWS_APPSYNC_API DynamodbDataSourceConfig();
    AWS_APPSYNC_API DynamodbDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DynamodbDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The table name.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline bool GetUseCallerCredentials() const{ return m_useCallerCredentials; }

    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline bool UseCallerCredentialsHasBeenSet() const { return m_useCallerCredentialsHasBeenSet; }

    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline void SetUseCallerCredentials(bool value) { m_useCallerCredentialsHasBeenSet = true; m_useCallerCredentials = value; }

    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline DynamodbDataSourceConfig& WithUseCallerCredentials(bool value) { SetUseCallerCredentials(value); return *this;}


    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline const DeltaSyncConfig& GetDeltaSyncConfig() const{ return m_deltaSyncConfig; }

    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline bool DeltaSyncConfigHasBeenSet() const { return m_deltaSyncConfigHasBeenSet; }

    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline void SetDeltaSyncConfig(const DeltaSyncConfig& value) { m_deltaSyncConfigHasBeenSet = true; m_deltaSyncConfig = value; }

    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline void SetDeltaSyncConfig(DeltaSyncConfig&& value) { m_deltaSyncConfigHasBeenSet = true; m_deltaSyncConfig = std::move(value); }

    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline DynamodbDataSourceConfig& WithDeltaSyncConfig(const DeltaSyncConfig& value) { SetDeltaSyncConfig(value); return *this;}

    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline DynamodbDataSourceConfig& WithDeltaSyncConfig(DeltaSyncConfig&& value) { SetDeltaSyncConfig(std::move(value)); return *this;}


    /**
     * <p>Set to TRUE to use Conflict Detection and Resolution with this data
     * source.</p>
     */
    inline bool GetVersioned() const{ return m_versioned; }

    /**
     * <p>Set to TRUE to use Conflict Detection and Resolution with this data
     * source.</p>
     */
    inline bool VersionedHasBeenSet() const { return m_versionedHasBeenSet; }

    /**
     * <p>Set to TRUE to use Conflict Detection and Resolution with this data
     * source.</p>
     */
    inline void SetVersioned(bool value) { m_versionedHasBeenSet = true; m_versioned = value; }

    /**
     * <p>Set to TRUE to use Conflict Detection and Resolution with this data
     * source.</p>
     */
    inline DynamodbDataSourceConfig& WithVersioned(bool value) { SetVersioned(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    bool m_useCallerCredentials;
    bool m_useCallerCredentialsHasBeenSet = false;

    DeltaSyncConfig m_deltaSyncConfig;
    bool m_deltaSyncConfigHasBeenSet = false;

    bool m_versioned;
    bool m_versionedHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
