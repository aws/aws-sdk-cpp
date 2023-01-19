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
   * <p>Specifies a Hudi data source that is registered in the Glue Data Catalog. The
   * Hudi data source must be stored in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3CatalogHudiSource">AWS
   * API Reference</a></p>
   */
  class S3CatalogHudiSource
  {
  public:
    AWS_GLUE_API S3CatalogHudiSource();
    AWS_GLUE_API S3CatalogHudiSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3CatalogHudiSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline S3CatalogHudiSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline S3CatalogHudiSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Hudi data source.</p>
     */
    inline S3CatalogHudiSource& WithName(const char* value) { SetName(value); return *this;}


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
    inline S3CatalogHudiSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline S3CatalogHudiSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to read from.</p>
     */
    inline S3CatalogHudiSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}


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
    inline S3CatalogHudiSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline S3CatalogHudiSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline S3CatalogHudiSource& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalHudiOptions() const{ return m_additionalHudiOptions; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline bool AdditionalHudiOptionsHasBeenSet() const { return m_additionalHudiOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalHudiOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions = value; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalHudiOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& WithAdditionalHudiOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalHudiOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& WithAdditionalHudiOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalHudiOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(const Aws::String& key, const Aws::String& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(Aws::String&& key, const Aws::String& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(const Aws::String& key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(Aws::String&& key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(const char* key, Aws::String&& value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(Aws::String&& key, const char* value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3CatalogHudiSource& AddAdditionalHudiOptions(const char* key, const char* value) { m_additionalHudiOptionsHasBeenSet = true; m_additionalHudiOptions.emplace(key, value); return *this; }


    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3CatalogHudiSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3CatalogHudiSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3CatalogHudiSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the Hudi source.</p>
     */
    inline S3CatalogHudiSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalHudiOptions;
    bool m_additionalHudiOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
