/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/bedrock-data-automation/model/LibraryIngestionJobOperationType.h>
#include <aws/bedrock-data-automation/model/LibraryIngestionJobStatus.h>
#include <aws/bedrock-data-automation/model/OutputConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Contains the information of a DataAutomationLibraryIngestionJob</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibraryIngestionJob">AWS
 * API Reference</a></p>
 */
class DataAutomationLibraryIngestionJob {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJob() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJob(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the DataAutomationLibraryIngestionJob</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  DataAutomationLibraryIngestionJob& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the DataAutomationLibraryIngestionJob was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DataAutomationLibraryIngestionJob& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type associated with DataAutomationLibraryIngestionJob</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline DataAutomationLibraryIngestionJob& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation associated with DataAutomationLibraryIngestionJob</p>
   */
  inline LibraryIngestionJobOperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(LibraryIngestionJobOperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline DataAutomationLibraryIngestionJob& WithOperationType(LibraryIngestionJobOperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the DataAutomationLibraryIngestionJob</p>
   */
  inline LibraryIngestionJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(LibraryIngestionJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline DataAutomationLibraryIngestionJob& WithJobStatus(LibraryIngestionJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration of DataAutomationLibraryIngestionJob</p>
   */
  inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = OutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = OutputConfiguration>
  DataAutomationLibraryIngestionJob& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the DataAutomationLibraryIngestionJob was completed</p>
   */
  inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
  inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  void SetCompletionTime(CompletionTimeT&& value) {
    m_completionTimeHasBeenSet = true;
    m_completionTime = std::forward<CompletionTimeT>(value);
  }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  DataAutomationLibraryIngestionJob& WithCompletionTime(CompletionTimeT&& value) {
    SetCompletionTime(std::forward<CompletionTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error message</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  DataAutomationLibraryIngestionJob& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error type</p>
   */
  inline const Aws::String& GetErrorType() const { return m_errorType; }
  inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
  template <typename ErrorTypeT = Aws::String>
  void SetErrorType(ErrorTypeT&& value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = std::forward<ErrorTypeT>(value);
  }
  template <typename ErrorTypeT = Aws::String>
  DataAutomationLibraryIngestionJob& WithErrorType(ErrorTypeT&& value) {
    SetErrorType(std::forward<ErrorTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  Aws::Utils::DateTime m_creationTime{};

  EntityType m_entityType{EntityType::NOT_SET};

  LibraryIngestionJobOperationType m_operationType{LibraryIngestionJobOperationType::NOT_SET};

  LibraryIngestionJobStatus m_jobStatus{LibraryIngestionJobStatus::NOT_SET};

  OutputConfiguration m_outputConfiguration;

  Aws::Utils::DateTime m_completionTime{};

  Aws::String m_errorMessage;

  Aws::String m_errorType;
  bool m_jobArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_completionTimeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_errorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
