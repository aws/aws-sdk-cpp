﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the mutual authentication attributes of a
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/MutualAuthenticationAttributes">AWS
   * API Reference</a></p>
   */
  class MutualAuthenticationAttributes
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes();
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The client certificate handling method. Options are <code>off</code>,
     * <code>passthrough</code> or <code>verify</code>. The default value is
     * <code>off</code>.</p>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }
    inline MutualAuthenticationAttributes& WithMode(const Aws::String& value) { SetMode(value); return *this;}
    inline MutualAuthenticationAttributes& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}
    inline MutualAuthenticationAttributes& WithMode(const char* value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }
    inline MutualAuthenticationAttributes& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline MutualAuthenticationAttributes& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline MutualAuthenticationAttributes& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether expired client certificates are ignored.</p>
     */
    inline bool GetIgnoreClientCertificateExpiry() const{ return m_ignoreClientCertificateExpiry; }
    inline bool IgnoreClientCertificateExpiryHasBeenSet() const { return m_ignoreClientCertificateExpiryHasBeenSet; }
    inline void SetIgnoreClientCertificateExpiry(bool value) { m_ignoreClientCertificateExpiryHasBeenSet = true; m_ignoreClientCertificateExpiry = value; }
    inline MutualAuthenticationAttributes& WithIgnoreClientCertificateExpiry(bool value) { SetIgnoreClientCertificateExpiry(value); return *this;}
    ///@}
  private:

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    bool m_ignoreClientCertificateExpiry;
    bool m_ignoreClientCertificateExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
