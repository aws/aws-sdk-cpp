/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/Cipher.h>
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
   * <p>Information about a policy used for SSL negotiation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SslPolicy">AWS
   * API Reference</a></p>
   */
  class SslPolicy
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy();
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSslProtocols() const{ return m_sslProtocols; }
    inline bool SslProtocolsHasBeenSet() const { return m_sslProtocolsHasBeenSet; }
    inline void SetSslProtocols(const Aws::Vector<Aws::String>& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols = value; }
    inline void SetSslProtocols(Aws::Vector<Aws::String>&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols = std::move(value); }
    inline SslPolicy& WithSslProtocols(const Aws::Vector<Aws::String>& value) { SetSslProtocols(value); return *this;}
    inline SslPolicy& WithSslProtocols(Aws::Vector<Aws::String>&& value) { SetSslProtocols(std::move(value)); return *this;}
    inline SslPolicy& AddSslProtocols(const Aws::String& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(value); return *this; }
    inline SslPolicy& AddSslProtocols(Aws::String&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(std::move(value)); return *this; }
    inline SslPolicy& AddSslProtocols(const char* value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ciphers.</p>
     */
    inline const Aws::Vector<Cipher>& GetCiphers() const{ return m_ciphers; }
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }
    inline void SetCiphers(const Aws::Vector<Cipher>& value) { m_ciphersHasBeenSet = true; m_ciphers = value; }
    inline void SetCiphers(Aws::Vector<Cipher>&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::move(value); }
    inline SslPolicy& WithCiphers(const Aws::Vector<Cipher>& value) { SetCiphers(value); return *this;}
    inline SslPolicy& WithCiphers(Aws::Vector<Cipher>&& value) { SetCiphers(std::move(value)); return *this;}
    inline SslPolicy& AddCiphers(const Cipher& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }
    inline SslPolicy& AddCiphers(Cipher&& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SslPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SslPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SslPolicy& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported load balancers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedLoadBalancerTypes() const{ return m_supportedLoadBalancerTypes; }
    inline bool SupportedLoadBalancerTypesHasBeenSet() const { return m_supportedLoadBalancerTypesHasBeenSet; }
    inline void SetSupportedLoadBalancerTypes(const Aws::Vector<Aws::String>& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes = value; }
    inline void SetSupportedLoadBalancerTypes(Aws::Vector<Aws::String>&& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes = std::move(value); }
    inline SslPolicy& WithSupportedLoadBalancerTypes(const Aws::Vector<Aws::String>& value) { SetSupportedLoadBalancerTypes(value); return *this;}
    inline SslPolicy& WithSupportedLoadBalancerTypes(Aws::Vector<Aws::String>&& value) { SetSupportedLoadBalancerTypes(std::move(value)); return *this;}
    inline SslPolicy& AddSupportedLoadBalancerTypes(const Aws::String& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes.push_back(value); return *this; }
    inline SslPolicy& AddSupportedLoadBalancerTypes(Aws::String&& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes.push_back(std::move(value)); return *this; }
    inline SslPolicy& AddSupportedLoadBalancerTypes(const char* value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sslProtocols;
    bool m_sslProtocolsHasBeenSet = false;

    Aws::Vector<Cipher> m_ciphers;
    bool m_ciphersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedLoadBalancerTypes;
    bool m_supportedLoadBalancerTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
