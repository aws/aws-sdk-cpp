/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the TLS security policies that are available for Lightsail load
   * balancers.</p> <p>For more information about load balancer TLS security
   * policies, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
   * TLS security policies on your Amazon Lightsail load balancers</a> in the
   * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsPolicy">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsPolicy
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy() = default;
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LoadBalancerTlsPolicy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline LoadBalancerTlsPolicy& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LoadBalancerTlsPolicy& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    LoadBalancerTlsPolicy& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    template<typename ProtocolsT = Aws::String>
    LoadBalancerTlsPolicy& AddProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols.emplace_back(std::forward<ProtocolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCiphers() const { return m_ciphers; }
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }
    template<typename CiphersT = Aws::Vector<Aws::String>>
    void SetCiphers(CiphersT&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::forward<CiphersT>(value); }
    template<typename CiphersT = Aws::Vector<Aws::String>>
    LoadBalancerTlsPolicy& WithCiphers(CiphersT&& value) { SetCiphers(std::forward<CiphersT>(value)); return *this;}
    template<typename CiphersT = Aws::String>
    LoadBalancerTlsPolicy& AddCiphers(CiphersT&& value) { m_ciphersHasBeenSet = true; m_ciphers.emplace_back(std::forward<CiphersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ciphers;
    bool m_ciphersHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
