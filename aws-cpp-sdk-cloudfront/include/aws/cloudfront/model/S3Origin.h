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
   * A complex type that contains information about the Amazon S3 bucket from which
   * you want CloudFront to get your media files for distribution.
   */
  class AWS_CLOUDFRONT_API S3Origin
  {
  public:
    S3Origin();
    S3Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The DNS name of the S3 origin.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The DNS name of the S3 origin.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The DNS name of the S3 origin.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The DNS name of the S3 origin.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The DNS name of the S3 origin.
     */
    inline S3Origin& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The DNS name of the S3 origin.
     */
    inline S3Origin& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The DNS name of the S3 origin.
     */
    inline S3Origin& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * Your S3 origin's origin access identity.
     */
    inline const Aws::String& GetOriginAccessIdentity() const{ return m_originAccessIdentity; }

    /**
     * Your S3 origin's origin access identity.
     */
    inline void SetOriginAccessIdentity(const Aws::String& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

    /**
     * Your S3 origin's origin access identity.
     */
    inline void SetOriginAccessIdentity(Aws::String&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

    /**
     * Your S3 origin's origin access identity.
     */
    inline void SetOriginAccessIdentity(const char* value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity.assign(value); }

    /**
     * Your S3 origin's origin access identity.
     */
    inline S3Origin& WithOriginAccessIdentity(const Aws::String& value) { SetOriginAccessIdentity(value); return *this;}

    /**
     * Your S3 origin's origin access identity.
     */
    inline S3Origin& WithOriginAccessIdentity(Aws::String&& value) { SetOriginAccessIdentity(value); return *this;}

    /**
     * Your S3 origin's origin access identity.
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
