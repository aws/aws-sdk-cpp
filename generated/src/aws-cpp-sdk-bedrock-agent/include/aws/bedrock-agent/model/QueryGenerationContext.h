/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/CuratedQuery.h>
#include <aws/bedrock-agent/model/QueryGenerationTable.h>
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
    AWS_BEDROCKAGENT_API QueryGenerationContext();
    AWS_BEDROCKAGENT_API QueryGenerationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API QueryGenerationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which defines information about example queries
     * to help the query engine generate appropriate SQL queries.</p>
     */
    inline const Aws::Vector<CuratedQuery>& GetCuratedQueries() const{ return m_curatedQueries; }
    inline bool CuratedQueriesHasBeenSet() const { return m_curatedQueriesHasBeenSet; }
    inline void SetCuratedQueries(const Aws::Vector<CuratedQuery>& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries = value; }
    inline void SetCuratedQueries(Aws::Vector<CuratedQuery>&& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries = std::move(value); }
    inline QueryGenerationContext& WithCuratedQueries(const Aws::Vector<CuratedQuery>& value) { SetCuratedQueries(value); return *this;}
    inline QueryGenerationContext& WithCuratedQueries(Aws::Vector<CuratedQuery>&& value) { SetCuratedQueries(std::move(value)); return *this;}
    inline QueryGenerationContext& AddCuratedQueries(const CuratedQuery& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries.push_back(value); return *this; }
    inline QueryGenerationContext& AddCuratedQueries(CuratedQuery&& value) { m_curatedQueriesHasBeenSet = true; m_curatedQueries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which defines information about a table in the
     * database.</p>
     */
    inline const Aws::Vector<QueryGenerationTable>& GetTables() const{ return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    inline void SetTables(const Aws::Vector<QueryGenerationTable>& value) { m_tablesHasBeenSet = true; m_tables = value; }
    inline void SetTables(Aws::Vector<QueryGenerationTable>&& value) { m_tablesHasBeenSet = true; m_tables = std::move(value); }
    inline QueryGenerationContext& WithTables(const Aws::Vector<QueryGenerationTable>& value) { SetTables(value); return *this;}
    inline QueryGenerationContext& WithTables(Aws::Vector<QueryGenerationTable>&& value) { SetTables(std::move(value)); return *this;}
    inline QueryGenerationContext& AddTables(const QueryGenerationTable& value) { m_tablesHasBeenSet = true; m_tables.push_back(value); return *this; }
    inline QueryGenerationContext& AddTables(QueryGenerationTable&& value) { m_tablesHasBeenSet = true; m_tables.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CuratedQuery> m_curatedQueries;
    bool m_curatedQueriesHasBeenSet = false;

    Aws::Vector<QueryGenerationTable> m_tables;
    bool m_tablesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
