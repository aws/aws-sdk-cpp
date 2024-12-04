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
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContentColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline RetrievalResultContentColumn& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline RetrievalResultContentColumn& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline RetrievalResultContentColumn& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in the column.</p>
     */
    inline const Aws::String& GetColumnValue() const{ return m_columnValue; }
    inline bool ColumnValueHasBeenSet() const { return m_columnValueHasBeenSet; }
    inline void SetColumnValue(const Aws::String& value) { m_columnValueHasBeenSet = true; m_columnValue = value; }
    inline void SetColumnValue(Aws::String&& value) { m_columnValueHasBeenSet = true; m_columnValue = std::move(value); }
    inline void SetColumnValue(const char* value) { m_columnValueHasBeenSet = true; m_columnValue.assign(value); }
    inline RetrievalResultContentColumn& WithColumnValue(const Aws::String& value) { SetColumnValue(value); return *this;}
    inline RetrievalResultContentColumn& WithColumnValue(Aws::String&& value) { SetColumnValue(std::move(value)); return *this;}
    inline RetrievalResultContentColumn& WithColumnValue(const char* value) { SetColumnValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the value.</p>
     */
    inline const RetrievalResultContentColumnType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrievalResultContentColumnType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrievalResultContentColumnType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RetrievalResultContentColumn& WithType(const RetrievalResultContentColumnType& value) { SetType(value); return *this;}
    inline RetrievalResultContentColumn& WithType(RetrievalResultContentColumnType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnValue;
    bool m_columnValueHasBeenSet = false;

    RetrievalResultContentColumnType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
