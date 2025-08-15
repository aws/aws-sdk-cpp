/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IncludeExclude.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/QueryGenerationColumn.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about a table for the query engine to
   * consider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/QueryGenerationTable">AWS
   * API Reference</a></p>
   */
  class QueryGenerationTable
  {
  public:
    AWS_BEDROCKAGENT_API QueryGenerationTable() = default;
    AWS_BEDROCKAGENT_API QueryGenerationTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API QueryGenerationTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the table for which the other fields in this object apply.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QueryGenerationTable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the table that helps the query engine understand the
     * contents of the table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    QueryGenerationTable& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include or exclude the table during query generation. If
     * you specify <code>EXCLUDE</code>, the table will be ignored. If you specify
     * <code>INCLUDE</code>, all other tables will be ignored.</p>
     */
    inline IncludeExclude GetInclusion() const { return m_inclusion; }
    inline bool InclusionHasBeenSet() const { return m_inclusionHasBeenSet; }
    inline void SetInclusion(IncludeExclude value) { m_inclusionHasBeenSet = true; m_inclusion = value; }
    inline QueryGenerationTable& WithInclusion(IncludeExclude value) { SetInclusion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which defines information about a column in the
     * table.</p>
     */
    inline const Aws::Vector<QueryGenerationColumn>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<QueryGenerationColumn>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<QueryGenerationColumn>>
    QueryGenerationTable& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = QueryGenerationColumn>
    QueryGenerationTable& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IncludeExclude m_inclusion{IncludeExclude::NOT_SET};
    bool m_inclusionHasBeenSet = false;

    Aws::Vector<QueryGenerationColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
