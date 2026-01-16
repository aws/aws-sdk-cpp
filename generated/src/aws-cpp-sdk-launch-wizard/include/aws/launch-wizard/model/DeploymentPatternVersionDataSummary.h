/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>Describes a deployment pattern version summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentPatternVersionDataSummary">AWS
 * API Reference</a></p>
 */
class DeploymentPatternVersionDataSummary {
 public:
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionDataSummary() = default;
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionDataSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the deployment pattern version.</p>
   */
  inline const Aws::String& GetDeploymentPatternVersionName() const { return m_deploymentPatternVersionName; }
  inline bool DeploymentPatternVersionNameHasBeenSet() const { return m_deploymentPatternVersionNameHasBeenSet; }
  template <typename DeploymentPatternVersionNameT = Aws::String>
  void SetDeploymentPatternVersionName(DeploymentPatternVersionNameT&& value) {
    m_deploymentPatternVersionNameHasBeenSet = true;
    m_deploymentPatternVersionName = std::forward<DeploymentPatternVersionNameT>(value);
  }
  template <typename DeploymentPatternVersionNameT = Aws::String>
  DeploymentPatternVersionDataSummary& WithDeploymentPatternVersionName(DeploymentPatternVersionNameT&& value) {
    SetDeploymentPatternVersionName(std::forward<DeploymentPatternVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the deployment pattern version.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DeploymentPatternVersionDataSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the documentation for the deployment pattern version.</p>
   */
  inline const Aws::String& GetDocumentationUrl() const { return m_documentationUrl; }
  inline bool DocumentationUrlHasBeenSet() const { return m_documentationUrlHasBeenSet; }
  template <typename DocumentationUrlT = Aws::String>
  void SetDocumentationUrl(DocumentationUrlT&& value) {
    m_documentationUrlHasBeenSet = true;
    m_documentationUrl = std::forward<DocumentationUrlT>(value);
  }
  template <typename DocumentationUrlT = Aws::String>
  DeploymentPatternVersionDataSummary& WithDocumentationUrl(DocumentationUrlT&& value) {
    SetDocumentationUrl(std::forward<DocumentationUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workload.</p>
   */
  inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
  inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
  template <typename WorkloadNameT = Aws::String>
  void SetWorkloadName(WorkloadNameT&& value) {
    m_workloadNameHasBeenSet = true;
    m_workloadName = std::forward<WorkloadNameT>(value);
  }
  template <typename WorkloadNameT = Aws::String>
  DeploymentPatternVersionDataSummary& WithWorkloadName(WorkloadNameT&& value) {
    SetWorkloadName(std::forward<WorkloadNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment pattern.</p>
   */
  inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
  inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
  template <typename DeploymentPatternNameT = Aws::String>
  void SetDeploymentPatternName(DeploymentPatternNameT&& value) {
    m_deploymentPatternNameHasBeenSet = true;
    m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value);
  }
  template <typename DeploymentPatternNameT = Aws::String>
  DeploymentPatternVersionDataSummary& WithDeploymentPatternName(DeploymentPatternNameT&& value) {
    SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deploymentPatternVersionName;

  Aws::String m_description;

  Aws::String m_documentationUrl;

  Aws::String m_workloadName;

  Aws::String m_deploymentPatternName;
  bool m_deploymentPatternVersionNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_documentationUrlHasBeenSet = false;
  bool m_workloadNameHasBeenSet = false;
  bool m_deploymentPatternNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
