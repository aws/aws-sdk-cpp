/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StopRuntimeSessionResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API StopRuntimeSessionResult() = default;
    AWS_BEDROCKAGENTCORE_API StopRuntimeSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API StopRuntimeSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the session that you requested to stop.</p>
     */
    inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
    template<typename RuntimeSessionIdT = Aws::String>
    void SetRuntimeSessionId(RuntimeSessionIdT&& value) { m_runtimeSessionIdHasBeenSet = true; m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value); }
    template<typename RuntimeSessionIdT = Aws::String>
    StopRuntimeSessionResult& WithRuntimeSessionId(RuntimeSessionIdT&& value) { SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the request to stop the session.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline StopRuntimeSessionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopRuntimeSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runtimeSessionId;
    bool m_runtimeSessionIdHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
