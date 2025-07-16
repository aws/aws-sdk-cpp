/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class StopCodeInterpreterSessionResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API StopCodeInterpreterSessionResult() = default;
    AWS_BEDROCKAGENTCORE_API StopCodeInterpreterSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API StopCodeInterpreterSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { m_codeInterpreterIdentifierHasBeenSet = true; m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value); }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    StopCodeInterpreterSessionResult& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the code interpreter session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StopCodeInterpreterSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter session was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    StopCodeInterpreterSessionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopCodeInterpreterSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterIdentifier;
    bool m_codeInterpreterIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
