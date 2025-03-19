/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/ColumnDataType.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The definition of a column in a tabular Dataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ColumnDefinition">AWS
   * API Reference</a></p>
   */
  class ColumnDefinition
  {
  public:
    AWS_FINSPACEDATA_API ColumnDefinition() = default;
    AWS_FINSPACEDATA_API ColumnDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ColumnDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Data type of a column.</p> <ul> <li> <p> <code>STRING</code> – A String data
     * type.</p> <p> <code>CHAR</code> – A char data type.</p> <p> <code>INTEGER</code>
     * – An integer data type.</p> <p> <code>TINYINT</code> – A tinyint data type.</p>
     * <p> <code>SMALLINT</code> – A smallint data type.</p> <p> <code>BIGINT</code> –
     * A bigint data type.</p> <p> <code>FLOAT</code> – A float data type.</p> <p>
     * <code>DOUBLE</code> – A double data type.</p> <p> <code>DATE</code> – A date
     * data type.</p> <p> <code>DATETIME</code> – A datetime data type.</p> <p>
     * <code>BOOLEAN</code> – A boolean data type.</p> <p> <code>BINARY</code> – A
     * binary data type.</p> </li> </ul>
     */
    inline ColumnDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(ColumnDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline ColumnDefinition& WithDataType(ColumnDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    ColumnDefinition& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for a column.</p>
     */
    inline const Aws::String& GetColumnDescription() const { return m_columnDescription; }
    inline bool ColumnDescriptionHasBeenSet() const { return m_columnDescriptionHasBeenSet; }
    template<typename ColumnDescriptionT = Aws::String>
    void SetColumnDescription(ColumnDescriptionT&& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = std::forward<ColumnDescriptionT>(value); }
    template<typename ColumnDescriptionT = Aws::String>
    ColumnDefinition& WithColumnDescription(ColumnDescriptionT&& value) { SetColumnDescription(std::forward<ColumnDescriptionT>(value)); return *this;}
    ///@}
  private:

    ColumnDataType m_dataType{ColumnDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnDescription;
    bool m_columnDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
