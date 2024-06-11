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
    AWS_BCMDATAEXPORTS_API Table();
    AWS_BCMDATAEXPORTS_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description for the table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Table& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Table& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Table& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline Table& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline Table& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline Table& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for the table.</p>
     */
    inline const Aws::Vector<TablePropertyDescription>& GetTableProperties() const{ return m_tableProperties; }
    inline bool TablePropertiesHasBeenSet() const { return m_tablePropertiesHasBeenSet; }
    inline void SetTableProperties(const Aws::Vector<TablePropertyDescription>& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = value; }
    inline void SetTableProperties(Aws::Vector<TablePropertyDescription>&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = std::move(value); }
    inline Table& WithTableProperties(const Aws::Vector<TablePropertyDescription>& value) { SetTableProperties(value); return *this;}
    inline Table& WithTableProperties(Aws::Vector<TablePropertyDescription>&& value) { SetTableProperties(std::move(value)); return *this;}
    inline Table& AddTableProperties(const TablePropertyDescription& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.push_back(value); return *this; }
    inline Table& AddTableProperties(TablePropertyDescription&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties.push_back(std::move(value)); return *this; }
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
