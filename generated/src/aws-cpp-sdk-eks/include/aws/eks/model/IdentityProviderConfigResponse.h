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
    AWS_EKS_API IdentityProviderConfigResponse() = default;
    AWS_EKS_API IdentityProviderConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API IdentityProviderConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline const OidcIdentityProviderConfig& GetOidc() const { return m_oidc; }
    inline bool OidcHasBeenSet() const { return m_oidcHasBeenSet; }
    template<typename OidcT = OidcIdentityProviderConfig>
    void SetOidc(OidcT&& value) { m_oidcHasBeenSet = true; m_oidc = std::forward<OidcT>(value); }
    template<typename OidcT = OidcIdentityProviderConfig>
    IdentityProviderConfigResponse& WithOidc(OidcT&& value) { SetOidc(std::forward<OidcT>(value)); return *this;}
    ///@}
  private:

    OidcIdentityProviderConfig m_oidc;
    bool m_oidcHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
