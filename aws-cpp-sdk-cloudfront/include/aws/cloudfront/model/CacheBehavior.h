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
#include <aws/cloudfront/model/ForwardedValues.h>
#include <aws/cloudfront/model/TrustedSigners.h>
#include <aws/cloudfront/model/ViewerProtocolPolicy.h>
#include <aws/cloudfront/model/AllowedMethods.h>
#include <aws/cloudfront/model/LambdaFunctionAssociations.h>
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
   * <p>A complex type that describes how CloudFront processes requests.</p> <p>You
   * must create at least as many cache behaviors (including the default cache
   * behavior) as you have origins if you want CloudFront to distribute objects from
   * all of the origins. Each cache behavior specifies the one origin from which you
   * want CloudFront to get objects. If you have two origins and only the default
   * cache behavior, the default cache behavior will cause CloudFront to get objects
   * from one of the origins, but the other origin is never used.</p> <p>For the
   * current limit on the number of cache behaviors that you can add to a
   * distribution, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_cloudfront">Amazon
   * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p> <p>If you don't
   * want to specify any cache behaviors, include only an empty
   * <code>CacheBehaviors</code> element. Don't include an empty
   * <code>CacheBehavior</code> element, or CloudFront returns a
   * <code>MalformedXML</code> error.</p> <p>To delete all cache behaviors in an
   * existing distribution, update the distribution configuration and include only an
   * empty <code>CacheBehaviors</code> element.</p> <p>To add, change, or remove one
   * or more cache behaviors, update the distribution configuration and specify all
   * of the cache behaviors that you want to include in the updated distribution.</p>
   * <p>For more information about cache behaviors, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
   * Behaviors</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CacheBehavior">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CacheBehavior
  {
  public:
    CacheBehavior();
    CacheBehavior(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheBehavior& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetPathPattern() const{ return m_pathPattern; }

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool PathPatternHasBeenSet() const { return m_pathPatternHasBeenSet; }

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetPathPattern(const Aws::String& value) { m_pathPatternHasBeenSet = true; m_pathPattern = value; }

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetPathPattern(Aws::String&& value) { m_pathPatternHasBeenSet = true; m_pathPattern = std::move(value); }

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetPathPattern(const char* value) { m_pathPatternHasBeenSet = true; m_pathPattern.assign(value); }

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithPathPattern(const Aws::String& value) { SetPathPattern(value); return *this;}

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithPathPattern(Aws::String&& value) { SetPathPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p> <note> <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p> </note> <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithPathPattern(const char* value) { SetPathPattern(value); return *this;}


    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline const Aws::String& GetTargetOriginId() const{ return m_targetOriginId; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline bool TargetOriginIdHasBeenSet() const { return m_targetOriginIdHasBeenSet; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline void SetTargetOriginId(const Aws::String& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = value; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline void SetTargetOriginId(Aws::String&& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = std::move(value); }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline void SetTargetOriginId(const char* value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId.assign(value); }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithTargetOriginId(const Aws::String& value) { SetTargetOriginId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithTargetOriginId(Aws::String&& value) { SetTargetOriginId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithTargetOriginId(const char* value) { SetTargetOriginId(value); return *this;}


    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline const ForwardedValues& GetForwardedValues() const{ return m_forwardedValues; }

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline bool ForwardedValuesHasBeenSet() const { return m_forwardedValuesHasBeenSet; }

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline void SetForwardedValues(const ForwardedValues& value) { m_forwardedValuesHasBeenSet = true; m_forwardedValues = value; }

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline void SetForwardedValues(ForwardedValues&& value) { m_forwardedValuesHasBeenSet = true; m_forwardedValues = std::move(value); }

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline CacheBehavior& WithForwardedValues(const ForwardedValues& value) { SetForwardedValues(value); return *this;}

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline CacheBehavior& WithForwardedValues(ForwardedValues&& value) { SetForwardedValues(std::move(value)); return *this;}


    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::move(value); }

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline CacheBehavior& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>. </p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline CacheBehavior& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline const ViewerProtocolPolicy& GetViewerProtocolPolicy() const{ return m_viewerProtocolPolicy; }

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline bool ViewerProtocolPolicyHasBeenSet() const { return m_viewerProtocolPolicyHasBeenSet; }

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline void SetViewerProtocolPolicy(const ViewerProtocolPolicy& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline void SetViewerProtocolPolicy(ViewerProtocolPolicy&& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = std::move(value); }

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline CacheBehavior& WithViewerProtocolPolicy(const ViewerProtocolPolicy& value) { SetViewerProtocolPolicy(value); return *this;}

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL. </p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden). </p> </li> </ul>
     * <p>For more information about requiring the HTTPS protocol, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/SecureConnections.html">Using
     * an HTTPS Connection to Access Your Objects</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p> <note> <p>The only way to guarantee that viewers
     * retrieve an object that was fetched from the origin using HTTPS is never to use
     * any other protocol to fetch the object. If you have recently changed from HTTP
     * to HTTPS, we recommend that you clear your objects' cache because cached objects
     * are protocol agnostic. That means that an edge location will return an object
     * from the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> </note>
     */
    inline CacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy&& value) { SetViewerProtocolPolicy(std::move(value)); return *this;}


    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">
     * Managing How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>
     * Amazon CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code>
     * for <code>MinTTL</code> if you configure CloudFront to forward all headers to
     * your origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline long long GetMinTTL() const{ return m_minTTL; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">
     * Managing How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>
     * Amazon CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code>
     * for <code>MinTTL</code> if you configure CloudFront to forward all headers to
     * your origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline bool MinTTLHasBeenSet() const { return m_minTTLHasBeenSet; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">
     * Managing How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>
     * Amazon CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code>
     * for <code>MinTTL</code> if you configure CloudFront to forward all headers to
     * your origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline void SetMinTTL(long long value) { m_minTTLHasBeenSet = true; m_minTTL = value; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">
     * Managing How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>
     * Amazon CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code>
     * for <code>MinTTL</code> if you configure CloudFront to forward all headers to
     * your origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline CacheBehavior& WithMinTTL(long long value) { SetMinTTL(value); return *this;}


    
    inline const AllowedMethods& GetAllowedMethods() const{ return m_allowedMethods; }

    
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }

    
    inline void SetAllowedMethods(const AllowedMethods& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }

    
    inline void SetAllowedMethods(AllowedMethods&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::move(value); }

    
    inline CacheBehavior& WithAllowedMethods(const AllowedMethods& value) { SetAllowedMethods(value); return *this;}

    
    inline CacheBehavior& WithAllowedMethods(AllowedMethods&& value) { SetAllowedMethods(std::move(value)); return *this;}


    /**
     * <p>Indicates whether you want to distribute media files in the Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify <code>true</code>; if not, specify <code>false</code>. If you
     * specify <code>true</code> for <code>SmoothStreaming</code>, you can still
     * distribute other content using this cache behavior if the content matches the
     * value of <code>PathPattern</code>. </p>
     */
    inline bool GetSmoothStreaming() const{ return m_smoothStreaming; }

    /**
     * <p>Indicates whether you want to distribute media files in the Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify <code>true</code>; if not, specify <code>false</code>. If you
     * specify <code>true</code> for <code>SmoothStreaming</code>, you can still
     * distribute other content using this cache behavior if the content matches the
     * value of <code>PathPattern</code>. </p>
     */
    inline bool SmoothStreamingHasBeenSet() const { return m_smoothStreamingHasBeenSet; }

    /**
     * <p>Indicates whether you want to distribute media files in the Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify <code>true</code>; if not, specify <code>false</code>. If you
     * specify <code>true</code> for <code>SmoothStreaming</code>, you can still
     * distribute other content using this cache behavior if the content matches the
     * value of <code>PathPattern</code>. </p>
     */
    inline void SetSmoothStreaming(bool value) { m_smoothStreamingHasBeenSet = true; m_smoothStreaming = value; }

    /**
     * <p>Indicates whether you want to distribute media files in the Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify <code>true</code>; if not, specify <code>false</code>. If you
     * specify <code>true</code> for <code>SmoothStreaming</code>, you can still
     * distribute other content using this cache behavior if the content matches the
     * value of <code>PathPattern</code>. </p>
     */
    inline CacheBehavior& WithSmoothStreaming(bool value) { SetSmoothStreaming(value); return *this;}


    /**
     * <p>The default amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin does not add HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline long long GetDefaultTTL() const{ return m_defaultTTL; }

    /**
     * <p>The default amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin does not add HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline bool DefaultTTLHasBeenSet() const { return m_defaultTTLHasBeenSet; }

    /**
     * <p>The default amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin does not add HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline void SetDefaultTTL(long long value) { m_defaultTTLHasBeenSet = true; m_defaultTTL = value; }

    /**
     * <p>The default amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin does not add HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}


    /**
     * <p>The maximum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline long long GetMaxTTL() const{ return m_maxTTL; }

    /**
     * <p>The maximum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline bool MaxTTLHasBeenSet() const { return m_maxTTLHasBeenSet; }

    /**
     * <p>The maximum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline void SetMaxTTL(long long value) { m_maxTTLHasBeenSet = true; m_maxTTL = value; }

    /**
     * <p>The maximum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as <code>Cache-Control max-age</code>,
     * <code>Cache-Control s-maxage</code>, and <code>Expires</code> to objects. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithMaxTTL(long long value) { SetMaxTTL(value); return *this;}


    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify true; if not, specify false. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetCompress() const{ return m_compress; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify true; if not, specify false. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool CompressHasBeenSet() const { return m_compressHasBeenSet; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify true; if not, specify false. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetCompress(bool value) { m_compressHasBeenSet = true; m_compress = value; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify true; if not, specify false. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CacheBehavior& WithCompress(bool value) { SetCompress(value); return *this;}


    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline const LambdaFunctionAssociations& GetLambdaFunctionAssociations() const{ return m_lambdaFunctionAssociations; }

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline bool LambdaFunctionAssociationsHasBeenSet() const { return m_lambdaFunctionAssociationsHasBeenSet; }

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline void SetLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = value; }

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline void SetLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = std::move(value); }

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline CacheBehavior& WithLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { SetLambdaFunctionAssociations(value); return *this;}

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline CacheBehavior& WithLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { SetLambdaFunctionAssociations(std::move(value)); return *this;}


    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline const Aws::String& GetFieldLevelEncryptionId() const{ return m_fieldLevelEncryptionId; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline bool FieldLevelEncryptionIdHasBeenSet() const { return m_fieldLevelEncryptionIdHasBeenSet; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline void SetFieldLevelEncryptionId(const Aws::String& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = value; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline void SetFieldLevelEncryptionId(Aws::String&& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = std::move(value); }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline void SetFieldLevelEncryptionId(const char* value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId.assign(value); }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithFieldLevelEncryptionId(const Aws::String& value) { SetFieldLevelEncryptionId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithFieldLevelEncryptionId(Aws::String&& value) { SetFieldLevelEncryptionId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline CacheBehavior& WithFieldLevelEncryptionId(const char* value) { SetFieldLevelEncryptionId(value); return *this;}

  private:

    Aws::String m_pathPattern;
    bool m_pathPatternHasBeenSet;

    Aws::String m_targetOriginId;
    bool m_targetOriginIdHasBeenSet;

    ForwardedValues m_forwardedValues;
    bool m_forwardedValuesHasBeenSet;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet;

    ViewerProtocolPolicy m_viewerProtocolPolicy;
    bool m_viewerProtocolPolicyHasBeenSet;

    long long m_minTTL;
    bool m_minTTLHasBeenSet;

    AllowedMethods m_allowedMethods;
    bool m_allowedMethodsHasBeenSet;

    bool m_smoothStreaming;
    bool m_smoothStreamingHasBeenSet;

    long long m_defaultTTL;
    bool m_defaultTTLHasBeenSet;

    long long m_maxTTL;
    bool m_maxTTLHasBeenSet;

    bool m_compress;
    bool m_compressHasBeenSet;

    LambdaFunctionAssociations m_lambdaFunctionAssociations;
    bool m_lambdaFunctionAssociationsHasBeenSet;

    Aws::String m_fieldLevelEncryptionId;
    bool m_fieldLevelEncryptionIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
