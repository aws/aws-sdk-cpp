/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueSchema.h>
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
   * <p>Specifies a Delta Lake data source that is registered in the Glue Data
   * Catalog. The data source must be stored in Amazon S3.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3CatalogDeltaSource">AWS
   * API Reference</a></p>
   */
  class S3CatalogDeltaSource
  {
  public:
    AWS_GLUE_API S3CatalogDeltaSource();
    AWS_GLUE_API S3CatalogDeltaSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3CatalogDeltaSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline S3CatalogDeltaSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline S3CatalogDeltaSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Delta Lake data source.</p>
     */
    inline S3CatalogDeltaSource& WithName(const char* value) { SetName(value); return *this;}


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
    inline S3CatalogDeltaSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline S3CatalogDeltaSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline S3CatalogDeltaSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}


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
    inline S3CatalogDeltaSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline S3CatalogDeltaSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline S3CatalogDeltaSource& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDeltaOptions() const{ return m_additionalDeltaOptions; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline bool AdditionalDeltaOptionsHasBeenSet() const { return m_additionalDeltaOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalDeltaOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions = value; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalDeltaOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& WithAdditionalDeltaOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalDeltaOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& WithAdditionalDeltaOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalDeltaOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(const Aws::String& key, const Aws::String& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, const Aws::String& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(const Aws::String& key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(const char* key, Aws::String&& value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(Aws::String&& key, const char* value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogDeltaSource& AddAdditionalDeltaOptions(const char* key, const char* value) { m_additionalDeltaOptionsHasBeenSet = true; m_additionalDeltaOptions.emplace(key, value); return *this; }


    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline S3CatalogDeltaSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline S3CatalogDeltaSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline S3CatalogDeltaSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the Delta Lake source.</p>
     */
    inline S3CatalogDeltaSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalDeltaOptions;
    bool m_additionalDeltaOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
