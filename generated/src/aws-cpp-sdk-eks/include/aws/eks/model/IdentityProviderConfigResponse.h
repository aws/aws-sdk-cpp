/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/OidcIdentityProviderConfig.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The full description of your identity configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/IdentityProviderConfigResponse">AWS
   * API Reference</a></p>
   */
  class IdentityProviderConfigResponse
  {
  public:
    AWS_EKS_API IdentityProviderConfigResponse();
    AWS_EKS_API IdentityProviderConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API IdentityProviderConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline const OidcIdentityProviderConfig& GetOidc() const{ return m_oidc; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline bool OidcHasBeenSet() const { return m_oidcHasBeenSet; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetOidc(const OidcIdentityProviderConfig& value) { m_oidcHasBeenSet = true; m_oidc = value; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetOidc(OidcIdentityProviderConfig&& value) { m_oidcHasBeenSet = true; m_oidc = std::move(value); }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline IdentityProviderConfigResponse& WithOidc(const OidcIdentityProviderConfig& value) { SetOidc(value); return *this;}

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline IdentityProviderConfigResponse& WithOidc(OidcIdentityProviderConfig&& value) { SetOidc(std::move(value)); return *this;}

  private:

    OidcIdentityProviderConfig m_oidc;
    bool m_oidcHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
