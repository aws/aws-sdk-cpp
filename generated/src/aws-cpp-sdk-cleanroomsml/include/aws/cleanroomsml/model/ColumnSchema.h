/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ColumnType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Metadata for a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ColumnSchema">AWS
   * API Reference</a></p>
   */
  class ColumnSchema
  {
  public:
    AWS_CLEANROOMSML_API ColumnSchema();
    AWS_CLEANROOMSML_API ColumnSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ColumnSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ColumnSchema& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnSchema& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnSchema& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The data type of column.</p>
     */
    inline const Aws::Vector<ColumnType>& GetColumnTypes() const{ return m_columnTypes; }

    /**
     * <p>The data type of column.</p>
     */
    inline bool ColumnTypesHasBeenSet() const { return m_columnTypesHasBeenSet; }

    /**
     * <p>The data type of column.</p>
     */
    inline void SetColumnTypes(const Aws::Vector<ColumnType>& value) { m_columnTypesHasBeenSet = true; m_columnTypes = value; }

    /**
     * <p>The data type of column.</p>
     */
    inline void SetColumnTypes(Aws::Vector<ColumnType>&& value) { m_columnTypesHasBeenSet = true; m_columnTypes = std::move(value); }

    /**
     * <p>The data type of column.</p>
     */
    inline ColumnSchema& WithColumnTypes(const Aws::Vector<ColumnType>& value) { SetColumnTypes(value); return *this;}

    /**
     * <p>The data type of column.</p>
     */
    inline ColumnSchema& WithColumnTypes(Aws::Vector<ColumnType>&& value) { SetColumnTypes(std::move(value)); return *this;}

    /**
     * <p>The data type of column.</p>
     */
    inline ColumnSchema& AddColumnTypes(const ColumnType& value) { m_columnTypesHasBeenSet = true; m_columnTypes.push_back(value); return *this; }

    /**
     * <p>The data type of column.</p>
     */
    inline ColumnSchema& AddColumnTypes(ColumnType&& value) { m_columnTypesHasBeenSet = true; m_columnTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::Vector<ColumnType> m_columnTypes;
    bool m_columnTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
