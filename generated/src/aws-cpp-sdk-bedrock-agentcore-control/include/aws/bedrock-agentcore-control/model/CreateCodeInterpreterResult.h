/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/CodeInterpreterStatus.h>
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
  class CreateCodeInterpreterResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateCodeInterpreterResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateCodeInterpreterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateCodeInterpreterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the created code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterId() const { return m_codeInterpreterId; }
    template<typename CodeInterpreterIdT = Aws::String>
    void SetCodeInterpreterId(CodeInterpreterIdT&& value) { m_codeInterpreterIdHasBeenSet = true; m_codeInterpreterId = std::forward<CodeInterpreterIdT>(value); }
    template<typename CodeInterpreterIdT = Aws::String>
    CreateCodeInterpreterResult& WithCodeInterpreterId(CodeInterpreterIdT&& value) { SetCodeInterpreterId(std::forward<CodeInterpreterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterArn() const { return m_codeInterpreterArn; }
    template<typename CodeInterpreterArnT = Aws::String>
    void SetCodeInterpreterArn(CodeInterpreterArnT&& value) { m_codeInterpreterArnHasBeenSet = true; m_codeInterpreterArn = std::forward<CodeInterpreterArnT>(value); }
    template<typename CodeInterpreterArnT = Aws::String>
    CreateCodeInterpreterResult& WithCodeInterpreterArn(CodeInterpreterArnT&& value) { SetCodeInterpreterArn(std::forward<CodeInterpreterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateCodeInterpreterResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code interpreter.</p>
     */
    inline CodeInterpreterStatus GetStatus() const { return m_status; }
    inline void SetStatus(CodeInterpreterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateCodeInterpreterResult& WithStatus(CodeInterpreterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCodeInterpreterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterId;
    bool m_codeInterpreterIdHasBeenSet = false;

    Aws::String m_codeInterpreterArn;
    bool m_codeInterpreterArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    CodeInterpreterStatus m_status{CodeInterpreterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
