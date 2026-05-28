/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationJobStatus.h>
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
namespace Bedrock {
namespace Model {

/**
 * <p>Contains a summary of an advanced prompt optimization job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AdvancedPromptOptimizationJobSummary">AWS
 * API Reference</a></p>
 */
class AdvancedPromptOptimizationJobSummary {
 public:
  AWS_BEDROCK_API AdvancedPromptOptimizationJobSummary() = default;
  AWS_BEDROCK_API AdvancedPromptOptimizationJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AdvancedPromptOptimizationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  AdvancedPromptOptimizationJobSummary& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  AdvancedPromptOptimizationJobSummary& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the job.</p>
   */
  inline AdvancedPromptOptimizationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(AdvancedPromptOptimizationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline AdvancedPromptOptimizationJobSummary& WithJobStatus(AdvancedPromptOptimizationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  AdvancedPromptOptimizationJobSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  AdvancedPromptOptimizationJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  Aws::String m_jobName;

  AdvancedPromptOptimizationJobStatus m_jobStatus{AdvancedPromptOptimizationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_jobArnHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
