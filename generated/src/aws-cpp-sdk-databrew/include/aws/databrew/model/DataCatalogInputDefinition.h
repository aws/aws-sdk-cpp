/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/S3Location.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents how metadata stored in the Glue Data Catalog is defined in a
   * DataBrew dataset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DataCatalogInputDefinition">AWS
   * API Reference</a></p>
   */
  class DataCatalogInputDefinition
  {
  public:
    AWS_GLUEDATABREW_API DataCatalogInputDefinition() = default;
    AWS_GLUEDATABREW_API DataCatalogInputDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DataCatalogInputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Web Services account that holds the Data
     * Catalog that stores the data.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    DataCatalogInputDefinition& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database in the Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DataCatalogInputDefinition& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database table in the Data Catalog. This table corresponds to a
     * DataBrew dataset.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DataCatalogInputDefinition& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents an Amazon location where DataBrew can store intermediate
     * results.</p>
     */
    inline const S3Location& GetTempDirectory() const { return m_tempDirectory; }
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }
    template<typename TempDirectoryT = S3Location>
    void SetTempDirectory(TempDirectoryT&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::forward<TempDirectoryT>(value); }
    template<typename TempDirectoryT = S3Location>
    DataCatalogInputDefinition& WithTempDirectory(TempDirectoryT&& value) { SetTempDirectory(std::forward<TempDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    S3Location m_tempDirectory;
    bool m_tempDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
