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
    AWS_GLUE_API StartColumnStatisticsTaskRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartColumnStatisticsTaskRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    StartColumnStatisticsTaskRunRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to generate statistics.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    StartColumnStatisticsTaskRunRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the column names to generate statistics. If none is supplied, all
     * column names for the table will be used by default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const { return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    void SetColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::forward<ColumnNameListT>(value); }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    StartColumnStatisticsTaskRunRequest& WithColumnNameList(ColumnNameListT&& value) { SetColumnNameList(std::forward<ColumnNameListT>(value)); return *this;}
    template<typename ColumnNameListT = Aws::String>
    StartColumnStatisticsTaskRunRequest& AddColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.emplace_back(std::forward<ColumnNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that the service assumes to generate statistics.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    StartColumnStatisticsTaskRunRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of rows used to generate statistics. If none is supplied, the
     * entire table will be used to generate stats.</p>
     */
    inline double GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline StartColumnStatisticsTaskRunRequest& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogID() const { return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    template<typename CatalogIDT = Aws::String>
    void SetCatalogID(CatalogIDT&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::forward<CatalogIDT>(value); }
    template<typename CatalogIDT = Aws::String>
    StartColumnStatisticsTaskRunRequest& WithCatalogID(CatalogIDT&& value) { SetCatalogID(std::forward<CatalogIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch logs
     * for the column stats task run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    StartColumnStatisticsTaskRunRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNameList;
    bool m_columnNameListHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    double m_sampleSize{0.0};
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_catalogID;
    bool m_catalogIDHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
