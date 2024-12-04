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
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult();
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GenerateQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which defines a generated query that can
     * correspond to the natural language queries.</p>
     */
    inline const Aws::Vector<GeneratedQuery>& GetQueries() const{ return m_queries; }
    inline void SetQueries(const Aws::Vector<GeneratedQuery>& value) { m_queries = value; }
    inline void SetQueries(Aws::Vector<GeneratedQuery>&& value) { m_queries = std::move(value); }
    inline GenerateQueryResult& WithQueries(const Aws::Vector<GeneratedQuery>& value) { SetQueries(value); return *this;}
    inline GenerateQueryResult& WithQueries(Aws::Vector<GeneratedQuery>&& value) { SetQueries(std::move(value)); return *this;}
    inline GenerateQueryResult& AddQueries(const GeneratedQuery& value) { m_queries.push_back(value); return *this; }
    inline GenerateQueryResult& AddQueries(GeneratedQuery&& value) { m_queries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GeneratedQuery> m_queries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
