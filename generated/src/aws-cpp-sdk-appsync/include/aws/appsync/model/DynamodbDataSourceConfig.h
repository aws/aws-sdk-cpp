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
    AWS_APPSYNC_API DynamodbDataSourceConfig() = default;
    AWS_APPSYNC_API DynamodbDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DynamodbDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table name.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DynamodbDataSourceConfig& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    DynamodbDataSourceConfig& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline bool GetUseCallerCredentials() const { return m_useCallerCredentials; }
    inline bool UseCallerCredentialsHasBeenSet() const { return m_useCallerCredentialsHasBeenSet; }
    inline void SetUseCallerCredentials(bool value) { m_useCallerCredentialsHasBeenSet = true; m_useCallerCredentials = value; }
    inline DynamodbDataSourceConfig& WithUseCallerCredentials(bool value) { SetUseCallerCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DeltaSyncConfig</code> for a versioned data source.</p>
     */
    inline const DeltaSyncConfig& GetDeltaSyncConfig() const { return m_deltaSyncConfig; }
    inline bool DeltaSyncConfigHasBeenSet() const { return m_deltaSyncConfigHasBeenSet; }
    template<typename DeltaSyncConfigT = DeltaSyncConfig>
    void SetDeltaSyncConfig(DeltaSyncConfigT&& value) { m_deltaSyncConfigHasBeenSet = true; m_deltaSyncConfig = std::forward<DeltaSyncConfigT>(value); }
    template<typename DeltaSyncConfigT = DeltaSyncConfig>
    DynamodbDataSourceConfig& WithDeltaSyncConfig(DeltaSyncConfigT&& value) { SetDeltaSyncConfig(std::forward<DeltaSyncConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to TRUE to use Conflict Detection and Resolution with this data
     * source.</p>
     */
    inline bool GetVersioned() const { return m_versioned; }
    inline bool VersionedHasBeenSet() const { return m_versionedHasBeenSet; }
    inline void SetVersioned(bool value) { m_versionedHasBeenSet = true; m_versioned = value; }
    inline DynamodbDataSourceConfig& WithVersioned(bool value) { SetVersioned(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    bool m_useCallerCredentials{false};
    bool m_useCallerCredentialsHasBeenSet = false;

    DeltaSyncConfig m_deltaSyncConfig;
    bool m_deltaSyncConfigHasBeenSet = false;

    bool m_versioned{false};
    bool m_versionedHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
