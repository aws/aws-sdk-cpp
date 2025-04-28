/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains details about the validation token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ValidationTokenDetail">AWS
   * API Reference</a></p>
   */
  class ValidationTokenDetail
  {
  public:
    AWS_CLOUDFRONT_API ValidationTokenDetail() = default;
    AWS_CLOUDFRONT_API ValidationTokenDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ValidationTokenDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ValidationTokenDetail& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain to redirect to.</p>
     */
    inline const Aws::String& GetRedirectTo() const { return m_redirectTo; }
    inline bool RedirectToHasBeenSet() const { return m_redirectToHasBeenSet; }
    template<typename RedirectToT = Aws::String>
    void SetRedirectTo(RedirectToT&& value) { m_redirectToHasBeenSet = true; m_redirectTo = std::forward<RedirectToT>(value); }
    template<typename RedirectToT = Aws::String>
    ValidationTokenDetail& WithRedirectTo(RedirectToT&& value) { SetRedirectTo(std::forward<RedirectToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain to redirect from.</p>
     */
    inline const Aws::String& GetRedirectFrom() const { return m_redirectFrom; }
    inline bool RedirectFromHasBeenSet() const { return m_redirectFromHasBeenSet; }
    template<typename RedirectFromT = Aws::String>
    void SetRedirectFrom(RedirectFromT&& value) { m_redirectFromHasBeenSet = true; m_redirectFrom = std::forward<RedirectFromT>(value); }
    template<typename RedirectFromT = Aws::String>
    ValidationTokenDetail& WithRedirectFrom(RedirectFromT&& value) { SetRedirectFrom(std::forward<RedirectFromT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_redirectTo;
    bool m_redirectToHasBeenSet = false;

    Aws::String m_redirectFrom;
    bool m_redirectFromHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
