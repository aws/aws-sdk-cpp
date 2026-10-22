/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/GitHubAuthorizationConfiguration.h>
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
 * <p>Configuration for a GitHub.com integration using the OAuth authorization code
 * flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitHubConfiguration">AWS
 * API Reference</a></p>
 */
class GitHubConfiguration {
 public:
  AWS_CONTINUUM_API GitHubConfiguration() = default;
  AWS_CONTINUUM_API GitHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth authorization used to establish the integration. Required on create;
   * not returned on read operations.</p>
   */
  inline const GitHubAuthorizationConfiguration& GetAuthorization() const { return m_authorization; }
  inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
  template <typename AuthorizationT = GitHubAuthorizationConfiguration>
  void SetAuthorization(AuthorizationT&& value) {
    m_authorizationHasBeenSet = true;
    m_authorization = std::forward<AuthorizationT>(value);
  }
  template <typename AuthorizationT = GitHubAuthorizationConfiguration>
  GitHubConfiguration& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the GitHub organization to associate with the integration. If not
   * specified, the integration is associated with the authenticated user's personal
   * account.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  GitHubConfiguration& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}
 private:
  GitHubAuthorizationConfiguration m_authorization;

  Aws::String m_organizationName;
  bool m_authorizationHasBeenSet = false;
  bool m_organizationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
