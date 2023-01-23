/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/UpdateCatalogBehavior.h>
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
   * <p>A policy that specifies update behavior for the crawler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DirectSchemaChangePolicy">AWS
   * API Reference</a></p>
   */
  class DirectSchemaChangePolicy
  {
  public:
    AWS_GLUE_API DirectSchemaChangePolicy();
    AWS_GLUE_API DirectSchemaChangePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectSchemaChangePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline bool GetEnableUpdateCatalog() const{ return m_enableUpdateCatalog; }

    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline bool EnableUpdateCatalogHasBeenSet() const { return m_enableUpdateCatalogHasBeenSet; }

    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline void SetEnableUpdateCatalog(bool value) { m_enableUpdateCatalogHasBeenSet = true; m_enableUpdateCatalog = value; }

    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline DirectSchemaChangePolicy& WithEnableUpdateCatalog(bool value) { SetEnableUpdateCatalog(value); return *this;}


    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline const UpdateCatalogBehavior& GetUpdateBehavior() const{ return m_updateBehavior; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline bool UpdateBehaviorHasBeenSet() const { return m_updateBehaviorHasBeenSet; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline void SetUpdateBehavior(const UpdateCatalogBehavior& value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = value; }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline void SetUpdateBehavior(UpdateCatalogBehavior&& value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = std::move(value); }

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline DirectSchemaChangePolicy& WithUpdateBehavior(const UpdateCatalogBehavior& value) { SetUpdateBehavior(value); return *this;}

    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline DirectSchemaChangePolicy& WithUpdateBehavior(UpdateCatalogBehavior&& value) { SetUpdateBehavior(std::move(value)); return *this;}


    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline DirectSchemaChangePolicy& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline DirectSchemaChangePolicy& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline DirectSchemaChangePolicy& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline DirectSchemaChangePolicy& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline DirectSchemaChangePolicy& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline DirectSchemaChangePolicy& WithDatabase(const char* value) { SetDatabase(value); return *this;}

  private:

    bool m_enableUpdateCatalog;
    bool m_enableUpdateCatalogHasBeenSet = false;

    UpdateCatalogBehavior m_updateBehavior;
    bool m_updateBehaviorHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
