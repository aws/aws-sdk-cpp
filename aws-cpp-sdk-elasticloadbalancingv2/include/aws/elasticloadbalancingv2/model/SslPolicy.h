/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICLOADBALANCINGV2_API SslPolicy
  {
  public:
    SslPolicy();
    SslPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    SslPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSslProtocols() const{ return m_sslProtocols; }

    /**
     * <p>The protocols.</p>
     */
    inline bool SslProtocolsHasBeenSet() const { return m_sslProtocolsHasBeenSet; }

    /**
     * <p>The protocols.</p>
     */
    inline void SetSslProtocols(const Aws::Vector<Aws::String>& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols = value; }

    /**
     * <p>The protocols.</p>
     */
    inline void SetSslProtocols(Aws::Vector<Aws::String>&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols = std::move(value); }

    /**
     * <p>The protocols.</p>
     */
    inline SslPolicy& WithSslProtocols(const Aws::Vector<Aws::String>& value) { SetSslProtocols(value); return *this;}

    /**
     * <p>The protocols.</p>
     */
    inline SslPolicy& WithSslProtocols(Aws::Vector<Aws::String>&& value) { SetSslProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols.</p>
     */
    inline SslPolicy& AddSslProtocols(const Aws::String& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(value); return *this; }

    /**
     * <p>The protocols.</p>
     */
    inline SslPolicy& AddSslProtocols(Aws::String&& value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(std::move(value)); return *this; }

    /**
     * <p>The protocols.</p>
     */
    inline SslPolicy& AddSslProtocols(const char* value) { m_sslProtocolsHasBeenSet = true; m_sslProtocols.push_back(value); return *this; }


    /**
     * <p>The ciphers.</p>
     */
    inline const Aws::Vector<Cipher>& GetCiphers() const{ return m_ciphers; }

    /**
     * <p>The ciphers.</p>
     */
    inline bool CiphersHasBeenSet() const { return m_ciphersHasBeenSet; }

    /**
     * <p>The ciphers.</p>
     */
    inline void SetCiphers(const Aws::Vector<Cipher>& value) { m_ciphersHasBeenSet = true; m_ciphers = value; }

    /**
     * <p>The ciphers.</p>
     */
    inline void SetCiphers(Aws::Vector<Cipher>&& value) { m_ciphersHasBeenSet = true; m_ciphers = std::move(value); }

    /**
     * <p>The ciphers.</p>
     */
    inline SslPolicy& WithCiphers(const Aws::Vector<Cipher>& value) { SetCiphers(value); return *this;}

    /**
     * <p>The ciphers.</p>
     */
    inline SslPolicy& WithCiphers(Aws::Vector<Cipher>&& value) { SetCiphers(std::move(value)); return *this;}

    /**
     * <p>The ciphers.</p>
     */
    inline SslPolicy& AddCiphers(const Cipher& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(value); return *this; }

    /**
     * <p>The ciphers.</p>
     */
    inline SslPolicy& AddCiphers(Cipher&& value) { m_ciphersHasBeenSet = true; m_ciphers.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline SslPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline SslPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline SslPolicy& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_sslProtocols;
    bool m_sslProtocolsHasBeenSet;

    Aws::Vector<Cipher> m_ciphers;
    bool m_ciphersHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
