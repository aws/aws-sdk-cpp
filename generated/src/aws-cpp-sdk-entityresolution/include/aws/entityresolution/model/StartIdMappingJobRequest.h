﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
#include <aws/entityresolution/model/JobType.h>

#include <utility>

namespace Aws {
namespace EntityResolution {
namespace Model {

/**
 */
class StartIdMappingJobRequest : public EntityResolutionRequest {
 public:
  AWS_ENTITYRESOLUTION_API StartIdMappingJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartIdMappingJob"; }

  AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the ID mapping job to be retrieved.</p>
   */
  inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
  inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
  template <typename WorkflowNameT = Aws::String>
  void SetWorkflowName(WorkflowNameT&& value) {
    m_workflowNameHasBeenSet = true;
    m_workflowName = std::forward<WorkflowNameT>(value);
  }
  template <typename WorkflowNameT = Aws::String>
  StartIdMappingJobRequest& WithWorkflowName(WorkflowNameT&& value) {
    SetWorkflowName(std::forward<WorkflowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>OutputSource</code> objects.</p>
   */
  inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
  inline bool OutputSourceConfigHasBeenSet() const { return m_outputSourceConfigHasBeenSet; }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
  void SetOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig = std::forward<OutputSourceConfigT>(value);
  }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
  StartIdMappingJobRequest& WithOutputSourceConfig(OutputSourceConfigT&& value) {
    SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  template <typename OutputSourceConfigT = IdMappingJobOutputSource>
  StartIdMappingJobRequest& AddOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The job type for the ID mapping job.</p> <p>If the <code>jobType</code>
   * value is set to <code>INCREMENTAL</code>, only new or changed data is processed
   * since the last job run. This is the default value if the
   * <code>CreateIdMappingWorkflow</code> API is configured with an
   * <code>incrementalRunConfig</code>.</p> <p>If the <code>jobType</code> value is
   * set to <code>BATCH</code>, all data is processed from the input source,
   * regardless of previous job runs. This is the default value if the
   * <code>CreateIdMappingWorkflow</code> API isn't configured with an
   * <code>incrementalRunConfig</code>.</p> <p>If the <code>jobType</code> value is
   * set to <code>DELETE_ONLY</code>, only deletion requests from
   * <code>BatchDeleteUniqueIds</code> are processed.</p>
   */
  inline JobType GetJobType() const { return m_jobType; }
  inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
  inline void SetJobType(JobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline StartIdMappingJobRequest& WithJobType(JobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowName;
  bool m_workflowNameHasBeenSet = false;

  Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;
  bool m_outputSourceConfigHasBeenSet = false;

  JobType m_jobType{JobType::NOT_SET};
  bool m_jobTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
