/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>One repository selected from a previously-created integration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentRepositorySource">AWS
 * API Reference</a></p>
 */
class EnvironmentRepositorySource {
 public:
  AWS_CONTINUUM_API EnvironmentRepositorySource() = default;
  AWS_CONTINUUM_API EnvironmentRepositorySource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentRepositorySource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Integration that provides the selected repository.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  EnvironmentRepositorySource& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Repository selected from that integration in owner/repository form.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  EnvironmentRepositorySource& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Branch used when a scan does not choose a more specific revision.</p>
   */
  inline const Aws::String& GetDefaultBranch() const { return m_defaultBranch; }
  inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
  template <typename DefaultBranchT = Aws::String>
  void SetDefaultBranch(DefaultBranchT&& value) {
    m_defaultBranchHasBeenSet = true;
    m_defaultBranch = std::forward<DefaultBranchT>(value);
  }
  template <typename DefaultBranchT = Aws::String>
  EnvironmentRepositorySource& WithDefaultBranch(DefaultBranchT&& value) {
    SetDefaultBranch(std::forward<DefaultBranchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_repository;

  Aws::String m_defaultBranch;
  bool m_integrationIdHasBeenSet = false;
  bool m_repositoryHasBeenSet = false;
  bool m_defaultBranchHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
