/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object representing the <a href="https://openid.net/connect/">OpenID
   * Connect</a> (OIDC) identity provider information for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OIDC">AWS API
   * Reference</a></p>
   */
  class OIDC
  {
  public:
    AWS_EKS_API OIDC();
    AWS_EKS_API OIDC(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OIDC& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline OIDC& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline OIDC& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The issuer URL for the OIDC identity provider.</p>
     */
    inline OIDC& WithIssuer(const char* value) { SetIssuer(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
