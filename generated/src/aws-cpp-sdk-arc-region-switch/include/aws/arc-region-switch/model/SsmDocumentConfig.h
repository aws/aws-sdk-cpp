/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/SsmTarget.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>The Systems Manager document to run and the managed nodes to target for a
 * single Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/SsmDocumentConfig">AWS
 * API Reference</a></p>
 */
class SsmDocumentConfig {
 public:
  AWS_ARCREGIONSWITCH_API SsmDocumentConfig() = default;
  AWS_ARCREGIONSWITCH_API SsmDocumentConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API SsmDocumentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cross-account role for the configuration.</p>
   */
  inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
  inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
  template <typename CrossAccountRoleT = Aws::String>
  void SetCrossAccountRole(CrossAccountRoleT&& value) {
    m_crossAccountRoleHasBeenSet = true;
    m_crossAccountRole = std::forward<CrossAccountRoleT>(value);
  }
  template <typename CrossAccountRoleT = Aws::String>
  SsmDocumentConfig& WithCrossAccountRole(CrossAccountRoleT&& value) {
    SetCrossAccountRole(std::forward<CrossAccountRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID (secret key) for the configuration.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  SsmDocumentConfig& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Systems Manager document to run.</p>
   */
  inline const Aws::String& GetDocumentArn() const { return m_documentArn; }
  inline bool DocumentArnHasBeenSet() const { return m_documentArnHasBeenSet; }
  template <typename DocumentArnT = Aws::String>
  void SetDocumentArn(DocumentArnT&& value) {
    m_documentArnHasBeenSet = true;
    m_documentArn = std::forward<DocumentArnT>(value);
  }
  template <typename DocumentArnT = Aws::String>
  SsmDocumentConfig& WithDocumentArn(DocumentArnT&& value) {
    SetDocumentArn(std::forward<DocumentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target filters that Systems Manager resolves to managed nodes when the
   * command runs. To target specific managed nodes, use the <code>InstanceIds</code>
   * key. You can specify up to five target filters.</p>
   */
  inline const Aws::Vector<SsmTarget>& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = Aws::Vector<SsmTarget>>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = Aws::Vector<SsmTarget>>
  SsmDocumentConfig& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  template <typename TargetsT = SsmTarget>
  SsmDocumentConfig& AddTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets.emplace_back(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters that are passed to this Region's Systems Manager document. You
   * set parameters for each document, so each Region can run its document with its
   * own parameters.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  SsmDocumentConfig& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
  SsmDocumentConfig& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Systems Manager document to run for this Region. When you
   * omit it, Systems Manager runs the document's default version.</p>
   */
  inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
  inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
  template <typename DocumentVersionT = Aws::String>
  void SetDocumentVersion(DocumentVersionT&& value) {
    m_documentVersionHasBeenSet = true;
    m_documentVersion = std::forward<DocumentVersionT>(value);
  }
  template <typename DocumentVersionT = Aws::String>
  SsmDocumentConfig& WithDocumentVersion(DocumentVersionT&& value) {
    SetDocumentVersion(std::forward<DocumentVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  Aws::String m_documentArn;

  Aws::Vector<SsmTarget> m_targets;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;

  Aws::String m_documentVersion;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_documentArnHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_documentVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
