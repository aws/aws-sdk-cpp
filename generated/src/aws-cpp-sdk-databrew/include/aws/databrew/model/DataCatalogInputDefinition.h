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
    AWS_GLUEDATABREW_API DataCatalogInputDefinition();
    AWS_GLUEDATABREW_API DataCatalogInputDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DataCatalogInputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Web Services account that holds the Data
     * Catalog that stores the data.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline DataCatalogInputDefinition& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline DataCatalogInputDefinition& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline DataCatalogInputDefinition& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database in the Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DataCatalogInputDefinition& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DataCatalogInputDefinition& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DataCatalogInputDefinition& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database table in the Data Catalog. This table corresponds to a
     * DataBrew dataset.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DataCatalogInputDefinition& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DataCatalogInputDefinition& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DataCatalogInputDefinition& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents an Amazon location where DataBrew can store intermediate
     * results.</p>
     */
    inline const S3Location& GetTempDirectory() const{ return m_tempDirectory; }
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }
    inline void SetTempDirectory(const S3Location& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = value; }
    inline void SetTempDirectory(S3Location&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::move(value); }
    inline DataCatalogInputDefinition& WithTempDirectory(const S3Location& value) { SetTempDirectory(value); return *this;}
    inline DataCatalogInputDefinition& WithTempDirectory(S3Location&& value) { SetTempDirectory(std::move(value)); return *this;}
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
