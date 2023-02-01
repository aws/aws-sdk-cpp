/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies a target that uses Postgres SQL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PostgreSQLCatalogTarget">AWS
   * API Reference</a></p>
   */
  class PostgreSQLCatalogTarget
  {
  public:
    AWS_GLUE_API PostgreSQLCatalogTarget();
    AWS_GLUE_API PostgreSQLCatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PostgreSQLCatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline PostgreSQLCatalogTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline PostgreSQLCatalogTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline PostgreSQLCatalogTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline PostgreSQLCatalogTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline PostgreSQLCatalogTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline PostgreSQLCatalogTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline PostgreSQLCatalogTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline PostgreSQLCatalogTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The name of the database to write to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline PostgreSQLCatalogTarget& WithTable(const char* value) { SetTable(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
