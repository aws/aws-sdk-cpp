﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AwsSsoAuthentication.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/SamlAuthentication.h>
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
   * <p>A structure containing information about the user authentication methods used
   * by the workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AuthenticationDescription">AWS
   * API Reference</a></p>
   */
  class AuthenticationDescription
  {
  public:
    AWS_MANAGEDGRAFANA_API AuthenticationDescription();
    AWS_MANAGEDGRAFANA_API AuthenticationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API AuthenticationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline const AwsSsoAuthentication& GetAwsSso() const{ return m_awsSso; }
    inline bool AwsSsoHasBeenSet() const { return m_awsSsoHasBeenSet; }
    inline void SetAwsSso(const AwsSsoAuthentication& value) { m_awsSsoHasBeenSet = true; m_awsSso = value; }
    inline void SetAwsSso(AwsSsoAuthentication&& value) { m_awsSsoHasBeenSet = true; m_awsSso = std::move(value); }
    inline AuthenticationDescription& WithAwsSso(const AwsSsoAuthentication& value) { SetAwsSso(value); return *this;}
    inline AuthenticationDescription& WithAwsSso(AwsSsoAuthentication&& value) { SetAwsSso(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline const Aws::Vector<AuthenticationProviderTypes>& GetProviders() const{ return m_providers; }
    inline bool ProvidersHasBeenSet() const { return m_providersHasBeenSet; }
    inline void SetProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { m_providersHasBeenSet = true; m_providers = value; }
    inline void SetProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { m_providersHasBeenSet = true; m_providers = std::move(value); }
    inline AuthenticationDescription& WithProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { SetProviders(value); return *this;}
    inline AuthenticationDescription& WithProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { SetProviders(std::move(value)); return *this;}
    inline AuthenticationDescription& AddProviders(const AuthenticationProviderTypes& value) { m_providersHasBeenSet = true; m_providers.push_back(value); return *this; }
    inline AuthenticationDescription& AddProviders(AuthenticationProviderTypes&& value) { m_providersHasBeenSet = true; m_providers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline const SamlAuthentication& GetSaml() const{ return m_saml; }
    inline bool SamlHasBeenSet() const { return m_samlHasBeenSet; }
    inline void SetSaml(const SamlAuthentication& value) { m_samlHasBeenSet = true; m_saml = value; }
    inline void SetSaml(SamlAuthentication&& value) { m_samlHasBeenSet = true; m_saml = std::move(value); }
    inline AuthenticationDescription& WithSaml(const SamlAuthentication& value) { SetSaml(value); return *this;}
    inline AuthenticationDescription& WithSaml(SamlAuthentication&& value) { SetSaml(std::move(value)); return *this;}
    ///@}
  private:

    AwsSsoAuthentication m_awsSso;
    bool m_awsSsoHasBeenSet = false;

    Aws::Vector<AuthenticationProviderTypes> m_providers;
    bool m_providersHasBeenSet = false;

    SamlAuthentication m_saml;
    bool m_samlHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
