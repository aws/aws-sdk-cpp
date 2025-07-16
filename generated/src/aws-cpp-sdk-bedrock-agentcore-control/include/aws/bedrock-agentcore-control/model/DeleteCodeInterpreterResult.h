/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CodeInterpreterStatus.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class DeleteCodeInterpreterResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API DeleteCodeInterpreterResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API DeleteCodeInterpreterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API DeleteCodeInterpreterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterId() const { return m_codeInterpreterId; }
    template<typename CodeInterpreterIdT = Aws::String>
    void SetCodeInterpreterId(CodeInterpreterIdT&& value) { m_codeInterpreterIdHasBeenSet = true; m_codeInterpreterId = std::forward<CodeInterpreterIdT>(value); }
    template<typename CodeInterpreterIdT = Aws::String>
    DeleteCodeInterpreterResult& WithCodeInterpreterId(CodeInterpreterIdT&& value) { SetCodeInterpreterId(std::forward<CodeInterpreterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code interpreter deletion.</p>
     */
    inline CodeInterpreterStatus GetStatus() const { return m_status; }
    inline void SetStatus(CodeInterpreterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteCodeInterpreterResult& WithStatus(CodeInterpreterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DeleteCodeInterpreterResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteCodeInterpreterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterId;
    bool m_codeInterpreterIdHasBeenSet = false;

    CodeInterpreterStatus m_status{CodeInterpreterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
