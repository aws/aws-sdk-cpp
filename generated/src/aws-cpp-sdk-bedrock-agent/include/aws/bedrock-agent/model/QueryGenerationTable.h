/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IncludeExclude.h>
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
    AWS_BEDROCKAGENT_API QueryGenerationTable();
    AWS_BEDROCKAGENT_API QueryGenerationTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API QueryGenerationTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which defines information about a column in the
     * table.</p>
     */
    inline const Aws::Vector<QueryGenerationColumn>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<QueryGenerationColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<QueryGenerationColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline QueryGenerationTable& WithColumns(const Aws::Vector<QueryGenerationColumn>& value) { SetColumns(value); return *this;}
    inline QueryGenerationTable& WithColumns(Aws::Vector<QueryGenerationColumn>&& value) { SetColumns(std::move(value)); return *this;}
    inline QueryGenerationTable& AddColumns(const QueryGenerationColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline QueryGenerationTable& AddColumns(QueryGenerationColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the table that helps the query engine understand the
     * contents of the table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline QueryGenerationTable& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline QueryGenerationTable& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline QueryGenerationTable& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include or exclude the table during query generation. If
     * you specify <code>EXCLUDE</code>, the table will be ignored. If you specify
     * <code>INCLUDE</code>, all other tables will be ignored.</p>
     */
    inline const IncludeExclude& GetInclusion() const{ return m_inclusion; }
    inline bool InclusionHasBeenSet() const { return m_inclusionHasBeenSet; }
    inline void SetInclusion(const IncludeExclude& value) { m_inclusionHasBeenSet = true; m_inclusion = value; }
    inline void SetInclusion(IncludeExclude&& value) { m_inclusionHasBeenSet = true; m_inclusion = std::move(value); }
    inline QueryGenerationTable& WithInclusion(const IncludeExclude& value) { SetInclusion(value); return *this;}
    inline QueryGenerationTable& WithInclusion(IncludeExclude&& value) { SetInclusion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which the other fields in this object apply.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline QueryGenerationTable& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline QueryGenerationTable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline QueryGenerationTable& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::Vector<QueryGenerationColumn> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IncludeExclude m_inclusion;
    bool m_inclusionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
