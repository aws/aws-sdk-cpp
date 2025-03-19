/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/BackTestConfiguration.h>
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
   * <p>Details about an Amazon Athena datasource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AthenaSourceConfig">AWS
   * API Reference</a></p>
   */
  class AthenaSourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig() = default;
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AthenaSourceConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's name.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    AthenaSourceConfig& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's data catalog.</p>
     */
    inline const Aws::String& GetDataCatalog() const { return m_dataCatalog; }
    inline bool DataCatalogHasBeenSet() const { return m_dataCatalogHasBeenSet; }
    template<typename DataCatalogT = Aws::String>
    void SetDataCatalog(DataCatalogT&& value) { m_dataCatalogHasBeenSet = true; m_dataCatalog = std::forward<DataCatalogT>(value); }
    template<typename DataCatalogT = Aws::String>
    AthenaSourceConfig& WithDataCatalog(DataCatalogT&& value) { SetDataCatalog(std::forward<DataCatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's table name.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    AthenaSourceConfig& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's work group name.</p>
     */
    inline const Aws::String& GetWorkGroupName() const { return m_workGroupName; }
    inline bool WorkGroupNameHasBeenSet() const { return m_workGroupNameHasBeenSet; }
    template<typename WorkGroupNameT = Aws::String>
    void SetWorkGroupName(WorkGroupNameT&& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = std::forward<WorkGroupNameT>(value); }
    template<typename WorkGroupNameT = Aws::String>
    AthenaSourceConfig& WithWorkGroupName(WorkGroupNameT&& value) { SetWorkGroupName(std::forward<WorkGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's results path.</p>
     */
    inline const Aws::String& GetS3ResultsPath() const { return m_s3ResultsPath; }
    inline bool S3ResultsPathHasBeenSet() const { return m_s3ResultsPathHasBeenSet; }
    template<typename S3ResultsPathT = Aws::String>
    void SetS3ResultsPath(S3ResultsPathT&& value) { m_s3ResultsPathHasBeenSet = true; m_s3ResultsPath = std::forward<S3ResultsPathT>(value); }
    template<typename S3ResultsPathT = Aws::String>
    AthenaSourceConfig& WithS3ResultsPath(S3ResultsPathT&& value) { SetS3ResultsPath(std::forward<S3ResultsPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for backtest mode.</p>
     */
    inline const BackTestConfiguration& GetBackTestConfiguration() const { return m_backTestConfiguration; }
    inline bool BackTestConfigurationHasBeenSet() const { return m_backTestConfigurationHasBeenSet; }
    template<typename BackTestConfigurationT = BackTestConfiguration>
    void SetBackTestConfiguration(BackTestConfigurationT&& value) { m_backTestConfigurationHasBeenSet = true; m_backTestConfiguration = std::forward<BackTestConfigurationT>(value); }
    template<typename BackTestConfigurationT = BackTestConfiguration>
    AthenaSourceConfig& WithBackTestConfiguration(BackTestConfigurationT&& value) { SetBackTestConfiguration(std::forward<BackTestConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataCatalog;
    bool m_dataCatalogHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_workGroupName;
    bool m_workGroupNameHasBeenSet = false;

    Aws::String m_s3ResultsPath;
    bool m_s3ResultsPathHasBeenSet = false;

    BackTestConfiguration m_backTestConfiguration;
    bool m_backTestConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
