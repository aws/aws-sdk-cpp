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
    AWS_ATHENA_API QueryExecutionContext();
    AWS_ATHENA_API QueryExecutionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecutionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database used in the query execution. The database must exist
     * in the catalog.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline QueryExecutionContext& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline QueryExecutionContext& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline QueryExecutionContext& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data catalog used in the query execution.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline QueryExecutionContext& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline QueryExecutionContext& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline QueryExecutionContext& WithCatalog(const char* value) { SetCatalog(value); return *this;}
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
