/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingIncrementalRunConfig.h>
#include <aws/entityresolution/model/IdMappingTechniques.h>
#include <aws/entityresolution/model/IdMappingWorkflowInputSource.h>
#include <aws/entityresolution/model/IdMappingWorkflowOutputSource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EntityResolution {
namespace Model {
class CreateIdMappingWorkflowResult {
 public:
  AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult() = default;
  AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the workflow.</p>
   */
  inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
  template <typename WorkflowNameT = Aws::String>
  void SetWorkflowName(WorkflowNameT&& value) {
    m_workflowNameHasBeenSet = true;
    m_workflowName = std::forward<WorkflowNameT>(value);
  }
  template <typename WorkflowNameT = Aws::String>
  CreateIdMappingWorkflowResult& WithWorkflowName(WorkflowNameT&& value) {
    SetWorkflowName(std::forward<WorkflowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
   * <code>IDMappingWorkflow</code>.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  CreateIdMappingWorkflowResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the workflow.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateIdMappingWorkflowResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>InputSource</code> objects, which have the fields
   * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
   */
  inline const Aws::Vector<IdMappingWorkflowInputSource>& GetInputSourceConfig() const { return m_inputSourceConfig; }
  template <typename InputSourceConfigT = Aws::Vector<IdMappingWorkflowInputSource>>
  void SetInputSourceConfig(InputSourceConfigT&& value) {
    m_inputSourceConfigHasBeenSet = true;
    m_inputSourceConfig = std::forward<InputSourceConfigT>(value);
  }
  template <typename InputSourceConfigT = Aws::Vector<IdMappingWorkflowInputSource>>
  CreateIdMappingWorkflowResult& WithInputSourceConfig(InputSourceConfigT&& value) {
    SetInputSourceConfig(std::forward<InputSourceConfigT>(value));
    return *this;
  }
  template <typename InputSourceConfigT = IdMappingWorkflowInputSource>
  CreateIdMappingWorkflowResult& AddInputSourceConfig(InputSourceConfigT&& value) {
    m_inputSourceConfigHasBeenSet = true;
    m_inputSourceConfig.emplace_back(std::forward<InputSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
   * contains fields <code>outputS3Path</code> and <code>KMSArn</code>.</p>
   */
  inline const Aws::Vector<IdMappingWorkflowOutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingWorkflowOutputSource>>
  void SetOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig = std::forward<OutputSourceConfigT>(value);
  }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingWorkflowOutputSource>>
  CreateIdMappingWorkflowResult& WithOutputSourceConfig(OutputSourceConfigT&& value) {
    SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  template <typename OutputSourceConfigT = IdMappingWorkflowOutputSource>
  CreateIdMappingWorkflowResult& AddOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object which defines the ID mapping technique and any additional
   * configurations.</p>
   */
  inline const IdMappingTechniques& GetIdMappingTechniques() const { return m_idMappingTechniques; }
  template <typename IdMappingTechniquesT = IdMappingTechniques>
  void SetIdMappingTechniques(IdMappingTechniquesT&& value) {
    m_idMappingTechniquesHasBeenSet = true;
    m_idMappingTechniques = std::forward<IdMappingTechniquesT>(value);
  }
  template <typename IdMappingTechniquesT = IdMappingTechniques>
  CreateIdMappingWorkflowResult& WithIdMappingTechniques(IdMappingTechniquesT&& value) {
    SetIdMappingTechniques(std::forward<IdMappingTechniquesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The incremental run configuration for the ID mapping workflow.</p>
   */
  inline const IdMappingIncrementalRunConfig& GetIncrementalRunConfig() const { return m_incrementalRunConfig; }
  template <typename IncrementalRunConfigT = IdMappingIncrementalRunConfig>
  void SetIncrementalRunConfig(IncrementalRunConfigT&& value) {
    m_incrementalRunConfigHasBeenSet = true;
    m_incrementalRunConfig = std::forward<IncrementalRunConfigT>(value);
  }
  template <typename IncrementalRunConfigT = IdMappingIncrementalRunConfig>
  CreateIdMappingWorkflowResult& WithIncrementalRunConfig(IncrementalRunConfigT&& value) {
    SetIncrementalRunConfig(std::forward<IncrementalRunConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
   * this role to create resources on your behalf as part of workflow execution.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateIdMappingWorkflowResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
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
  CreateIdMappingWorkflowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowName;

  Aws::String m_workflowArn;

  Aws::String m_description;

  Aws::Vector<IdMappingWorkflowInputSource> m_inputSourceConfig;

  Aws::Vector<IdMappingWorkflowOutputSource> m_outputSourceConfig;

  IdMappingTechniques m_idMappingTechniques;

  IdMappingIncrementalRunConfig m_incrementalRunConfig;

  Aws::String m_roleArn;

  Aws::String m_requestId;
  bool m_workflowNameHasBeenSet = false;
  bool m_workflowArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_inputSourceConfigHasBeenSet = false;
  bool m_outputSourceConfigHasBeenSet = false;
  bool m_idMappingTechniquesHasBeenSet = false;
  bool m_incrementalRunConfigHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
