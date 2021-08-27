/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/OIDC.h>
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
   * <p>An object representing an identity provider for authentication
   * credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Identity">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API Identity
  {
  public:
    Identity();
    Identity(Aws::Utils::Json::JsonView jsonValue);
    Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline const OIDC& GetOidc() const{ return m_oidc; }

    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline bool OidcHasBeenSet() const { return m_oidcHasBeenSet; }

    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline void SetOidc(const OIDC& value) { m_oidcHasBeenSet = true; m_oidc = value; }

    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline void SetOidc(OIDC&& value) { m_oidcHasBeenSet = true; m_oidc = std::move(value); }

    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline Identity& WithOidc(const OIDC& value) { SetOidc(value); return *this;}

    /**
     * <p>The <a href="https://openid.net/connect/">OpenID Connect</a> identity
     * provider information for the cluster.</p>
     */
    inline Identity& WithOidc(OIDC&& value) { SetOidc(std::move(value)); return *this;}

  private:

    OIDC m_oidc;
    bool m_oidcHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
