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
  class AWS_GLUE_API BatchDeleteTableRequest : public GlueRequest
  {
  public:
    BatchDeleteTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteTable"; }

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
    inline BatchDeleteTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline BatchDeleteTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the table resides. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline BatchDeleteTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline BatchDeleteTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline BatchDeleteTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the tables to delete reside. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline BatchDeleteTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A list of the table to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTablesToDelete() const{ return m_tablesToDelete; }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline bool TablesToDeleteHasBeenSet() const { return m_tablesToDeleteHasBeenSet; }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline void SetTablesToDelete(const Aws::Vector<Aws::String>& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete = value; }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline void SetTablesToDelete(Aws::Vector<Aws::String>&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete = std::move(value); }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline BatchDeleteTableRequest& WithTablesToDelete(const Aws::Vector<Aws::String>& value) { SetTablesToDelete(value); return *this;}

    /**
     * <p>A list of the table to delete.</p>
     */
    inline BatchDeleteTableRequest& WithTablesToDelete(Aws::Vector<Aws::String>&& value) { SetTablesToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of the table to delete.</p>
     */
    inline BatchDeleteTableRequest& AddTablesToDelete(const Aws::String& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(value); return *this; }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline BatchDeleteTableRequest& AddTablesToDelete(Aws::String&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the table to delete.</p>
     */
    inline BatchDeleteTableRequest& AddTablesToDelete(const char* value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(value); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::Vector<Aws::String> m_tablesToDelete;
    bool m_tablesToDeleteHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
