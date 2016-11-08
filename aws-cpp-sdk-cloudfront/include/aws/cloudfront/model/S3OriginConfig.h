/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * A complex type that contains information about the Amazon S3 origin. If the
   * origin is a custom origin, use the CustomOriginConfig element instead.
   */
  class AWS_CLOUDFRONT_API S3OriginConfig
  {
  public:
    S3OriginConfig();
    S3OriginConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3OriginConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline const Aws::String& GetOriginAccessIdentity() const{ return m_originAccessIdentity; }

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline void SetOriginAccessIdentity(const Aws::String& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline void SetOriginAccessIdentity(Aws::String&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline void SetOriginAccessIdentity(const char* value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity.assign(value); }

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline S3OriginConfig& WithOriginAccessIdentity(const Aws::String& value) { SetOriginAccessIdentity(value); return *this;}

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline S3OriginConfig& WithOriginAccessIdentity(Aws::String&& value) { SetOriginAccessIdentity(value); return *this;}

    /**
     * The CloudFront origin access identity to associate with the origin. Use an
     * origin access identity to configure the origin so that end users can only access
     * objects in an Amazon S3 bucket through CloudFront. If you want end users to be
     * able to access objects using either the CloudFront URL or the Amazon S3 URL,
     * specify an empty OriginAccessIdentity element. To delete the origin access
     * identity from an existing distribution, update the distribution configuration
     * and include an empty OriginAccessIdentity element. To replace the origin access
     * identity, update the distribution configuration and specify the new origin
     * access identity. Use the format origin-access-identity/cloudfront/Id where Id is
     * the value that CloudFront returned in the Id element when you created the origin
     * access identity.
     */
    inline S3OriginConfig& WithOriginAccessIdentity(const char* value) { SetOriginAccessIdentity(value); return *this;}

  private:
    Aws::String m_originAccessIdentity;
    bool m_originAccessIdentityHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
