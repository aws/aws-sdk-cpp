/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DDBELTCatalogAdditionalOptions.h>
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
   * <p>Specifies a DynamoDB data source in the Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DynamoDBCatalogSource">AWS
   * API Reference</a></p>
   */
  class DynamoDBCatalogSource
  {
  public:
    AWS_GLUE_API DynamoDBCatalogSource() = default;
    AWS_GLUE_API DynamoDBCatalogSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DynamoDBCatalogSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DynamoDBCatalogSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    DynamoDBCatalogSource& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
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
    DynamoDBCatalogSource& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Point-in-Time Recovery (PITR) is enabled for the DynamoDB
     * table. When set to <code>true</code>, allows reading from a specific point in
     * time. The default value is <code>false</code>.</p>
     */
    inline bool GetPitrEnabled() const { return m_pitrEnabled; }
    inline bool PitrEnabledHasBeenSet() const { return m_pitrEnabledHasBeenSet; }
    inline void SetPitrEnabled(bool value) { m_pitrEnabledHasBeenSet = true; m_pitrEnabled = value; }
    inline DynamoDBCatalogSource& WithPitrEnabled(bool value) { SetPitrEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options for the DynamoDB data source.</p>
     */
    inline const DDBELTCatalogAdditionalOptions& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = DDBELTCatalogAdditionalOptions>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = DDBELTCatalogAdditionalOptions>
    DynamoDBCatalogSource& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    bool m_pitrEnabled{false};
    bool m_pitrEnabledHasBeenSet = false;

    DDBELTCatalogAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
