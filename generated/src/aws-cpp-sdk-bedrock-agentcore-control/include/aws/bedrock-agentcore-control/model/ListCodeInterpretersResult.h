/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CodeInterpreterSummary.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class ListCodeInterpretersResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListCodeInterpretersResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListCodeInterpretersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListCodeInterpretersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of code interpreter summaries.</p>
     */
    inline const Aws::Vector<CodeInterpreterSummary>& GetCodeInterpreterSummaries() const { return m_codeInterpreterSummaries; }
    template<typename CodeInterpreterSummariesT = Aws::Vector<CodeInterpreterSummary>>
    void SetCodeInterpreterSummaries(CodeInterpreterSummariesT&& value) { m_codeInterpreterSummariesHasBeenSet = true; m_codeInterpreterSummaries = std::forward<CodeInterpreterSummariesT>(value); }
    template<typename CodeInterpreterSummariesT = Aws::Vector<CodeInterpreterSummary>>
    ListCodeInterpretersResult& WithCodeInterpreterSummaries(CodeInterpreterSummariesT&& value) { SetCodeInterpreterSummaries(std::forward<CodeInterpreterSummariesT>(value)); return *this;}
    template<typename CodeInterpreterSummariesT = CodeInterpreterSummary>
    ListCodeInterpretersResult& AddCodeInterpreterSummaries(CodeInterpreterSummariesT&& value) { m_codeInterpreterSummariesHasBeenSet = true; m_codeInterpreterSummaries.emplace_back(std::forward<CodeInterpreterSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeInterpretersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeInterpretersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeInterpreterSummary> m_codeInterpreterSummaries;
    bool m_codeInterpreterSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
