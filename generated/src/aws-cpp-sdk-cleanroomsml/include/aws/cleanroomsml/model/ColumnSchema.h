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
    AWS_CLEANROOMSML_API ColumnSchema() = default;
    AWS_CLEANROOMSML_API ColumnSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ColumnSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    ColumnSchema& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of column.</p>
     */
    inline const Aws::Vector<ColumnType>& GetColumnTypes() const { return m_columnTypes; }
    inline bool ColumnTypesHasBeenSet() const { return m_columnTypesHasBeenSet; }
    template<typename ColumnTypesT = Aws::Vector<ColumnType>>
    void SetColumnTypes(ColumnTypesT&& value) { m_columnTypesHasBeenSet = true; m_columnTypes = std::forward<ColumnTypesT>(value); }
    template<typename ColumnTypesT = Aws::Vector<ColumnType>>
    ColumnSchema& WithColumnTypes(ColumnTypesT&& value) { SetColumnTypes(std::forward<ColumnTypesT>(value)); return *this;}
    inline ColumnSchema& AddColumnTypes(ColumnType value) { m_columnTypesHasBeenSet = true; m_columnTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::Vector<ColumnType> m_columnTypes;
    bool m_columnTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
