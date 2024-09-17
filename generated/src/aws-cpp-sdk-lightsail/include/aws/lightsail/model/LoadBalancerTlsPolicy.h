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
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
   * TLS security policies on your Amazon Lightsail load balancers</a> in the
   * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsPolicy">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsPolicy
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy();
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LoadBalancerTlsPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LoadBalancerTlsPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LoadBalancerTlsPolicy& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline LoadBalancerTlsPolicy& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LoadBalancerTlsPolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LoadBalancerTlsPolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LoadBalancerTlsPolicy& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Aws::String>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Aws::String>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline LoadBalancerTlsPolicy& WithProtocols(const Aws::Vector<Aws::String>& value) { SetProtocols(value); return *this;}
    inline LoadBalancerTlsPolicy& WithProtocols(Aws::Vector<Aws::String>&& value) { SetProtocols(std::move(value)); return *this;}
    inline LoadBalancerTlsPolicy& AddProtocols(const Aws::String& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline LoadBalancerTlsPolicy& AddProtocols(Aws::String&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    inline LoadBalancerTlsPolicy& AddProtocols(const char* value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCiphers() const{ return m_ciphers; }
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }
    inline void SetCiphers(const Aws::Vector<Aws::String>& value) { m_ciphersHasBeenSet = true; m_ciphers = value; }
    inline void SetCiphers(Aws::Vector<Aws::String>&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::move(value); }
    inline LoadBalancerTlsPolicy& WithCiphers(const Aws::Vector<Aws::String>& value) { SetCiphers(value); return *this;}
    inline LoadBalancerTlsPolicy& WithCiphers(Aws::Vector<Aws::String>&& value) { SetCiphers(std::move(value)); return *this;}
    inline LoadBalancerTlsPolicy& AddCiphers(const Aws::String& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }
    inline LoadBalancerTlsPolicy& AddCiphers(Aws::String&& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(std::move(value)); return *this; }
    inline LoadBalancerTlsPolicy& AddCiphers(const char* value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isDefault;
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
