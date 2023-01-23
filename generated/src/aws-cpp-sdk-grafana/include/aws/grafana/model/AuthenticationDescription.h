/**
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


    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline const AwsSsoAuthentication& GetAwsSso() const{ return m_awsSso; }

    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline bool AwsSsoHasBeenSet() const { return m_awsSsoHasBeenSet; }

    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline void SetAwsSso(const AwsSsoAuthentication& value) { m_awsSsoHasBeenSet = true; m_awsSso = value; }

    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline void SetAwsSso(AwsSsoAuthentication&& value) { m_awsSsoHasBeenSet = true; m_awsSso = std::move(value); }

    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline AuthenticationDescription& WithAwsSso(const AwsSsoAuthentication& value) { SetAwsSso(value); return *this;}

    /**
     * <p>A structure containing information about how this workspace works with IAM
     * Identity Center. </p>
     */
    inline AuthenticationDescription& WithAwsSso(AwsSsoAuthentication&& value) { SetAwsSso(std::move(value)); return *this;}


    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline const Aws::Vector<AuthenticationProviderTypes>& GetProviders() const{ return m_providers; }

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline bool ProvidersHasBeenSet() const { return m_providersHasBeenSet; }

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline void SetProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { m_providersHasBeenSet = true; m_providers = value; }

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline void SetProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { m_providersHasBeenSet = true; m_providers = std::move(value); }

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline AuthenticationDescription& WithProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { SetProviders(value); return *this;}

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline AuthenticationDescription& WithProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { SetProviders(std::move(value)); return *this;}

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline AuthenticationDescription& AddProviders(const AuthenticationProviderTypes& value) { m_providersHasBeenSet = true; m_providers.push_back(value); return *this; }

    /**
     * <p>Specifies whether this workspace uses IAM Identity Center, SAML, or both
     * methods to authenticate users to use the Grafana console in the Amazon Managed
     * Grafana workspace.</p>
     */
    inline AuthenticationDescription& AddProviders(AuthenticationProviderTypes&& value) { m_providersHasBeenSet = true; m_providers.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline const SamlAuthentication& GetSaml() const{ return m_saml; }

    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline bool SamlHasBeenSet() const { return m_samlHasBeenSet; }

    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline void SetSaml(const SamlAuthentication& value) { m_samlHasBeenSet = true; m_saml = value; }

    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline void SetSaml(SamlAuthentication&& value) { m_samlHasBeenSet = true; m_saml = std::move(value); }

    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline AuthenticationDescription& WithSaml(const SamlAuthentication& value) { SetSaml(value); return *this;}

    /**
     * <p>A structure containing information about how this workspace works with SAML,
     * including what attributes within the assertion are to be mapped to user
     * information in the workspace. </p>
     */
    inline AuthenticationDescription& WithSaml(SamlAuthentication&& value) { SetSaml(std::move(value)); return *this;}

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
