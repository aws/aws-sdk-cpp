/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-data-exports/model/TablePropertyDescription.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The details for the data export table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/Table">AWS
   * API Reference</a></p>
   */
  class Table
  {
  public:
    AWS_BCMDATAEXPORTS_API Table() = default;
    AWS_BCMDATAEXPORTS_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description for the table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Table& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    Table& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for the table.</p>
     */
    inline const Aws::Vector<TablePropertyDescription>& GetTableProperties() const { return m_tableProperties; }
    inline bool TablePropertiesHasBeenSet() const { return m_tablePropertiesHasBeenSet; }
    template<typename TablePropertiesT = Aws::Vector<TablePropertyDescription>>
    void SetTableProperties(TablePropertiesT&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = std::forward<TablePropertiesT>(value); }
    template<typename TablePropertiesT = Aws::Vector<TablePropertyDescription>>
    Table& WithTableProperties(TablePropertiesT&& value) { SetTableProperties(std::forward<TablePropertiesT>(value)); return *this;}
    template<typename TablePropertiesT = TablePropertyDescription>
    Table& AddTableProperties(TablePropertiesT&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace_back(std::forward<TablePropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<TablePropertyDescription> m_tableProperties;
    bool m_tablePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
