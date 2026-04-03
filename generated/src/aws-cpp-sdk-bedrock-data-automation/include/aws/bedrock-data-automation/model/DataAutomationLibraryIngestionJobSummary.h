/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/bedrock-data-automation/model/LibraryIngestionJobOperationType.h>
#include <aws/bedrock-data-automation/model/LibraryIngestionJobStatus.h>
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
 * <p>Summary of a DataAutomationLibraryIngestionJob</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibraryIngestionJobSummary">AWS
 * API Reference</a></p>
 */
class DataAutomationLibraryIngestionJobSummary {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJobSummary() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryIngestionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  DataAutomationLibraryIngestionJobSummary& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline LibraryIngestionJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(LibraryIngestionJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline DataAutomationLibraryIngestionJobSummary& WithJobStatus(LibraryIngestionJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline DataAutomationLibraryIngestionJobSummary& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{

  inline LibraryIngestionJobOperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(LibraryIngestionJobOperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline DataAutomationLibraryIngestionJobSummary& WithOperationType(LibraryIngestionJobOperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DataAutomationLibraryIngestionJobSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
  inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  void SetCompletionTime(CompletionTimeT&& value) {
    m_completionTimeHasBeenSet = true;
    m_completionTime = std::forward<CompletionTimeT>(value);
  }
  template <typename CompletionTimeT = Aws::Utils::DateTime>
  DataAutomationLibraryIngestionJobSummary& WithCompletionTime(CompletionTimeT&& value) {
    SetCompletionTime(std::forward<CompletionTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  LibraryIngestionJobStatus m_jobStatus{LibraryIngestionJobStatus::NOT_SET};

  EntityType m_entityType{EntityType::NOT_SET};

  LibraryIngestionJobOperationType m_operationType{LibraryIngestionJobOperationType::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_completionTime{};
  bool m_jobArnHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_completionTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
