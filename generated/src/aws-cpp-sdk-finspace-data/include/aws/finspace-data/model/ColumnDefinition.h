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
    AWS_FINSPACEDATA_API ColumnDefinition();
    AWS_FINSPACEDATA_API ColumnDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ColumnDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const ColumnDataType& GetDataType() const{ return m_dataType; }

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
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

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
    inline void SetDataType(const ColumnDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

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
    inline void SetDataType(ColumnDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

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
    inline ColumnDefinition& WithDataType(const ColumnDataType& value) { SetDataType(value); return *this;}

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
    inline ColumnDefinition& WithDataType(ColumnDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The name of a column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of a column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnDefinition& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnDefinition& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnDefinition& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>Description for a column.</p>
     */
    inline const Aws::String& GetColumnDescription() const{ return m_columnDescription; }

    /**
     * <p>Description for a column.</p>
     */
    inline bool ColumnDescriptionHasBeenSet() const { return m_columnDescriptionHasBeenSet; }

    /**
     * <p>Description for a column.</p>
     */
    inline void SetColumnDescription(const Aws::String& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = value; }

    /**
     * <p>Description for a column.</p>
     */
    inline void SetColumnDescription(Aws::String&& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = std::move(value); }

    /**
     * <p>Description for a column.</p>
     */
    inline void SetColumnDescription(const char* value) { m_columnDescriptionHasBeenSet = true; m_columnDescription.assign(value); }

    /**
     * <p>Description for a column.</p>
     */
    inline ColumnDefinition& WithColumnDescription(const Aws::String& value) { SetColumnDescription(value); return *this;}

    /**
     * <p>Description for a column.</p>
     */
    inline ColumnDefinition& WithColumnDescription(Aws::String&& value) { SetColumnDescription(std::move(value)); return *this;}

    /**
     * <p>Description for a column.</p>
     */
    inline ColumnDefinition& WithColumnDescription(const char* value) { SetColumnDescription(value); return *this;}

  private:

    ColumnDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnDescription;
    bool m_columnDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
