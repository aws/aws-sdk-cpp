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
#include <aws/cloudfront/model/CustomHeaders.h>
#include <aws/cloudfront/model/S3OriginConfig.h>
#include <aws/cloudfront/model/CustomOriginConfig.h>
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
   * <p>A complex type that describes the Amazon S3 bucket, HTTP server (for example,
   * a web server), Amazon MediaStore, or other server from which CloudFront gets
   * your files. This can also be an origin group, if you've created an origin group.
   * You must specify at least one origin or origin group.</p> <p>For the current
   * limit on the number of origins or origin groups that you can specify for a
   * distribution, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_cloudfront">Amazon
   * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Origin">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Origin
  {
  public:
    Origin();
    Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the origin or origin group. The value of
     * <code>Id</code> must be unique within the distribution.</p> <p>When you specify
     * the value of <code>TargetOriginId</code> for the default cache behavior or for
     * another cache behavior, you indicate the origin to which you want the cache
     * behavior to route requests by specifying the value of the <code>Id</code>
     * element for that origin. When a request matches the path pattern for that cache
     * behavior, CloudFront routes the request to the specified origin. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
     * Behavior Settings</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline Origin& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline Origin& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> <b>Amazon S3 origins</b>: The DNS name of the Amazon S3 bucket from which
     * you want CloudFront to get objects for this origin, for example,
     * <code>myawsbucket.s3.amazonaws.com</code>. If you set up your bucket to be
     * configured as a website endpoint, enter the Amazon S3 static website hosting
     * endpoint for the bucket.</p> <p>For more information about specifying this value
     * for different types of origins, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Constraints for Amazon S3 origins: </p> <ul> <li> <p>If you configured Amazon
     * S3 Transfer Acceleration for your bucket, don't specify the
     * <code>s3-accelerate</code> endpoint for <code>DomainName</code>.</p> </li> <li>
     * <p>The bucket name must be between 3 and 63 characters long (inclusive).</p>
     * </li> <li> <p>The bucket name must contain only lowercase characters, numbers,
     * periods, underscores, and dashes.</p> </li> <li> <p>The bucket name must not
     * contain adjacent periods.</p> </li> </ul> <p> <b>Custom Origins</b>: The DNS
     * domain name for the HTTP server from which you want CloudFront to get objects
     * for this origin, for example, <code>www.example.com</code>. </p> <p>Constraints
     * for custom origins:</p> <ul> <li> <p> <code>DomainName</code> must be a valid
     * DNS name that contains only a-z, A-Z, 0-9, dot (.), hyphen (-), or underscore
     * (_) characters.</p> </li> <li> <p>The name cannot exceed 128 characters.</p>
     * </li> </ul>
     */
    inline Origin& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline const Aws::String& GetOriginPath() const{ return m_originPath; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline bool OriginPathHasBeenSet() const { return m_originPathHasBeenSet; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline void SetOriginPath(const Aws::String& value) { m_originPathHasBeenSet = true; m_originPath = value; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline void SetOriginPath(Aws::String&& value) { m_originPathHasBeenSet = true; m_originPath = std::move(value); }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline void SetOriginPath(const char* value) { m_originPathHasBeenSet = true; m_originPath.assign(value); }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline Origin& WithOriginPath(const Aws::String& value) { SetOriginPath(value); return *this;}

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline Origin& WithOriginPath(Aws::String&& value) { SetOriginPath(std::move(value)); return *this;}

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin. When you include the
     * <code>OriginPath</code> element, specify the directory name, beginning with a
     * <code>/</code>. CloudFront appends the directory name to the value of
     * <code>DomainName</code>, for example, <code>example.com/production</code>. Do
     * not include a <code>/</code> at the end of the directory name.</p> <p>For
     * example, suppose you've specified the following values for your
     * distribution:</p> <ul> <li> <p> <code>DomainName</code>: An Amazon S3 bucket
     * named <code>myawsbucket</code>.</p> </li> <li> <p> <code>OriginPath</code>:
     * <code>/production</code> </p> </li> <li> <p> <code>CNAME</code>:
     * <code>example.com</code> </p> </li> </ul> <p>When a user enters
     * <code>example.com/index.html</code> in a browser, CloudFront sends a request to
     * Amazon S3 for <code>myawsbucket/production/index.html</code>.</p> <p>When a user
     * enters <code>example.com/acme/index.html</code> in a browser, CloudFront sends a
     * request to Amazon S3 for
     * <code>myawsbucket/production/acme/index.html</code>.</p>
     */
    inline Origin& WithOriginPath(const char* value) { SetOriginPath(value); return *this;}


    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline const CustomHeaders& GetCustomHeaders() const{ return m_customHeaders; }

    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }

    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline void SetCustomHeaders(const CustomHeaders& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }

    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline void SetCustomHeaders(CustomHeaders&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::move(value); }

    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline Origin& WithCustomHeaders(const CustomHeaders& value) { SetCustomHeaders(value); return *this;}

    /**
     * <p>A complex type that contains names and values for the custom headers that you
     * want.</p>
     */
    inline Origin& WithCustomHeaders(CustomHeaders&& value) { SetCustomHeaders(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline const S3OriginConfig& GetS3OriginConfig() const{ return m_s3OriginConfig; }

    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline bool S3OriginConfigHasBeenSet() const { return m_s3OriginConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline void SetS3OriginConfig(const S3OriginConfig& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = value; }

    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline void SetS3OriginConfig(S3OriginConfig&& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline Origin& WithS3OriginConfig(const S3OriginConfig& value) { SetS3OriginConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about the Amazon S3 origin. If the
     * origin is a custom origin, use the <code>CustomOriginConfig</code> element
     * instead.</p>
     */
    inline Origin& WithS3OriginConfig(S3OriginConfig&& value) { SetS3OriginConfig(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline const CustomOriginConfig& GetCustomOriginConfig() const{ return m_customOriginConfig; }

    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline bool CustomOriginConfigHasBeenSet() const { return m_customOriginConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline void SetCustomOriginConfig(const CustomOriginConfig& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = value; }

    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline void SetCustomOriginConfig(CustomOriginConfig&& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline Origin& WithCustomOriginConfig(const CustomOriginConfig& value) { SetCustomOriginConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about a custom origin. If the origin
     * is an Amazon S3 bucket, use the <code>S3OriginConfig</code> element instead.</p>
     */
    inline Origin& WithCustomOriginConfig(CustomOriginConfig&& value) { SetCustomOriginConfig(std::move(value)); return *this;}

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
