/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a MySQL data source in the Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MySQLCatalogSource">AWS
   * API Reference</a></p>
   */
  class MySQLCatalogSource
  {
  public:
    AWS_GLUE_API MySQLCatalogSource();
    AWS_GLUE_API MySQLCatalogSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MySQLCatalogSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline MySQLCatalogSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline MySQLCatalogSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline MySQLCatalogSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the database to read from.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database to read from.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database to read from.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database to read from.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database to read from.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database to read from.</p>
     */
    inline MySQLCatalogSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline MySQLCatalogSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline MySQLCatalogSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline MySQLCatalogSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline MySQLCatalogSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline MySQLCatalogSource& WithTable(const char* value) { SetTable(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
