/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/AutomationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation-runtime/model/OutputConfiguration.h>
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
namespace BedrockDataAutomationRuntime
{
namespace Model
{
  /**
   * <p>Response of GetDataAutomationStatus API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/GetDataAutomationStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetDataAutomationStatusResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Job Status.</p>
     */
    inline AutomationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(AutomationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataAutomationStatusResult& WithStatus(AutomationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error Type.</p>
     */
    inline const Aws::String& GetErrorType() const { return m_errorType; }
    template<typename ErrorTypeT = Aws::String>
    void SetErrorType(ErrorTypeT&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::forward<ErrorTypeT>(value); }
    template<typename ErrorTypeT = Aws::String>
    GetDataAutomationStatusResult& WithErrorType(ErrorTypeT&& value) { SetErrorType(std::forward<ErrorTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error Message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetDataAutomationStatusResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration.</p>
     */
    inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    template<typename OutputConfigurationT = OutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = OutputConfiguration>
    GetDataAutomationStatusResult& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataAutomationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutomationJobStatus m_status{AutomationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    OutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
