﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/TrustedSigners.h>
#include <aws/cloudfront/model/TrustedKeyGroups.h>
#include <aws/cloudfront/model/ViewerProtocolPolicy.h>
#include <aws/cloudfront/model/AllowedMethods.h>
#include <aws/cloudfront/model/LambdaFunctionAssociations.h>
#include <aws/cloudfront/model/FunctionAssociations.h>
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
   * <p>A complex type that describes the default cache behavior if you don’t specify
   * a <code>CacheBehavior</code> element or if request URLs don’t match any of the
   * values of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You
   * must create exactly one default cache behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DefaultCacheBehavior">AWS
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
     * requests to when they use the default cache behavior.</p>
     */
    inline const Aws::String& GetTargetOriginId() const{ return m_targetOriginId; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline bool TargetOriginIdHasBeenSet() const { return m_targetOriginIdHasBeenSet; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline void SetTargetOriginId(const Aws::String& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = value; }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline void SetTargetOriginId(Aws::String&& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = std::move(value); }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline void SetTargetOriginId(const char* value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId.assign(value); }

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithTargetOriginId(const Aws::String& value) { SetTargetOriginId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithTargetOriginId(Aws::String&& value) { SetTargetOriginId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithTargetOriginId(const char* value) { SetTargetOriginId(value); return *this;}


    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::move(value); }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer’s Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const TrustedKeyGroups& GetTrustedKeyGroups() const{ return m_trustedKeyGroups; }

    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool TrustedKeyGroupsHasBeenSet() const { return m_trustedKeyGroupsHasBeenSet; }

    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetTrustedKeyGroups(const TrustedKeyGroups& value) { m_trustedKeyGroupsHasBeenSet = true; m_trustedKeyGroups = value; }

    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetTrustedKeyGroups(TrustedKeyGroups&& value) { m_trustedKeyGroupsHasBeenSet = true; m_trustedKeyGroups = std::move(value); }

    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithTrustedKeyGroups(const TrustedKeyGroups& value) { SetTrustedKeyGroups(value); return *this;}

    /**
     * <p>A list of key groups that CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted key groups,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with a private key whose
     * corresponding public key is in the key group. The signed URL or cookie contains
     * information about which public key CloudFront should use to verify the
     * signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithTrustedKeyGroups(TrustedKeyGroups&& value) { SetTrustedKeyGroups(std::move(value)); return *this;}


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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
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
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-https-viewers-to-cloudfront.html">Requiring
     * HTTPS Between Viewers and CloudFront</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>  <p>The only way to guarantee that viewers retrieve an
     * object that was fetched from the origin using HTTPS is never to use any other
     * protocol to fetch the object. If you have recently changed from HTTP to HTTPS,
     * we recommend that you clear your objects’ cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
     */
    inline DefaultCacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy&& value) { SetViewerProtocolPolicy(std::move(value)); return *this;}


    
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
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline const LambdaFunctionAssociations& GetLambdaFunctionAssociations() const{ return m_lambdaFunctionAssociations; }

    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline bool LambdaFunctionAssociationsHasBeenSet() const { return m_lambdaFunctionAssociationsHasBeenSet; }

    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline void SetLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = value; }

    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline void SetLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = std::move(value); }

    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { SetLambdaFunctionAssociations(value); return *this;}

    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { SetLambdaFunctionAssociations(std::move(value)); return *this;}


    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline const FunctionAssociations& GetFunctionAssociations() const{ return m_functionAssociations; }

    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline bool FunctionAssociationsHasBeenSet() const { return m_functionAssociationsHasBeenSet; }

    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline void SetFunctionAssociations(const FunctionAssociations& value) { m_functionAssociationsHasBeenSet = true; m_functionAssociations = value; }

    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline void SetFunctionAssociations(FunctionAssociations&& value) { m_functionAssociationsHasBeenSet = true; m_functionAssociations = std::move(value); }

    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithFunctionAssociations(const FunctionAssociations& value) { SetFunctionAssociations(value); return *this;}

    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithFunctionAssociations(FunctionAssociations&& value) { SetFunctionAssociations(std::move(value)); return *this;}


    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline const Aws::String& GetFieldLevelEncryptionId() const{ return m_fieldLevelEncryptionId; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline bool FieldLevelEncryptionIdHasBeenSet() const { return m_fieldLevelEncryptionIdHasBeenSet; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline void SetFieldLevelEncryptionId(const Aws::String& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = value; }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline void SetFieldLevelEncryptionId(Aws::String&& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = std::move(value); }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline void SetFieldLevelEncryptionId(const char* value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId.assign(value); }

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(const Aws::String& value) { SetFieldLevelEncryptionId(value); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(Aws::String&& value) { SetFieldLevelEncryptionId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline DefaultCacheBehavior& WithFieldLevelEncryptionId(const char* value) { SetFieldLevelEncryptionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigArn() const{ return m_realtimeLogConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool RealtimeLogConfigArnHasBeenSet() const { return m_realtimeLogConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetRealtimeLogConfigArn(const Aws::String& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetRealtimeLogConfigArn(Aws::String&& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetRealtimeLogConfigArn(const char* value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithRealtimeLogConfigArn(const Aws::String& value) { SetRealtimeLogConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithRealtimeLogConfigArn(Aws::String&& value) { SetRealtimeLogConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithRealtimeLogConfigArn(const char* value) { SetRealtimeLogConfigArn(value); return *this;}


    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline const Aws::String& GetCachePolicyId() const{ return m_cachePolicyId; }

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline bool CachePolicyIdHasBeenSet() const { return m_cachePolicyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline void SetCachePolicyId(const Aws::String& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = value; }

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline void SetCachePolicyId(Aws::String&& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = std::move(value); }

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline void SetCachePolicyId(const char* value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId.assign(value); }

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline DefaultCacheBehavior& WithCachePolicyId(const Aws::String& value) { SetCachePolicyId(value); return *this;}

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline DefaultCacheBehavior& WithCachePolicyId(Aws::String&& value) { SetCachePolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cache policy that is attached to the default
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>DefaultCacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline DefaultCacheBehavior& WithCachePolicyId(const char* value) { SetCachePolicyId(value); return *this;}


    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOriginRequestPolicyId() const{ return m_originRequestPolicyId; }

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline bool OriginRequestPolicyIdHasBeenSet() const { return m_originRequestPolicyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginRequestPolicyId(const Aws::String& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = value; }

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginRequestPolicyId(Aws::String&& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = std::move(value); }

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline void SetOriginRequestPolicyId(const char* value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId.assign(value); }

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithOriginRequestPolicyId(const Aws::String& value) { SetOriginRequestPolicyId(value); return *this;}

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithOriginRequestPolicyId(Aws::String&& value) { SetOriginRequestPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline DefaultCacheBehavior& WithOriginRequestPolicyId(const char* value) { SetOriginRequestPolicyId(value); return *this;}


    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline const Aws::String& GetResponseHeadersPolicyId() const{ return m_responseHeadersPolicyId; }

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline bool ResponseHeadersPolicyIdHasBeenSet() const { return m_responseHeadersPolicyIdHasBeenSet; }

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline void SetResponseHeadersPolicyId(const Aws::String& value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId = value; }

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline void SetResponseHeadersPolicyId(Aws::String&& value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId = std::move(value); }

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline void SetResponseHeadersPolicyId(const char* value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId.assign(value); }

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline DefaultCacheBehavior& WithResponseHeadersPolicyId(const Aws::String& value) { SetResponseHeadersPolicyId(value); return *this;}

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline DefaultCacheBehavior& WithResponseHeadersPolicyId(Aws::String&& value) { SetResponseHeadersPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline DefaultCacheBehavior& WithResponseHeadersPolicyId(const char* value) { SetResponseHeadersPolicyId(value); return *this;}

  private:

    Aws::String m_targetOriginId;
    bool m_targetOriginIdHasBeenSet;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet;

    TrustedKeyGroups m_trustedKeyGroups;
    bool m_trustedKeyGroupsHasBeenSet;

    ViewerProtocolPolicy m_viewerProtocolPolicy;
    bool m_viewerProtocolPolicyHasBeenSet;

    AllowedMethods m_allowedMethods;
    bool m_allowedMethodsHasBeenSet;

    bool m_smoothStreaming;
    bool m_smoothStreamingHasBeenSet;

    bool m_compress;
    bool m_compressHasBeenSet;

    LambdaFunctionAssociations m_lambdaFunctionAssociations;
    bool m_lambdaFunctionAssociationsHasBeenSet;

    FunctionAssociations m_functionAssociations;
    bool m_functionAssociationsHasBeenSet;

    Aws::String m_fieldLevelEncryptionId;
    bool m_fieldLevelEncryptionIdHasBeenSet;

    Aws::String m_realtimeLogConfigArn;
    bool m_realtimeLogConfigArnHasBeenSet;

    Aws::String m_cachePolicyId;
    bool m_cachePolicyIdHasBeenSet;

    Aws::String m_originRequestPolicyId;
    bool m_originRequestPolicyIdHasBeenSet;

    Aws::String m_responseHeadersPolicyId;
    bool m_responseHeadersPolicyIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
