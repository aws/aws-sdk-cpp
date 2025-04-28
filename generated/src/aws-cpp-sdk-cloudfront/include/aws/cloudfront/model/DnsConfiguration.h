/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/DnsConfigurationStatus.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The DNS configuration for your domain names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DnsConfiguration">AWS
   * API Reference</a></p>
   */
  class DnsConfiguration
  {
  public:
    AWS_CLOUDFRONT_API DnsConfiguration() = default;
    AWS_CLOUDFRONT_API DnsConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DnsConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The domain name that you're verifying.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DnsConfiguration& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your domain name.</p> <ul> <li> <p>
     * <code>valid-configuration</code>: The domain name is correctly configured and
     * points to the correct routing endpoint of the connection group.</p> </li> <li>
     * <p> <code>invalid-configuration</code>: There is either a missing DNS record or
     * the DNS record exists but it's using an incorrect routing endpoint. Update the
     * DNS record to point to the correct routing endpoint.</p> </li> <li> <p>
     * <code>unknown-configuration</code>: CloudFront can't validate your DNS
     * configuration. This status can appear if CloudFront can't verify the DNS record,
     * or the DNS lookup request failed or timed out.</p> </li> </ul>
     */
    inline DnsConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DnsConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DnsConfiguration& WithStatus(DnsConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Explains the status of the DNS configuration.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DnsConfiguration& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    DnsConfigurationStatus m_status{DnsConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
