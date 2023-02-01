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


    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>A Boolean value that indicates whether the TLS security policy is the
     * default.</p>
     */
    inline LoadBalancerTlsPolicy& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline void SetProtocols(const Aws::Vector<Aws::String>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline void SetProtocols(Aws::Vector<Aws::String>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithProtocols(const Aws::Vector<Aws::String>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& WithProtocols(Aws::Vector<Aws::String>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& AddProtocols(const Aws::String& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& AddProtocols(Aws::String&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

    /**
     * <p>The protocols used in a given TLS security policy.</p>
     */
    inline LoadBalancerTlsPolicy& AddProtocols(const char* value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }


    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCiphers() const{ return m_ciphers; }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline void SetCiphers(const Aws::Vector<Aws::String>& value) { m_ciphersHasBeenSet = true; m_ciphers = value; }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline void SetCiphers(Aws::Vector<Aws::String>&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::move(value); }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline LoadBalancerTlsPolicy& WithCiphers(const Aws::Vector<Aws::String>& value) { SetCiphers(value); return *this;}

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline LoadBalancerTlsPolicy& WithCiphers(Aws::Vector<Aws::String>&& value) { SetCiphers(std::move(value)); return *this;}

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline LoadBalancerTlsPolicy& AddCiphers(const Aws::String& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline LoadBalancerTlsPolicy& AddCiphers(Aws::String&& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(std::move(value)); return *this; }

    /**
     * <p>The ciphers used by the TLS security policy.</p> <p>The ciphers are listed in
     * order of preference.</p>
     */
    inline LoadBalancerTlsPolicy& AddCiphers(const char* value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }

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
