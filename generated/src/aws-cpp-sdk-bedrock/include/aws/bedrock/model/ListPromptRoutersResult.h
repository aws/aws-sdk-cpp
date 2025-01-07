/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/PromptRouterSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListPromptRoutersResult
  {
  public:
    AWS_BEDROCK_API ListPromptRoutersResult();
    AWS_BEDROCK_API ListPromptRoutersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListPromptRoutersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of prompt router summaries.</p>
     */
    inline const Aws::Vector<PromptRouterSummary>& GetPromptRouterSummaries() const{ return m_promptRouterSummaries; }
    inline void SetPromptRouterSummaries(const Aws::Vector<PromptRouterSummary>& value) { m_promptRouterSummaries = value; }
    inline void SetPromptRouterSummaries(Aws::Vector<PromptRouterSummary>&& value) { m_promptRouterSummaries = std::move(value); }
    inline ListPromptRoutersResult& WithPromptRouterSummaries(const Aws::Vector<PromptRouterSummary>& value) { SetPromptRouterSummaries(value); return *this;}
    inline ListPromptRoutersResult& WithPromptRouterSummaries(Aws::Vector<PromptRouterSummary>&& value) { SetPromptRouterSummaries(std::move(value)); return *this;}
    inline ListPromptRoutersResult& AddPromptRouterSummaries(const PromptRouterSummary& value) { m_promptRouterSummaries.push_back(value); return *this; }
    inline ListPromptRoutersResult& AddPromptRouterSummaries(PromptRouterSummary&& value) { m_promptRouterSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPromptRoutersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPromptRoutersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPromptRoutersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPromptRoutersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPromptRoutersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPromptRoutersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PromptRouterSummary> m_promptRouterSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
