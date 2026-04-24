/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/grafana/model/AwsSsoAuthentication.h>
#include <aws/grafana/model/SamlAuthentication.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing information about the user authentication methods used
 * by the workspace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AuthenticationDescription">AWS
 * API Reference</a></p>
 */
class AuthenticationDescription {
 public:
  AWS_MANAGEDGRAFANA_API AuthenticationDescription() = default;
  AWS_MANAGEDGRAFANA_API AuthenticationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API AuthenticationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
   * methods to authenticate users to use the Grafana console in the Amazon Managed
   * Grafana workspace.</p>
   */
  inline const Aws::Vector<AuthenticationProviderTypes>& GetProviders() const { return m_providers; }
  inline bool ProvidersHasBeenSet() const { return m_providersHasBeenSet; }
  template <typename ProvidersT = Aws::Vector<AuthenticationProviderTypes>>
  void SetProviders(ProvidersT&& value) {
    m_providersHasBeenSet = true;
    m_providers = std::forward<ProvidersT>(value);
  }
  template <typename ProvidersT = Aws::Vector<AuthenticationProviderTypes>>
  AuthenticationDescription& WithProviders(ProvidersT&& value) {
    SetProviders(std::forward<ProvidersT>(value));
    return *this;
  }
  inline AuthenticationDescription& AddProviders(AuthenticationProviderTypes value) {
    m_providersHasBeenSet = true;
    m_providers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure containing information about how this workspace works with SAML,
   * including what attributes within the assertion are to be mapped to user
   * information in the workspace. </p>
   */
  inline const SamlAuthentication& GetSaml() const { return m_saml; }
  inline bool SamlHasBeenSet() const { return m_samlHasBeenSet; }
  template <typename SamlT = SamlAuthentication>
  void SetSaml(SamlT&& value) {
    m_samlHasBeenSet = true;
    m_saml = std::forward<SamlT>(value);
  }
  template <typename SamlT = SamlAuthentication>
  AuthenticationDescription& WithSaml(SamlT&& value) {
    SetSaml(std::forward<SamlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure containing information about how this workspace works with IAM
   * Identity Center. </p>
   */
  inline const AwsSsoAuthentication& GetAwsSso() const { return m_awsSso; }
  inline bool AwsSsoHasBeenSet() const { return m_awsSsoHasBeenSet; }
  template <typename AwsSsoT = AwsSsoAuthentication>
  void SetAwsSso(AwsSsoT&& value) {
    m_awsSsoHasBeenSet = true;
    m_awsSso = std::forward<AwsSsoT>(value);
  }
  template <typename AwsSsoT = AwsSsoAuthentication>
  AuthenticationDescription& WithAwsSso(AwsSsoT&& value) {
    SetAwsSso(std::forward<AwsSsoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AuthenticationProviderTypes> m_providers;

  SamlAuthentication m_saml;

  AwsSsoAuthentication m_awsSso;
  bool m_providersHasBeenSet = false;
  bool m_samlHasBeenSet = false;
  bool m_awsSsoHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
