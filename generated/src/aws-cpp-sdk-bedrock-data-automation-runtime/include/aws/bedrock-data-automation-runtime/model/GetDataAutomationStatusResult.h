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
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Job Status.</p>
     */
    inline const AutomationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AutomationJobStatus& value) { m_status = value; }
    inline void SetStatus(AutomationJobStatus&& value) { m_status = std::move(value); }
    inline GetDataAutomationStatusResult& WithStatus(const AutomationJobStatus& value) { SetStatus(value); return *this;}
    inline GetDataAutomationStatusResult& WithStatus(AutomationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error Type.</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }
    inline void SetErrorType(const Aws::String& value) { m_errorType = value; }
    inline void SetErrorType(Aws::String&& value) { m_errorType = std::move(value); }
    inline void SetErrorType(const char* value) { m_errorType.assign(value); }
    inline GetDataAutomationStatusResult& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}
    inline GetDataAutomationStatusResult& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}
    inline GetDataAutomationStatusResult& WithErrorType(const char* value) { SetErrorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error Message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetDataAutomationStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetDataAutomationStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetDataAutomationStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration.</p>
     */
    inline const OutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline void SetOutputConfiguration(const OutputConfiguration& value) { m_outputConfiguration = value; }
    inline void SetOutputConfiguration(OutputConfiguration&& value) { m_outputConfiguration = std::move(value); }
    inline GetDataAutomationStatusResult& WithOutputConfiguration(const OutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline GetDataAutomationStatusResult& WithOutputConfiguration(OutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataAutomationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataAutomationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataAutomationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutomationJobStatus m_status;

    Aws::String m_errorType;

    Aws::String m_errorMessage;

    OutputConfiguration m_outputConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
