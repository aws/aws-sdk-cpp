/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Configuration information for coordination with Glue, a fully managed
   * extract, transform and load (ETL) service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GlueConfiguration">AWS
   * API Reference</a></p>
   */
  class GlueConfiguration
  {
  public:
    AWS_IOTANALYTICS_API GlueConfiguration();
    AWS_IOTANALYTICS_API GlueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API GlueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline GlueConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline GlueConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in your Glue Data Catalog that is used to perform the
     * ETL operations. An Glue Data Catalog table contains partitioned data and
     * descriptions of data sources and targets.</p>
     */
    inline GlueConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline GlueConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline GlueConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in your Glue Data Catalog in which the table is
     * located. An Glue Data Catalog database contains metadata tables.</p>
     */
    inline GlueConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
