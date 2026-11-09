/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>External identity parameters for Google Cloud Storage.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/GoogleOidcConfig">AWS
 * API Reference</a></p>
 */
class GoogleOidcConfig {
 public:
  AWS_DATASYNC_API GoogleOidcConfig() = default;
  AWS_DATASYNC_API GoogleOidcConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API GoogleOidcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Human-readable project name (e.g. "my-project").</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  GoogleOidcConfig& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Numeric project ID as a string (e.g. "123456789").</p>
   */
  inline const Aws::String& GetProjectNumber() const { return m_projectNumber; }
  inline bool ProjectNumberHasBeenSet() const { return m_projectNumberHasBeenSet; }
  template <typename ProjectNumberT = Aws::String>
  void SetProjectNumber(ProjectNumberT&& value) {
    m_projectNumberHasBeenSet = true;
    m_projectNumber = std::forward<ProjectNumberT>(value);
  }
  template <typename ProjectNumberT = Aws::String>
  GoogleOidcConfig& WithProjectNumber(ProjectNumberT&& value) {
    SetProjectNumber(std::forward<ProjectNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable pool name (e.g. "my-pool").</p>
   */
  inline const Aws::String& GetIdentityPoolName() const { return m_identityPoolName; }
  inline bool IdentityPoolNameHasBeenSet() const { return m_identityPoolNameHasBeenSet; }
  template <typename IdentityPoolNameT = Aws::String>
  void SetIdentityPoolName(IdentityPoolNameT&& value) {
    m_identityPoolNameHasBeenSet = true;
    m_identityPoolName = std::forward<IdentityPoolNameT>(value);
  }
  template <typename IdentityPoolNameT = Aws::String>
  GoogleOidcConfig& WithIdentityPoolName(IdentityPoolNameT&& value) {
    SetIdentityPoolName(std::forward<IdentityPoolNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable provider name (e.g. "my-oidc-provider").</p>
   */
  inline const Aws::String& GetIdentityProviderName() const { return m_identityProviderName; }
  inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }
  template <typename IdentityProviderNameT = Aws::String>
  void SetIdentityProviderName(IdentityProviderNameT&& value) {
    m_identityProviderNameHasBeenSet = true;
    m_identityProviderName = std::forward<IdentityProviderNameT>(value);
  }
  template <typename IdentityProviderNameT = Aws::String>
  GoogleOidcConfig& WithIdentityProviderName(IdentityProviderNameT&& value) {
    SetIdentityProviderName(std::forward<IdentityProviderNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectName;

  Aws::String m_projectNumber;

  Aws::String m_identityPoolName;

  Aws::String m_identityProviderName;
  bool m_projectNameHasBeenSet = false;
  bool m_projectNumberHasBeenSet = false;
  bool m_identityPoolNameHasBeenSet = false;
  bool m_identityProviderNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
