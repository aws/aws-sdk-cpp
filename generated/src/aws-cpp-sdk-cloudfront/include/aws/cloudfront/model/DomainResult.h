/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DomainStatus.h>
#include <aws/cloudfront/model/ServeOn.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>The details about the domain result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DomainResult">AWS
 * API Reference</a></p>
 */
class DomainResult {
 public:
  AWS_CLOUDFRONT_API DomainResult() = default;
  AWS_CLOUDFRONT_API DomainResult(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API DomainResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The specified domain.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  DomainResult& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the domain is active or inactive.</p>
   */
  inline DomainStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DomainStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DomainResult& WithStatus(DomainStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which requests for this domain CloudFront routes to the
   * distribution tenant. Valid values are:</p> <ul> <li> <p> <code>any</code> –
   * CloudFront routes requests for this domain to the distribution tenant regardless
   * of the IP address that they arrive on. This is the default if you don't specify
   * a value.</p> </li> <li> <p> <code>anycast-ip-list-only</code> – CloudFront
   * routes requests for this domain to the distribution tenant only when they arrive
   * on the Anycast static IPs of the distribution tenant's connection group.
   * CloudFront treats requests that arrive on other IP addresses as requests for an
   * unknown domain.</p> </li> </ul>
   */
  inline ServeOn GetServeOn() const { return m_serveOn; }
  inline bool ServeOnHasBeenSet() const { return m_serveOnHasBeenSet; }
  inline void SetServeOn(ServeOn value) {
    m_serveOnHasBeenSet = true;
    m_serveOn = value;
  }
  inline DomainResult& WithServeOn(ServeOn value) {
    SetServeOn(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domain;

  DomainStatus m_status{DomainStatus::NOT_SET};

  ServeOn m_serveOn{ServeOn::NOT_SET};
  bool m_domainHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_serveOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
