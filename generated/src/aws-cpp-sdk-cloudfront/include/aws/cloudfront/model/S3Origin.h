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
   * <p>A complex type that contains information about the Amazon S3 bucket from
   * which you want CloudFront to get your media files for
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/S3Origin">AWS
   * API Reference</a></p>
   */
  class S3Origin
  {
  public:
    AWS_CLOUDFRONT_API S3Origin() = default;
    AWS_CLOUDFRONT_API S3Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API S3Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The DNS name of the Amazon S3 origin.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    S3Origin& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudFront origin access identity to associate with the distribution. Use
     * an origin access identity to configure the distribution so that end users can
     * only access objects in an Amazon S3 bucket through CloudFront.</p> <p>If you
     * want end users to be able to access objects using either the CloudFront URL or
     * the Amazon S3 URL, specify an empty <code>OriginAccessIdentity</code>
     * element.</p> <p>To delete the origin access identity from an existing
     * distribution, update the distribution configuration and include an empty
     * <code>OriginAccessIdentity</code> element.</p> <p>To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Using
     * an Origin Access Identity to Restrict Access to Your Amazon S3 Content</a> in
     * the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOriginAccessIdentity() const { return m_originAccessIdentity; }
    inline bool OriginAccessIdentityHasBeenSet() const { return m_originAccessIdentityHasBeenSet; }
    template<typename OriginAccessIdentityT = Aws::String>
    void SetOriginAccessIdentity(OriginAccessIdentityT&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = std::forward<OriginAccessIdentityT>(value); }
    template<typename OriginAccessIdentityT = Aws::String>
    S3Origin& WithOriginAccessIdentity(OriginAccessIdentityT&& value) { SetOriginAccessIdentity(std::forward<OriginAccessIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_originAccessIdentity;
    bool m_originAccessIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
