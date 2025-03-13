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
    AWS_GLUE_API DirectSchemaChangePolicy() = default;
    AWS_GLUE_API DirectSchemaChangePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectSchemaChangePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to use the specified update behavior when the crawler finds a changed
     * schema.</p>
     */
    inline bool GetEnableUpdateCatalog() const { return m_enableUpdateCatalog; }
    inline bool EnableUpdateCatalogHasBeenSet() const { return m_enableUpdateCatalogHasBeenSet; }
    inline void SetEnableUpdateCatalog(bool value) { m_enableUpdateCatalogHasBeenSet = true; m_enableUpdateCatalog = value; }
    inline DirectSchemaChangePolicy& WithEnableUpdateCatalog(bool value) { SetEnableUpdateCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update behavior when the crawler finds a changed schema.</p>
     */
    inline UpdateCatalogBehavior GetUpdateBehavior() const { return m_updateBehavior; }
    inline bool UpdateBehaviorHasBeenSet() const { return m_updateBehaviorHasBeenSet; }
    inline void SetUpdateBehavior(UpdateCatalogBehavior value) { m_updateBehaviorHasBeenSet = true; m_updateBehavior = value; }
    inline DirectSchemaChangePolicy& WithUpdateBehavior(UpdateCatalogBehavior value) { SetUpdateBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the table in the database that the schema change policy applies
     * to.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    DirectSchemaChangePolicy& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the database that the schema change policy applies to.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    DirectSchemaChangePolicy& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}
  private:

    bool m_enableUpdateCatalog{false};
    bool m_enableUpdateCatalogHasBeenSet = false;

    UpdateCatalogBehavior m_updateBehavior{UpdateCatalogBehavior::NOT_SET};
    bool m_updateBehaviorHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
