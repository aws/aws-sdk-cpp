/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContentColumnType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about a column with a cell to return in
   * retrieval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultContentColumn">AWS
   * API Reference</a></p>
   */
  class RetrievalResultContentColumn
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    RetrievalResultContentColumn& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in the column.</p>
     */
    inline const Aws::String& GetColumnValue() const { return m_columnValue; }
    inline bool ColumnValueHasBeenSet() const { return m_columnValueHasBeenSet; }
    template<typename ColumnValueT = Aws::String>
    void SetColumnValue(ColumnValueT&& value) { m_columnValueHasBeenSet = true; m_columnValue = std::forward<ColumnValueT>(value); }
    template<typename ColumnValueT = Aws::String>
    RetrievalResultContentColumn& WithColumnValue(ColumnValueT&& value) { SetColumnValue(std::forward<ColumnValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the value.</p>
     */
    inline RetrievalResultContentColumnType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RetrievalResultContentColumnType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RetrievalResultContentColumn& WithType(RetrievalResultContentColumnType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnValue;
    bool m_columnValueHasBeenSet = false;

    RetrievalResultContentColumnType m_type{RetrievalResultContentColumnType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
