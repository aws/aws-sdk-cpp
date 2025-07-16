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
  class DeleteEventResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API DeleteEventResult() = default;
    AWS_BEDROCKAGENTCORE_API DeleteEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API DeleteEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the event that was deleted.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    DeleteEventResult& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
