/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The database and data catalog context in which the query execution
   * occurs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryExecutionContext">AWS
   * API Reference</a></p>
   */
  class QueryExecutionContext
  {
  public:
    AWS_ATHENA_API QueryExecutionContext() = default;
    AWS_ATHENA_API QueryExecutionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecutionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database used in the query execution. The database must exist
     * in the catalog.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    QueryExecutionContext& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data catalog used in the query execution.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    QueryExecutionContext& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
