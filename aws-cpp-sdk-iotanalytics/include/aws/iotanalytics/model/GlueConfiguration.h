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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Configuration information for coordination with the AWS Glue ETL (extract,
   * transform and load) service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GlueConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API GlueConfiguration
  {
  public:
    GlueConfiguration();
    GlueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    GlueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline GlueConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline GlueConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in your AWS Glue Data Catalog which is used to perform
     * the ETL (extract, transform and load) operations. (An AWS Glue Data Catalog
     * table contains partitioned data and descriptions of data sources and
     * targets.)</p>
     */
    inline GlueConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline GlueConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline GlueConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in your AWS Glue Data Catalog in which the table is
     * located. (An AWS Glue Data Catalog database contains Glue Data tables.)</p>
     */
    inline GlueConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
