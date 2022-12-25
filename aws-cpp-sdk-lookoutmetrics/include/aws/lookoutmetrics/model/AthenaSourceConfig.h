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
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig();
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AthenaSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline AthenaSourceConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline AthenaSourceConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Lookout for Metrics permission to access the
     * data.</p>
     */
    inline AthenaSourceConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The database's name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database's name.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database's name.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database's name.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database's name.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database's name.</p>
     */
    inline AthenaSourceConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database's name.</p>
     */
    inline AthenaSourceConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database's name.</p>
     */
    inline AthenaSourceConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The database's data catalog.</p>
     */
    inline const Aws::String& GetDataCatalog() const{ return m_dataCatalog; }

    /**
     * <p>The database's data catalog.</p>
     */
    inline bool DataCatalogHasBeenSet() const { return m_dataCatalogHasBeenSet; }

    /**
     * <p>The database's data catalog.</p>
     */
    inline void SetDataCatalog(const Aws::String& value) { m_dataCatalogHasBeenSet = true; m_dataCatalog = value; }

    /**
     * <p>The database's data catalog.</p>
     */
    inline void SetDataCatalog(Aws::String&& value) { m_dataCatalogHasBeenSet = true; m_dataCatalog = std::move(value); }

    /**
     * <p>The database's data catalog.</p>
     */
    inline void SetDataCatalog(const char* value) { m_dataCatalogHasBeenSet = true; m_dataCatalog.assign(value); }

    /**
     * <p>The database's data catalog.</p>
     */
    inline AthenaSourceConfig& WithDataCatalog(const Aws::String& value) { SetDataCatalog(value); return *this;}

    /**
     * <p>The database's data catalog.</p>
     */
    inline AthenaSourceConfig& WithDataCatalog(Aws::String&& value) { SetDataCatalog(std::move(value)); return *this;}

    /**
     * <p>The database's data catalog.</p>
     */
    inline AthenaSourceConfig& WithDataCatalog(const char* value) { SetDataCatalog(value); return *this;}


    /**
     * <p>The database's table name.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The database's table name.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The database's table name.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The database's table name.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The database's table name.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The database's table name.</p>
     */
    inline AthenaSourceConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The database's table name.</p>
     */
    inline AthenaSourceConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The database's table name.</p>
     */
    inline AthenaSourceConfig& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The database's work group name.</p>
     */
    inline const Aws::String& GetWorkGroupName() const{ return m_workGroupName; }

    /**
     * <p>The database's work group name.</p>
     */
    inline bool WorkGroupNameHasBeenSet() const { return m_workGroupNameHasBeenSet; }

    /**
     * <p>The database's work group name.</p>
     */
    inline void SetWorkGroupName(const Aws::String& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = value; }

    /**
     * <p>The database's work group name.</p>
     */
    inline void SetWorkGroupName(Aws::String&& value) { m_workGroupNameHasBeenSet = true; m_workGroupName = std::move(value); }

    /**
     * <p>The database's work group name.</p>
     */
    inline void SetWorkGroupName(const char* value) { m_workGroupNameHasBeenSet = true; m_workGroupName.assign(value); }

    /**
     * <p>The database's work group name.</p>
     */
    inline AthenaSourceConfig& WithWorkGroupName(const Aws::String& value) { SetWorkGroupName(value); return *this;}

    /**
     * <p>The database's work group name.</p>
     */
    inline AthenaSourceConfig& WithWorkGroupName(Aws::String&& value) { SetWorkGroupName(std::move(value)); return *this;}

    /**
     * <p>The database's work group name.</p>
     */
    inline AthenaSourceConfig& WithWorkGroupName(const char* value) { SetWorkGroupName(value); return *this;}


    /**
     * <p>The database's results path.</p>
     */
    inline const Aws::String& GetS3ResultsPath() const{ return m_s3ResultsPath; }

    /**
     * <p>The database's results path.</p>
     */
    inline bool S3ResultsPathHasBeenSet() const { return m_s3ResultsPathHasBeenSet; }

    /**
     * <p>The database's results path.</p>
     */
    inline void SetS3ResultsPath(const Aws::String& value) { m_s3ResultsPathHasBeenSet = true; m_s3ResultsPath = value; }

    /**
     * <p>The database's results path.</p>
     */
    inline void SetS3ResultsPath(Aws::String&& value) { m_s3ResultsPathHasBeenSet = true; m_s3ResultsPath = std::move(value); }

    /**
     * <p>The database's results path.</p>
     */
    inline void SetS3ResultsPath(const char* value) { m_s3ResultsPathHasBeenSet = true; m_s3ResultsPath.assign(value); }

    /**
     * <p>The database's results path.</p>
     */
    inline AthenaSourceConfig& WithS3ResultsPath(const Aws::String& value) { SetS3ResultsPath(value); return *this;}

    /**
     * <p>The database's results path.</p>
     */
    inline AthenaSourceConfig& WithS3ResultsPath(Aws::String&& value) { SetS3ResultsPath(std::move(value)); return *this;}

    /**
     * <p>The database's results path.</p>
     */
    inline AthenaSourceConfig& WithS3ResultsPath(const char* value) { SetS3ResultsPath(value); return *this;}


    /**
     * <p>Settings for backtest mode.</p>
     */
    inline const BackTestConfiguration& GetBackTestConfiguration() const{ return m_backTestConfiguration; }

    /**
     * <p>Settings for backtest mode.</p>
     */
    inline bool BackTestConfigurationHasBeenSet() const { return m_backTestConfigurationHasBeenSet; }

    /**
     * <p>Settings for backtest mode.</p>
     */
    inline void SetBackTestConfiguration(const BackTestConfiguration& value) { m_backTestConfigurationHasBeenSet = true; m_backTestConfiguration = value; }

    /**
     * <p>Settings for backtest mode.</p>
     */
    inline void SetBackTestConfiguration(BackTestConfiguration&& value) { m_backTestConfigurationHasBeenSet = true; m_backTestConfiguration = std::move(value); }

    /**
     * <p>Settings for backtest mode.</p>
     */
    inline AthenaSourceConfig& WithBackTestConfiguration(const BackTestConfiguration& value) { SetBackTestConfiguration(value); return *this;}

    /**
     * <p>Settings for backtest mode.</p>
     */
    inline AthenaSourceConfig& WithBackTestConfiguration(BackTestConfiguration&& value) { SetBackTestConfiguration(std::move(value)); return *this;}

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
