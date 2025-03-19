/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/SamlConfigurationStatus.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure that describes whether the workspace uses SAML, IAM Identity
   * Center, or both methods for user authentication, and whether that authentication
   * is fully configured.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AuthenticationSummary">AWS
   * API Reference</a></p>
   */
  class AuthenticationSummary
  {
  public:
    AWS_MANAGEDGRAFANA_API AuthenticationSummary() = default;
    AWS_MANAGEDGRAFANA_API AuthenticationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API AuthenticationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the workspace uses SAML, IAM Identity Center, or both
     * methods for user authentication.</p>
     */
    inline const Aws::Vector<AuthenticationProviderTypes>& GetProviders() const { return m_providers; }
    inline bool ProvidersHasBeenSet() const { return m_providersHasBeenSet; }
    template<typename ProvidersT = Aws::Vector<AuthenticationProviderTypes>>
    void SetProviders(ProvidersT&& value) { m_providersHasBeenSet = true; m_providers = std::forward<ProvidersT>(value); }
    template<typename ProvidersT = Aws::Vector<AuthenticationProviderTypes>>
    AuthenticationSummary& WithProviders(ProvidersT&& value) { SetProviders(std::forward<ProvidersT>(value)); return *this;}
    inline AuthenticationSummary& AddProviders(AuthenticationProviderTypes value) { m_providersHasBeenSet = true; m_providers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the workplace's user authentication method is fully
     * configured.</p>
     */
    inline SamlConfigurationStatus GetSamlConfigurationStatus() const { return m_samlConfigurationStatus; }
    inline bool SamlConfigurationStatusHasBeenSet() const { return m_samlConfigurationStatusHasBeenSet; }
    inline void SetSamlConfigurationStatus(SamlConfigurationStatus value) { m_samlConfigurationStatusHasBeenSet = true; m_samlConfigurationStatus = value; }
    inline AuthenticationSummary& WithSamlConfigurationStatus(SamlConfigurationStatus value) { SetSamlConfigurationStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<AuthenticationProviderTypes> m_providers;
    bool m_providersHasBeenSet = false;

    SamlConfigurationStatus m_samlConfigurationStatus{SamlConfigurationStatus::NOT_SET};
    bool m_samlConfigurationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
