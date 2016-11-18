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
#include <aws/cloudfront/model/CustomHeaders.h>
#include <aws/cloudfront/model/S3OriginConfig.h>
#include <aws/cloudfront/model/CustomOriginConfig.h>

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
   * A complex type that describes the Amazon S3 bucket or the HTTP server (for
   * example, a web server) from which CloudFront gets your files.You must create at
   * least one origin.
   */
  class AWS_CLOUDFRONT_API Origin
  {
  public:
    Origin();
    Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline Origin& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline Origin& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * A unique identifier for the origin. The value of Id must be unique within the
     * distribution. You use the value of Id when you create a cache behavior. The Id
     * identifies the origin that CloudFront routes a request to when the request
     * matches the path pattern for that cache behavior.
     */
    inline Origin& WithId(const char* value) { SetId(value); return *this;}

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline Origin& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline Origin& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin, for example,
     * myawsbucket.s3.amazonaws.com. Custom origins: The DNS domain name for the HTTP
     * server from which you want CloudFront to get objects for this origin, for
     * example, www.example.com.
     */
    inline Origin& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline const Aws::String& GetOriginPath() const{ return m_originPath; }

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline void SetOriginPath(const Aws::String& value) { m_originPathHasBeenSet = true; m_originPath = value; }

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline void SetOriginPath(Aws::String&& value) { m_originPathHasBeenSet = true; m_originPath = value; }

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline void SetOriginPath(const char* value) { m_originPathHasBeenSet = true; m_originPath.assign(value); }

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline Origin& WithOriginPath(const Aws::String& value) { SetOriginPath(value); return *this;}

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline Origin& WithOriginPath(Aws::String&& value) { SetOriginPath(value); return *this;}

    /**
     * An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * OriginPath element, specify the directory name, beginning with a /. CloudFront
     * appends the directory name to the value of DomainName.
     */
    inline Origin& WithOriginPath(const char* value) { SetOriginPath(value); return *this;}

    /**
     * A complex type that contains information about the custom headers associated
     * with this Origin.
     */
    inline const CustomHeaders& GetCustomHeaders() const{ return m_customHeaders; }

    /**
     * A complex type that contains information about the custom headers associated
     * with this Origin.
     */
    inline void SetCustomHeaders(const CustomHeaders& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }

    /**
     * A complex type that contains information about the custom headers associated
     * with this Origin.
     */
    inline void SetCustomHeaders(CustomHeaders&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }

    /**
     * A complex type that contains information about the custom headers associated
     * with this Origin.
     */
    inline Origin& WithCustomHeaders(const CustomHeaders& value) { SetCustomHeaders(value); return *this;}

    /**
     * A complex type that contains information about the custom headers associated
     * with this Origin.
     */
    inline Origin& WithCustomHeaders(CustomHeaders&& value) { SetCustomHeaders(value); return *this;}

    /**
     * A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the CustomOriginConfig element instead.
     */
    inline const S3OriginConfig& GetS3OriginConfig() const{ return m_s3OriginConfig; }

    /**
     * A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the CustomOriginConfig element instead.
     */
    inline void SetS3OriginConfig(const S3OriginConfig& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = value; }

    /**
     * A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the CustomOriginConfig element instead.
     */
    inline void SetS3OriginConfig(S3OriginConfig&& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = value; }

    /**
     * A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the CustomOriginConfig element instead.
     */
    inline Origin& WithS3OriginConfig(const S3OriginConfig& value) { SetS3OriginConfig(value); return *this;}

    /**
     * A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the CustomOriginConfig element instead.
     */
    inline Origin& WithS3OriginConfig(S3OriginConfig&& value) { SetS3OriginConfig(value); return *this;}

    /**
     * A complex type that contains information about a custom origin. If the origin is
     * an Amazon S3 bucket, use the S3OriginConfig element instead.
     */
    inline const CustomOriginConfig& GetCustomOriginConfig() const{ return m_customOriginConfig; }

    /**
     * A complex type that contains information about a custom origin. If the origin is
     * an Amazon S3 bucket, use the S3OriginConfig element instead.
     */
    inline void SetCustomOriginConfig(const CustomOriginConfig& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = value; }

    /**
     * A complex type that contains information about a custom origin. If the origin is
     * an Amazon S3 bucket, use the S3OriginConfig element instead.
     */
    inline void SetCustomOriginConfig(CustomOriginConfig&& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = value; }

    /**
     * A complex type that contains information about a custom origin. If the origin is
     * an Amazon S3 bucket, use the S3OriginConfig element instead.
     */
    inline Origin& WithCustomOriginConfig(const CustomOriginConfig& value) { SetCustomOriginConfig(value); return *this;}

    /**
     * A complex type that contains information about a custom origin. If the origin is
     * an Amazon S3 bucket, use the S3OriginConfig element instead.
     */
    inline Origin& WithCustomOriginConfig(CustomOriginConfig&& value) { SetCustomOriginConfig(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_originPath;
    bool m_originPathHasBeenSet;
    CustomHeaders m_customHeaders;
    bool m_customHeadersHasBeenSet;
    S3OriginConfig m_s3OriginConfig;
    bool m_s3OriginConfigHasBeenSet;
    CustomOriginConfig m_customOriginConfig;
    bool m_customOriginConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
