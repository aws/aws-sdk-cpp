/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/BlueprintOptimizationJobStatus.h>
#include <aws/bedrock-data-automation/model/BlueprintOptimizationOutputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {
/**
 * <p>Response of GetBlueprintOptimizationStatus API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetBlueprintOptimizationStatusResponse">AWS
 * API Reference</a></p>
 */
class GetBlueprintOptimizationStatusResult {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetBlueprintOptimizationStatusResult() = default;
  AWS_BEDROCKDATAAUTOMATION_API GetBlueprintOptimizationStatusResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATION_API GetBlueprintOptimizationStatusResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Job Status.</p>
   */
  inline BlueprintOptimizationJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(BlueprintOptimizationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBlueprintOptimizationStatusResult& WithStatus(BlueprintOptimizationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error Type.</p>
   */
  inline const Aws::String& GetErrorType() const { return m_errorType; }
  template <typename ErrorTypeT = Aws::String>
  void SetErrorType(ErrorTypeT&& value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = std::forward<ErrorTypeT>(value);
  }
  template <typename ErrorTypeT = Aws::String>
  GetBlueprintOptimizationStatusResult& WithErrorType(ErrorTypeT&& value) {
    SetErrorType(std::forward<ErrorTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error Message.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetBlueprintOptimizationStatusResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration.</p>
   */
  inline const BlueprintOptimizationOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  template <typename OutputConfigurationT = BlueprintOptimizationOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = BlueprintOptimizationOutputConfiguration>
  GetBlueprintOptimizationStatusResult& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetBlueprintOptimizationStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  BlueprintOptimizationJobStatus m_status{BlueprintOptimizationJobStatus::NOT_SET};

  Aws::String m_errorType;

  Aws::String m_errorMessage;

  BlueprintOptimizationOutputConfiguration m_outputConfiguration;

  Aws::String m_requestId;
  bool m_statusHasBeenSet = false;
  bool m_errorTypeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
