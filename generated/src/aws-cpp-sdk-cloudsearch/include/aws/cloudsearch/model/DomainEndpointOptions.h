/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/TLSSecurityPolicy.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The domain's endpoint options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DomainEndpointOptions">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptions
  {
  public:
    AWS_CLOUDSEARCH_API DomainEndpointOptions();
    AWS_CLOUDSEARCH_API DomainEndpointOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DomainEndpointOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Whether the domain is HTTPS only enabled.</p>
     */
    inline bool GetEnforceHTTPS() const{ return m_enforceHTTPS; }

    /**
     * <p>Whether the domain is HTTPS only enabled.</p>
     */
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }

    /**
     * <p>Whether the domain is HTTPS only enabled.</p>
     */
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }

    /**
     * <p>Whether the domain is HTTPS only enabled.</p>
     */
    inline DomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}


    /**
     * <p>The minimum required TLS version</p>
     */
    inline const TLSSecurityPolicy& GetTLSSecurityPolicy() const{ return m_tLSSecurityPolicy; }

    /**
     * <p>The minimum required TLS version</p>
     */
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }

    /**
     * <p>The minimum required TLS version</p>
     */
    inline void SetTLSSecurityPolicy(const TLSSecurityPolicy& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = value; }

    /**
     * <p>The minimum required TLS version</p>
     */
    inline void SetTLSSecurityPolicy(TLSSecurityPolicy&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::move(value); }

    /**
     * <p>The minimum required TLS version</p>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(const TLSSecurityPolicy& value) { SetTLSSecurityPolicy(value); return *this;}

    /**
     * <p>The minimum required TLS version</p>
     */
    inline DomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicy&& value) { SetTLSSecurityPolicy(std::move(value)); return *this;}

  private:

    bool m_enforceHTTPS;
    bool m_enforceHTTPSHasBeenSet = false;

    TLSSecurityPolicy m_tLSSecurityPolicy;
    bool m_tLSSecurityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
