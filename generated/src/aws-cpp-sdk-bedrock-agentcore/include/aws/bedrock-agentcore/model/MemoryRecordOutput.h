/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/MemoryRecordStatus.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Output information returned after processing a memory record
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecordOutput">AWS
   * API Reference</a></p>
   */
  class MemoryRecordOutput
  {
  public:
    AWS_BEDROCKAGENTCORE_API MemoryRecordOutput() = default;
    AWS_BEDROCKAGENTCORE_API MemoryRecordOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API MemoryRecordOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID associated to the memory record.</p>
     */
    inline const Aws::String& GetMemoryRecordId() const { return m_memoryRecordId; }
    inline bool MemoryRecordIdHasBeenSet() const { return m_memoryRecordIdHasBeenSet; }
    template<typename MemoryRecordIdT = Aws::String>
    void SetMemoryRecordId(MemoryRecordIdT&& value) { m_memoryRecordIdHasBeenSet = true; m_memoryRecordId = std::forward<MemoryRecordIdT>(value); }
    template<typename MemoryRecordIdT = Aws::String>
    MemoryRecordOutput& WithMemoryRecordId(MemoryRecordIdT&& value) { SetMemoryRecordId(std::forward<MemoryRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the memory record operation (e.g., SUCCEEDED, FAILED).</p>
     */
    inline MemoryRecordStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemoryRecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemoryRecordOutput& WithStatus(MemoryRecordStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided identifier that was used to track this record
     * operation.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    MemoryRecordOutput& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned when the memory record operation fails.</p>
     */
    inline int GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline MemoryRecordOutput& WithErrorCode(int value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable error message describing why the memory record operation
     * failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    MemoryRecordOutput& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryRecordId;
    bool m_memoryRecordIdHasBeenSet = false;

    MemoryRecordStatus m_status{MemoryRecordStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    int m_errorCode{0};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
