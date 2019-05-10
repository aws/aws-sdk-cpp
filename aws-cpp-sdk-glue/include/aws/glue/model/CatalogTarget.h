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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an AWS Glue Data Catalog target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogTarget">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CatalogTarget
  {
  public:
    CatalogTarget();
    CatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    CatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline CatalogTarget& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline CatalogTarget& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database to be synchronized.</p>
     */
    inline CatalogTarget& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTables() const{ return m_tables; }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline void SetTables(const Aws::Vector<Aws::String>& value) { m_tablesHasBeenSet = true; m_tables = value; }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline void SetTables(Aws::Vector<Aws::String>&& value) { m_tablesHasBeenSet = true; m_tables = std::move(value); }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline CatalogTarget& WithTables(const Aws::Vector<Aws::String>& value) { SetTables(value); return *this;}

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline CatalogTarget& WithTables(Aws::Vector<Aws::String>&& value) { SetTables(std::move(value)); return *this;}

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline CatalogTarget& AddTables(const Aws::String& value) { m_tablesHasBeenSet = true; m_tables.push_back(value); return *this; }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline CatalogTarget& AddTables(Aws::String&& value) { m_tablesHasBeenSet = true; m_tables.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the tables to be synchronized.</p>
     */
    inline CatalogTarget& AddTables(const char* value) { m_tablesHasBeenSet = true; m_tables.push_back(value); return *this; }

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::Vector<Aws::String> m_tables;
    bool m_tablesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
