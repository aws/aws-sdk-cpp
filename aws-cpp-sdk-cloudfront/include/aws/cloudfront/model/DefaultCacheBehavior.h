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
   * <p>A complex type that describes the default cache behavior if you don't specify
   * a <code>CacheBehavior</code> element or if files don't match any of the values
   * of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You must
   * create exactly one default cache behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DefaultCacheBehavior">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API DefaultCacheBehavior
  {
  public:
    DefaultCacheBehavior();
    DefaultCacheBehavior(const Aws::Utils::Xml::XmlNode& xmlNode);
    DefaultCacheBehavior& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
    inline DefaultCacheBehavior& WithTargetOriginId(const Aws::String& value) { SetTargetOriginId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline DefaultCacheBehavior& WithTargetOriginId(Aws::String&& value) { SetTargetOriginId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when a request matches the path pattern either for a cache behavior
     * or for the default cache behavior in your distribution.</p>
     */
    inline DefaultCacheBehavior& WithTargetOriginId(const char* value) { SetTargetOriginId(value); return *this;}


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
    inline DefaultCacheBehavior& WithForwardedValues(const ForwardedValues& value) { SetForwardedValues(value); return *this;}

    /**
     * <p>A complex type that specifies how CloudFront handles query strings and
     * cookies.</p>
     */
    inline DefaultCacheBehavior& WithForwardedValues(ForwardedValues&& value) { SetForwardedValues(std::move(value)); return *this;}


    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
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
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
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
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
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
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
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
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline DefaultCacheBehavior& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * <p>A complex type that specifies the AWS accounts, if any, that you want to
     * allow to create signed URLs for private content.</p> <p>If you want to require
     * signed URLs in requests for objects in the target origin that match the
     * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
     * <code>Enabled</code>, and specify the applicable values for
     * <code>Quantity</code> and <code>Items</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
     * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
     * objects that match <code>PathPattern</code>, specify <code>false</code> for
     * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
     * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
     * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
     * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
     * of the trusted signers that you want to include in the updated distribution.</p>
     */
    inline DefaultCacheBehavior& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
    inline DefaultCacheBehavior& WithViewerProtocolPolicy(const ViewerProtocolPolicy& value) { SetViewerProtocolPolicy(value); return *this;}

    /**
     * <p>The protocol that viewers can use to access the files in the origin specified
     * by <code>TargetOriginId</code> when a request matches the path pattern in
     * <code>PathPattern</code>. You can specify the following options:</p> <ul> <li>
     * <p> <code>allow-all</code>: Viewers can use HTTP or HTTPS.</p> </li> <li> <p>
     * <code>redirect-to-https</code>: If a viewer submits an HTTP request, CloudFront
     * returns an HTTP status code of 301 (Moved Permanently) to the viewer along with
     * the HTTPS URL. The viewer then resubmits the request using the new URL.</p>
     * </li> <li> <p> <code>https-only</code>: If a viewer sends an HTTP request,
     * CloudFront returns an HTTP status code of 403 (Forbidden).</p> </li> </ul>
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
    inline DefaultCacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy&& value) { SetViewerProtocolPolicy(std::move(value)); return *this;}


    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code> for
     * <code>MinTTL</code> if you configure CloudFront to forward all headers to your
     * origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline long long GetMinTTL() const{ return m_minTTL; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code> for
     * <code>MinTTL</code> if you configure CloudFront to forward all headers to your
     * origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline bool MinTTLHasBeenSet() const { return m_minTTLHasBeenSet; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code> for
     * <code>MinTTL</code> if you configure CloudFront to forward all headers to your
     * origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline void SetMinTTL(long long value) { m_minTTLHasBeenSet = true; m_minTTL = value; }

    /**
     * <p>The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * How Long Content Stays in an Edge Cache (Expiration)</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p> <p>You must specify <code>0</code> for
     * <code>MinTTL</code> if you configure CloudFront to forward all headers to your
     * origin (under <code>Headers</code>, if you specify <code>1</code> for
     * <code>Quantity</code> and <code>*</code> for <code>Name</code>).</p>
     */
    inline DefaultCacheBehavior& WithMinTTL(long long value) { SetMinTTL(value); return *this;}


    
    inline const AllowedMethods& GetAllowedMethods() const{ return m_allowedMethods; }

    
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }

    
    inline void SetAllowedMethods(const AllowedMethods& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }

    
    inline void SetAllowedMethods(AllowedMethods&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::move(value); }

    
    inline DefaultCacheBehavior& WithAllowedMethods(const AllowedMethods& value) { SetAllowedMethods(value); return *this;}

    
    inline DefaultCacheBehavior& WithAllowedMethods(AllowedMethods&& value) { SetAllowedMethods(std::move(value)); return *this;}


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
    inline DefaultCacheBehavior& WithSmoothStreaming(bool value) { SetSmoothStreaming(value); return *this;}


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
    inline DefaultCacheBehavior& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}


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
    inline DefaultCacheBehavior& WithMaxTTL(long long value) { SetMaxTTL(value); return *this;}


    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify <code>true</code>; if not, specify
     * <code>false</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetCompress() const{ return m_compress; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify <code>true</code>; if not, specify
     * <code>false</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool CompressHasBeenSet() const { return m_compressHasBeenSet; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify <code>true</code>; if not, specify
     * <code>false</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetCompress(bool value) { m_compressHasBeenSet = true; m_compress = value; }

    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify <code>true</code>; if not, specify
     * <code>false</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithCompress(bool value) { SetCompress(value); return *this;}


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
    inline DefaultCacheBehavior& WithLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { SetLambdaFunctionAssociations(value); return *this;}

    /**
     * <p>A complex type that contains zero or more Lambda function associations for a
     * cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { SetLambdaFunctionAssociations(std::move(value)); return *this;}


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
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(const Aws::String& value) { SetFieldLevelEncryptionId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(Aws::String&& value) { SetFieldLevelEncryptionId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for a
     * cache behavior or for the default cache behavior in your distribution.</p>
     */
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(const char* value) { SetFieldLevelEncryptionId(value); return *this;}

  private:

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
