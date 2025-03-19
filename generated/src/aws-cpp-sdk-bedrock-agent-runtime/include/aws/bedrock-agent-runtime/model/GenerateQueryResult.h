/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GeneratedQuery.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{
  class GenerateQueryResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which defines a generated query that can
     * correspond to the natural language queries.</p>
     */
    inline const Aws::Vector<GeneratedQuery>& GetQueries() const { return m_queries; }
    template<typename QueriesT = Aws::Vector<GeneratedQuery>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<GeneratedQuery>>
    GenerateQueryResult& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = GeneratedQuery>
    GenerateQueryResult& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GeneratedQuery> m_queries;
    bool m_queriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
