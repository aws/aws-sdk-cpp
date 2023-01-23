/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/CustomHeaders.h>
#include <aws/cloudfront/model/S3OriginConfig.h>
#include <aws/cloudfront/model/CustomOriginConfig.h>
#include <aws/cloudfront/model/OriginShield.h>
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
   * <p>An origin.</p> <p>An origin is the location where content is stored, and from
   * which CloudFront gets content to serve to viewers. To specify an origin:</p>
   * <ul> <li> <p>Use <code>S3OriginConfig</code> to specify an Amazon S3 bucket that
   * is not configured with static website hosting.</p> </li> <li> <p>Use
   * <code>CustomOriginConfig</code> to specify all other kinds of origins,
   * including:</p> <ul> <li> <p>An Amazon S3 bucket that is configured with static
   * website hosting</p> </li> <li> <p>An Elastic Load Balancing load balancer</p>
   * </li> <li> <p>An AWS Elemental MediaPackage endpoint</p> </li> <li> <p>An AWS
   * Elemental MediaStore container</p> </li> <li> <p>Any other HTTP server, running
   * on an Amazon EC2 instance or any other kind of host</p> </li> </ul> </li> </ul>
   * <p>For the current maximum number of origins that you can specify per
   * distribution, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cloudfront-limits.html#limits-web-distributions">General
   * Quotas on Web Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>
   * (quotas were formerly referred to as limits).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Origin">AWS
   * API Reference</a></p>
   */
  class Origin
  {
  public:
    AWS_CLOUDFRONT_API Origin();
    AWS_CLOUDFRONT_API Origin(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Origin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline Origin& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline Origin& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the origin. This value must be unique within the
     * distribution.</p> <p>Use this value to specify the <code>TargetOriginId</code>
     * in a <code>CacheBehavior</code> or <code>DefaultCacheBehavior</code>.</p>
     */
    inline Origin& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name for the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesDomainName">Origin
     * Domain Name</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOriginPath() const{ return m_originPath; }

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool OriginPathHasBeenSet() const { return m_originPathHasBeenSet; }

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginPath(const Aws::String& value) { m_originPathHasBeenSet = true; m_originPath = value; }

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginPath(Aws::String&& value) { m_originPathHasBeenSet = true; m_originPath = std::move(value); }

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginPath(const char* value) { m_originPathHasBeenSet = true; m_originPath.assign(value); }

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithOriginPath(const Aws::String& value) { SetOriginPath(value); return *this;}

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithOriginPath(Aws::String&& value) { SetOriginPath(std::move(value)); return *this;}

    /**
     * <p>An optional path that CloudFront appends to the origin domain name when
     * CloudFront requests content from the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginPath">Origin
     * Path</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithOriginPath(const char* value) { SetOriginPath(value); return *this;}


    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const CustomHeaders& GetCustomHeaders() const{ return m_customHeaders; }

    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }

    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetCustomHeaders(const CustomHeaders& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }

    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetCustomHeaders(CustomHeaders&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::move(value); }

    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline Origin& WithCustomHeaders(const CustomHeaders& value) { SetCustomHeaders(value); return *this;}

    /**
     * <p>A list of HTTP header names and values that CloudFront adds to the requests
     * that it sends to the origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/add-origin-custom-headers.html">Adding
     * Custom Headers to Origin Requests</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline Origin& WithCustomHeaders(CustomHeaders&& value) { SetCustomHeaders(std::move(value)); return *this;}


    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline const S3OriginConfig& GetS3OriginConfig() const{ return m_s3OriginConfig; }

    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline bool S3OriginConfigHasBeenSet() const { return m_s3OriginConfigHasBeenSet; }

    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline void SetS3OriginConfig(const S3OriginConfig& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = value; }

    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline void SetS3OriginConfig(S3OriginConfig&& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = std::move(value); }

    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline Origin& WithS3OriginConfig(const S3OriginConfig& value) { SetS3OriginConfig(value); return *this;}

    /**
     * <p>Use this type to specify an origin that is an Amazon S3 bucket that is not
     * configured with static website hosting. To specify any other type of origin,
     * including an Amazon S3 bucket that is configured with static website hosting,
     * use the <code>CustomOriginConfig</code> type instead.</p>
     */
    inline Origin& WithS3OriginConfig(S3OriginConfig&& value) { SetS3OriginConfig(std::move(value)); return *this;}


    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline const CustomOriginConfig& GetCustomOriginConfig() const{ return m_customOriginConfig; }

    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline bool CustomOriginConfigHasBeenSet() const { return m_customOriginConfigHasBeenSet; }

    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline void SetCustomOriginConfig(const CustomOriginConfig& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = value; }

    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline void SetCustomOriginConfig(CustomOriginConfig&& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = std::move(value); }

    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline Origin& WithCustomOriginConfig(const CustomOriginConfig& value) { SetCustomOriginConfig(value); return *this;}

    /**
     * <p>Use this type to specify an origin that is not an Amazon S3 bucket, with one
     * exception. If the Amazon S3 bucket is configured with static website hosting,
     * use this type. If the Amazon S3 bucket is not configured with static website
     * hosting, use the <code>S3OriginConfig</code> type instead.</p>
     */
    inline Origin& WithCustomOriginConfig(CustomOriginConfig&& value) { SetCustomOriginConfig(std::move(value)); return *this;}


    /**
     * <p>The number of times that CloudFront attempts to connect to the origin. The
     * minimum number is 1, the maximum is 3, and the default (if you don't specify
     * otherwise) is 3.</p> <p>For a custom origin (including an Amazon S3 bucket
     * that's configured with static website hosting), this value also specifies the
     * number of times that CloudFront attempts to get a response from the origin, in
     * the case of an <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-attempts">Origin
     * Connection Attempts</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline int GetConnectionAttempts() const{ return m_connectionAttempts; }

    /**
     * <p>The number of times that CloudFront attempts to connect to the origin. The
     * minimum number is 1, the maximum is 3, and the default (if you don't specify
     * otherwise) is 3.</p> <p>For a custom origin (including an Amazon S3 bucket
     * that's configured with static website hosting), this value also specifies the
     * number of times that CloudFront attempts to get a response from the origin, in
     * the case of an <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-attempts">Origin
     * Connection Attempts</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool ConnectionAttemptsHasBeenSet() const { return m_connectionAttemptsHasBeenSet; }

    /**
     * <p>The number of times that CloudFront attempts to connect to the origin. The
     * minimum number is 1, the maximum is 3, and the default (if you don't specify
     * otherwise) is 3.</p> <p>For a custom origin (including an Amazon S3 bucket
     * that's configured with static website hosting), this value also specifies the
     * number of times that CloudFront attempts to get a response from the origin, in
     * the case of an <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-attempts">Origin
     * Connection Attempts</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetConnectionAttempts(int value) { m_connectionAttemptsHasBeenSet = true; m_connectionAttempts = value; }

    /**
     * <p>The number of times that CloudFront attempts to connect to the origin. The
     * minimum number is 1, the maximum is 3, and the default (if you don't specify
     * otherwise) is 3.</p> <p>For a custom origin (including an Amazon S3 bucket
     * that's configured with static website hosting), this value also specifies the
     * number of times that CloudFront attempts to get a response from the origin, in
     * the case of an <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesOriginResponseTimeout">Origin
     * Response Timeout</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-attempts">Origin
     * Connection Attempts</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithConnectionAttempts(int value) { SetConnectionAttempts(value); return *this;}


    /**
     * <p>The number of seconds that CloudFront waits when trying to establish a
     * connection to the origin. The minimum timeout is 1 second, the maximum is 10
     * seconds, and the default (if you don't specify otherwise) is 10 seconds.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-timeout">Origin
     * Connection Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline int GetConnectionTimeout() const{ return m_connectionTimeout; }

    /**
     * <p>The number of seconds that CloudFront waits when trying to establish a
     * connection to the origin. The minimum timeout is 1 second, the maximum is 10
     * seconds, and the default (if you don't specify otherwise) is 10 seconds.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-timeout">Origin
     * Connection Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool ConnectionTimeoutHasBeenSet() const { return m_connectionTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds that CloudFront waits when trying to establish a
     * connection to the origin. The minimum timeout is 1 second, the maximum is 10
     * seconds, and the default (if you don't specify otherwise) is 10 seconds.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-timeout">Origin
     * Connection Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetConnectionTimeout(int value) { m_connectionTimeoutHasBeenSet = true; m_connectionTimeout = value; }

    /**
     * <p>The number of seconds that CloudFront waits when trying to establish a
     * connection to the origin. The minimum timeout is 1 second, the maximum is 10
     * seconds, and the default (if you don't specify otherwise) is 10 seconds.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#origin-connection-timeout">Origin
     * Connection Timeout</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithConnectionTimeout(int value) { SetConnectionTimeout(value); return *this;}


    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const OriginShield& GetOriginShield() const{ return m_originShield; }

    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool OriginShieldHasBeenSet() const { return m_originShieldHasBeenSet; }

    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginShield(const OriginShield& value) { m_originShieldHasBeenSet = true; m_originShield = value; }

    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetOriginShield(OriginShield&& value) { m_originShieldHasBeenSet = true; m_originShield = std::move(value); }

    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithOriginShield(const OriginShield& value) { SetOriginShield(value); return *this;}

    /**
     * <p>CloudFront Origin Shield. Using Origin Shield can help reduce the load on
     * your origin.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
     * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline Origin& WithOriginShield(OriginShield&& value) { SetOriginShield(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOriginAccessControlId() const{ return m_originAccessControlId; }

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool OriginAccessControlIdHasBeenSet() const { return m_originAccessControlIdHasBeenSet; }

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginAccessControlId(const Aws::String& value) { m_originAccessControlIdHasBeenSet = true; m_originAccessControlId = value; }

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginAccessControlId(Aws::String&& value) { m_originAccessControlIdHasBeenSet = true; m_originAccessControlId = std::move(value); }

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginAccessControlId(const char* value) { m_originAccessControlIdHasBeenSet = true; m_originAccessControlId.assign(value); }

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline Origin& WithOriginAccessControlId(const Aws::String& value) { SetOriginAccessControlId(value); return *this;}

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline Origin& WithOriginAccessControlId(Aws::String&& value) { SetOriginAccessControlId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of an origin access control for this origin.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">Restricting
     * access to an Amazon S3 origin</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline Origin& WithOriginAccessControlId(const char* value) { SetOriginAccessControlId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_originPath;
    bool m_originPathHasBeenSet = false;

    CustomHeaders m_customHeaders;
    bool m_customHeadersHasBeenSet = false;

    S3OriginConfig m_s3OriginConfig;
    bool m_s3OriginConfigHasBeenSet = false;

    CustomOriginConfig m_customOriginConfig;
    bool m_customOriginConfigHasBeenSet = false;

    int m_connectionAttempts;
    bool m_connectionAttemptsHasBeenSet = false;

    int m_connectionTimeout;
    bool m_connectionTimeoutHasBeenSet = false;

    OriginShield m_originShield;
    bool m_originShieldHasBeenSet = false;

    Aws::String m_originAccessControlId;
    bool m_originAccessControlIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
