/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationInputConfig.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationJobStatus.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationOutputConfig.h>
#include <aws/bedrock/model/ModelConfiguration.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>Get Advanced Prompt Optimization Job Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAdvancedPromptOptimizationJobResponse">AWS
 * API Reference</a></p>
 */
class GetAdvancedPromptOptimizationJobResult {
 public:
  AWS_BEDROCK_API GetAdvancedPromptOptimizationJobResult() = default;
  AWS_BEDROCK_API GetAdvancedPromptOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API GetAdvancedPromptOptimizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the advanced prompt optimization job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  GetAdvancedPromptOptimizationJobResult& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the advanced prompt optimization job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  GetAdvancedPromptOptimizationJobResult& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the advanced prompt optimization job.</p>
   */
  inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
  template <typename JobDescriptionT = Aws::String>
  void SetJobDescription(JobDescriptionT&& value) {
    m_jobDescriptionHasBeenSet = true;
    m_jobDescription = std::forward<JobDescriptionT>(value);
  }
  template <typename JobDescriptionT = Aws::String>
  GetAdvancedPromptOptimizationJobResult& WithJobDescription(JobDescriptionT&& value) {
    SetJobDescription(std::forward<JobDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the advanced prompt optimization job.</p>
   */
  inline AdvancedPromptOptimizationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline void SetJobStatus(AdvancedPromptOptimizationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline GetAdvancedPromptOptimizationJobResult& WithJobStatus(AdvancedPromptOptimizationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input data configuration for the optimization job.</p>
   */
  inline const AdvancedPromptOptimizationInputConfig& GetInputConfig() const { return m_inputConfig; }
  template <typename InputConfigT = AdvancedPromptOptimizationInputConfig>
  void SetInputConfig(InputConfigT&& value) {
    m_inputConfigHasBeenSet = true;
    m_inputConfig = std::forward<InputConfigT>(value);
  }
  template <typename InputConfigT = AdvancedPromptOptimizationInputConfig>
  GetAdvancedPromptOptimizationJobResult& WithInputConfig(InputConfigT&& value) {
    SetInputConfig(std::forward<InputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output data configuration for the optimization job.</p>
   */
  inline const AdvancedPromptOptimizationOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  template <typename OutputConfigT = AdvancedPromptOptimizationOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AdvancedPromptOptimizationOutputConfig>
  GetAdvancedPromptOptimizationJobResult& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the output
   * data.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  GetAdvancedPromptOptimizationJobResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the advanced prompt optimization job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetAdvancedPromptOptimizationJobResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the advanced prompt optimization job was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  GetAdvancedPromptOptimizationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the job failed, a message describing the reason for the failure.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  GetAdvancedPromptOptimizationJobResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model configurations used in the optimization job.</p>
   */
  inline const Aws::Vector<ModelConfiguration>& GetModelConfigurations() const { return m_modelConfigurations; }
  template <typename ModelConfigurationsT = Aws::Vector<ModelConfiguration>>
  void SetModelConfigurations(ModelConfigurationsT&& value) {
    m_modelConfigurationsHasBeenSet = true;
    m_modelConfigurations = std::forward<ModelConfigurationsT>(value);
  }
  template <typename ModelConfigurationsT = Aws::Vector<ModelConfiguration>>
  GetAdvancedPromptOptimizationJobResult& WithModelConfigurations(ModelConfigurationsT&& value) {
    SetModelConfigurations(std::forward<ModelConfigurationsT>(value));
    return *this;
  }
  template <typename ModelConfigurationsT = ModelConfiguration>
  GetAdvancedPromptOptimizationJobResult& AddModelConfigurations(ModelConfigurationsT&& value) {
    m_modelConfigurationsHasBeenSet = true;
    m_modelConfigurations.emplace_back(std::forward<ModelConfigurationsT>(value));
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
  GetAdvancedPromptOptimizationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobArn;

  Aws::String m_jobName;

  Aws::String m_jobDescription;

  AdvancedPromptOptimizationJobStatus m_jobStatus{AdvancedPromptOptimizationJobStatus::NOT_SET};

  AdvancedPromptOptimizationInputConfig m_inputConfig;

  AdvancedPromptOptimizationOutputConfig m_outputConfig;

  Aws::String m_encryptionKeyArn;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_failureMessage;

  Aws::Vector<ModelConfiguration> m_modelConfigurations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobArnHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_jobDescriptionHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_inputConfigHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_modelConfigurationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
