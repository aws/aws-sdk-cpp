/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StartColumnStatisticsTaskRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartColumnStatisticsTaskRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartColumnStatisticsTaskRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const{ return m_columnNameList; }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline void SetColumnNameList(const Aws::Vector<Aws::String>& value) { m_columnNameListHasBeenSet = true; m_columnNameList = value; }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline void SetColumnNameList(Aws::Vector<Aws::String>&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::move(value); }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithColumnNameList(const Aws::Vector<Aws::String>& value) { SetColumnNameList(value); return *this;}

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithColumnNameList(Aws::Vector<Aws::String>&& value) { SetColumnNameList(std::move(value)); return *this;}

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& AddColumnNameList(const Aws::String& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& AddColumnNameList(Aws::String&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& AddColumnNameList(const char* value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }


    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline double GetSampleSize() const{ return m_sampleSize; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }

    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithSampleSize(double value) { SetSampleSize(value); return *this;}


    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogID() const{ return m_catalogID; }

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(const Aws::String& value) { m_catalogIDHasBeenSet = true; m_catalogID = value; }

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(Aws::String&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogID(const char* value) { m_catalogIDHasBeenSet = true; m_catalogID.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithCatalogID(const Aws::String& value) { SetCatalogID(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithCatalogID(Aws::String&& value) { SetCatalogID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithCatalogID(const char* value) { SetCatalogID(value); return *this;}


    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline StartColumnStatisticsTaskRunRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNameList;
    bool m_columnNameListHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    double m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_catalogID;
    bool m_catalogIDHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
