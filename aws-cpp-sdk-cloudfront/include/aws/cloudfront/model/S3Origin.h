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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/S3Origin">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API S3Origin
  {
  public:
    S3Origin();
    S3Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline S3Origin& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline S3Origin& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the Amazon S3 origin. </p>
     */
    inline S3Origin& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline const Aws::String& GetOriginAccessIdentity() const{ return m_originAccessIdentity; }

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
    inline bool OriginAccessIdentityHasBeenSet() const { return m_originAccessIdentityHasBeenSet; }

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
    inline void SetOriginAccessIdentity(const Aws::String& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

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
    inline void SetOriginAccessIdentity(Aws::String&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = std::move(value); }

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
    inline void SetOriginAccessIdentity(const char* value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity.assign(value); }

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
    inline S3Origin& WithOriginAccessIdentity(const Aws::String& value) { SetOriginAccessIdentity(value); return *this;}

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
    inline S3Origin& WithOriginAccessIdentity(Aws::String&& value) { SetOriginAccessIdentity(std::move(value)); return *this;}

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
    inline S3Origin& WithOriginAccessIdentity(const char* value) { SetOriginAccessIdentity(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_originAccessIdentity;
    bool m_originAccessIdentityHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
