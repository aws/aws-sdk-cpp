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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API UpdateTableRequest : public GlueRequest
  {
  public:
    UpdateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline UpdateTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline UpdateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline const TableInput& GetTableInput() const{ return m_tableInput; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline void SetTableInput(const TableInput& value) { m_tableInputHasBeenSet = true; m_tableInput = value; }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline void SetTableInput(TableInput&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::move(value); }

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline UpdateTableRequest& WithTableInput(const TableInput& value) { SetTableInput(value); return *this;}

    /**
     * <p>An updated <code>TableInput</code> object to define the metadata table in the
     * catalog.</p>
     */
    inline UpdateTableRequest& WithTableInput(TableInput&& value) { SetTableInput(std::move(value)); return *this;}


    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. If <code>skipArchive</code> is set to true,
     * however, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool GetSkipArchive() const{ return m_skipArchive; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. If <code>skipArchive</code> is set to true,
     * however, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline bool SkipArchiveHasBeenSet() const { return m_skipArchiveHasBeenSet; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. If <code>skipArchive</code> is set to true,
     * however, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline void SetSkipArchive(bool value) { m_skipArchiveHasBeenSet = true; m_skipArchive = value; }

    /**
     * <p>By default, <code>UpdateTable</code> always creates an archived version of
     * the table before updating it. If <code>skipArchive</code> is set to true,
     * however, <code>UpdateTable</code> does not create the archived version.</p>
     */
    inline UpdateTableRequest& WithSkipArchive(bool value) { SetSkipArchive(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet;

    bool m_skipArchive;
    bool m_skipArchiveHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
