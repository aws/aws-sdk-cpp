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
   * <p>Specifies an Apache Iceberg data source that is registered in the Glue Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogIcebergSource">AWS
   * API Reference</a></p>
   */
  class CatalogIcebergSource
  {
  public:
    AWS_GLUE_API CatalogIcebergSource() = default;
    AWS_GLUE_API CatalogIcebergSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogIcebergSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Iceberg data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CatalogIcebergSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to read from.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    CatalogIcebergSource& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table in the database to read from.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    CatalogIcebergSource& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options for the Iceberg data source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalIcebergOptions() const { return m_additionalIcebergOptions; }
    inline bool AdditionalIcebergOptionsHasBeenSet() const { return m_additionalIcebergOptionsHasBeenSet; }
    template<typename AdditionalIcebergOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalIcebergOptions(AdditionalIcebergOptionsT&& value) { m_additionalIcebergOptionsHasBeenSet = true; m_additionalIcebergOptions = std::forward<AdditionalIcebergOptionsT>(value); }
    template<typename AdditionalIcebergOptionsT = Aws::Map<Aws::String, Aws::String>>
    CatalogIcebergSource& WithAdditionalIcebergOptions(AdditionalIcebergOptionsT&& value) { SetAdditionalIcebergOptions(std::forward<AdditionalIcebergOptionsT>(value)); return *this;}
    template<typename AdditionalIcebergOptionsKeyT = Aws::String, typename AdditionalIcebergOptionsValueT = Aws::String>
    CatalogIcebergSource& AddAdditionalIcebergOptions(AdditionalIcebergOptionsKeyT&& key, AdditionalIcebergOptionsValueT&& value) {
      m_additionalIcebergOptionsHasBeenSet = true; m_additionalIcebergOptions.emplace(std::forward<AdditionalIcebergOptionsKeyT>(key), std::forward<AdditionalIcebergOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the Iceberg source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    CatalogIcebergSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    CatalogIcebergSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalIcebergOptions;
    bool m_additionalIcebergOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
