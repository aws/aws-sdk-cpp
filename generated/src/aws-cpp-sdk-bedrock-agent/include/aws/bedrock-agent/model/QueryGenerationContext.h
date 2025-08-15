/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/QueryGenerationTable.h>
#include <aws/bedrock-agent/model/CuratedQuery.h>
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
   * <p>&gt;Contains configurations for context to use during query
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/QueryGenerationContext">AWS
   * API Reference</a></p>
   */
  class QueryGenerationContext
  {
  public:
    AWS_BEDROCKAGENT_API QueryGenerationContext() = default;
    AWS_BEDROCKAGENT_API QueryGenerationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API QueryGenerationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which defines information about a table in the
     * database.</p>
     */
    inline const Aws::Vector<QueryGenerationTable>& GetTables() const { return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    template<typename TablesT = Aws::Vector<QueryGenerationTable>>
    void SetTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables = std::forward<TablesT>(value); }
    template<typename TablesT = Aws::Vector<QueryGenerationTable>>
    QueryGenerationContext& WithTables(TablesT&& value) { SetTables(std::forward<TablesT>(value)); return *this;}
    template<typename TablesT = QueryGenerationTable>
    QueryGenerationContext& AddTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables.emplace_back(std::forward<TablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which defines information about example queries
     * to help the query engine generate appropriate SQL queries.</p>
     */
    inline const Aws::Vector<CuratedQuery>& GetCuratedQueries() const { return m_curatedQueries; }
    inline bool CuratedQueriesHasBeenSet() const { return m_curatedQueriesHasBeenSet; }
    template<typename CuratedQueriesT = Aws::Vector<CuratedQuery>>
    void SetCuratedQueries(CuratedQueriesT&& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries = std::forward<CuratedQueriesT>(value); }
    template<typename CuratedQueriesT = Aws::Vector<CuratedQuery>>
    QueryGenerationContext& WithCuratedQueries(CuratedQueriesT&& value) { SetCuratedQueries(std::forward<CuratedQueriesT>(value)); return *this;}
    template<typename CuratedQueriesT = CuratedQuery>
    QueryGenerationContext& AddCuratedQueries(CuratedQueriesT&& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries.emplace_back(std::forward<CuratedQueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<QueryGenerationTable> m_tables;
    bool m_tablesHasBeenSet = false;

    Aws::Vector<CuratedQuery> m_curatedQueries;
    bool m_curatedQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
