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
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy() = default;
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API SslPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSslProtocols() const { return m_sslProtocols; }
    inline bool SslProtocolsHasBeenSet() const { return m_sslProtocolsHasBeenSet; }
    template<typename SslProtocolsT = Aws::Vector<Aws::String>>
    void SetSslProtocols(SslProtocolsT&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols = std::forward<SslProtocolsT>(value); }
    template<typename SslProtocolsT = Aws::Vector<Aws::String>>
    SslPolicy& WithSslProtocols(SslProtocolsT&& value) { SetSslProtocols(std::forward<SslProtocolsT>(value)); return *this;}
    template<typename SslProtocolsT = Aws::String>
    SslPolicy& AddSslProtocols(SslProtocolsT&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.emplace_back(std::forward<SslProtocolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ciphers.</p>
     */
    inline const Aws::Vector<Cipher>& GetCiphers() const { return m_ciphers; }
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }
    template<typename CiphersT = Aws::Vector<Cipher>>
    void SetCiphers(CiphersT&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::forward<CiphersT>(value); }
    template<typename CiphersT = Aws::Vector<Cipher>>
    SslPolicy& WithCiphers(CiphersT&& value) { SetCiphers(std::forward<CiphersT>(value)); return *this;}
    template<typename CiphersT = Cipher>
    SslPolicy& AddCiphers(CiphersT&& value) { m_ciphersHasBeenSet = true; m_ciphers.emplace_back(std::forward<CiphersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SslPolicy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported load balancers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedLoadBalancerTypes() const { return m_supportedLoadBalancerTypes; }
    inline bool SupportedLoadBalancerTypesHasBeenSet() const { return m_supportedLoadBalancerTypesHasBeenSet; }
    template<typename SupportedLoadBalancerTypesT = Aws::Vector<Aws::String>>
    void SetSupportedLoadBalancerTypes(SupportedLoadBalancerTypesT&& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes = std::forward<SupportedLoadBalancerTypesT>(value); }
    template<typename SupportedLoadBalancerTypesT = Aws::Vector<Aws::String>>
    SslPolicy& WithSupportedLoadBalancerTypes(SupportedLoadBalancerTypesT&& value) { SetSupportedLoadBalancerTypes(std::forward<SupportedLoadBalancerTypesT>(value)); return *this;}
    template<typename SupportedLoadBalancerTypesT = Aws::String>
    SslPolicy& AddSupportedLoadBalancerTypes(SupportedLoadBalancerTypesT&& value) { m_supportedLoadBalancerTypesHasBeenSet = true; m_supportedLoadBalancerTypes.emplace_back(std::forward<SupportedLoadBalancerTypesT>(value)); return *this; }
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
