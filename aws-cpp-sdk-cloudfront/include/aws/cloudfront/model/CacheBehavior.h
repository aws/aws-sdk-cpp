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
#include <aws/cloudfront/model/ForwardedValues.h>
#include <aws/cloudfront/model/TrustedSigners.h>
#include <aws/cloudfront/model/ViewerProtocolPolicy.h>
#include <aws/cloudfront/model/AllowedMethods.h>

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
   * A complex type that describes how CloudFront processes requests. You can create
   * up to 10 cache behaviors.You must create at least as many cache behaviors
   * (including the default cache behavior) as you have origins if you want
   * CloudFront to distribute objects from all of the origins. Each cache behavior
   * specifies the one origin from which you want CloudFront to get objects. If you
   * have two origins and only the default cache behavior, the default cache behavior
   * will cause CloudFront to get objects from one of the origins, but the other
   * origin will never be used. If you don't want to specify any cache behaviors,
   * include only an empty CacheBehaviors element. Don't include an empty
   * CacheBehavior element, or CloudFront returns a MalformedXML error. To delete all
   * cache behaviors in an existing distribution, update the distribution
   * configuration and include only an empty CacheBehaviors element. To add, change,
   * or remove one or more cache behaviors, update the distribution configuration and
   * specify all of the cache behaviors that you want to include in the updated
   * distribution.
   */
  class AWS_CLOUDFRONT_API CacheBehavior
  {
  public:
    CacheBehavior();
    CacheBehavior(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheBehavior& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline const Aws::String& GetPathPattern() const{ return m_pathPattern; }

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline void SetPathPattern(const Aws::String& value) { m_pathPatternHasBeenSet = true; m_pathPattern = value; }

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline void SetPathPattern(Aws::String&& value) { m_pathPatternHasBeenSet = true; m_pathPattern = value; }

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline void SetPathPattern(const char* value) { m_pathPatternHasBeenSet = true; m_pathPattern.assign(value); }

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline CacheBehavior& WithPathPattern(const Aws::String& value) { SetPathPattern(value); return *this;}

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline CacheBehavior& WithPathPattern(Aws::String&& value) { SetPathPattern(value); return *this;}

    /**
     * The pattern (for example, images/ *.jpg) that specifies which requests you want
     * this cache behavior to apply to. When CloudFront receives an end-user request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution. The path pattern for the default cache
     * behavior is * and cannot be changed. If the request for an object does not match
     * the path pattern for any cache behaviors, CloudFront applies the behavior in the
     * default cache behavior.
     */
    inline CacheBehavior& WithPathPattern(const char* value) { SetPathPattern(value); return *this;}

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline const Aws::String& GetTargetOriginId() const{ return m_targetOriginId; }

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline void SetTargetOriginId(const Aws::String& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = value; }

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline void SetTargetOriginId(Aws::String&& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = value; }

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline void SetTargetOriginId(const char* value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId.assign(value); }

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline CacheBehavior& WithTargetOriginId(const Aws::String& value) { SetTargetOriginId(value); return *this;}

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline CacheBehavior& WithTargetOriginId(Aws::String&& value) { SetTargetOriginId(value); return *this;}

    /**
     * The value of ID for the origin that you want CloudFront to route requests to
     * when a request matches the path pattern either for a cache behavior or for the
     * default cache behavior.
     */
    inline CacheBehavior& WithTargetOriginId(const char* value) { SetTargetOriginId(value); return *this;}

    /**
     * A complex type that specifies how CloudFront handles query strings, cookies and
     * headers.
     */
    inline const ForwardedValues& GetForwardedValues() const{ return m_forwardedValues; }

    /**
     * A complex type that specifies how CloudFront handles query strings, cookies and
     * headers.
     */
    inline void SetForwardedValues(const ForwardedValues& value) { m_forwardedValuesHasBeenSet = true; m_forwardedValues = value; }

    /**
     * A complex type that specifies how CloudFront handles query strings, cookies and
     * headers.
     */
    inline void SetForwardedValues(ForwardedValues&& value) { m_forwardedValuesHasBeenSet = true; m_forwardedValues = value; }

    /**
     * A complex type that specifies how CloudFront handles query strings, cookies and
     * headers.
     */
    inline CacheBehavior& WithForwardedValues(const ForwardedValues& value) { SetForwardedValues(value); return *this;}

    /**
     * A complex type that specifies how CloudFront handles query strings, cookies and
     * headers.
     */
    inline CacheBehavior& WithForwardedValues(ForwardedValues&& value) { SetForwardedValues(value); return *this;}

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline CacheBehavior& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}

    /**
     * A complex type that specifies the AWS accounts, if any, that you want to allow
     * to create signed URLs for private content. If you want to require signed URLs in
     * requests for objects in the target origin that match the PathPattern for this
     * cache behavior, specify true for Enabled, and specify the applicable values for
     * Quantity and Items. For more information, go to Using a Signed URL to Serve
     * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
     * require signed URLs in requests for objects that match PathPattern, specify
     * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
     * or more trusted signers, change Enabled to true (if it's currently false),
     * change Quantity as applicable, and specify all of the trusted signers that you
     * want to include in the updated distribution.
     */
    inline CacheBehavior& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(value); return *this;}

    /**
     * Use this element to specify the protocol that users can use to access the files
     * in the origin specified by TargetOriginId when a request matches the path
     * pattern in PathPattern. If you want CloudFront to allow end users to use any
     * available protocol, specify allow-all. If you want CloudFront to require HTTPS,
     * specify https. If you want CloudFront to respond to an HTTP request with an HTTP
     * status code of 301 (Moved Permanently) and the HTTPS URL, specify
     * redirect-to-https. The viewer then resubmits the request using the HTTPS URL.
     */
    inline const ViewerProtocolPolicy& GetViewerProtocolPolicy() const{ return m_viewerProtocolPolicy; }

    /**
     * Use this element to specify the protocol that users can use to access the files
     * in the origin specified by TargetOriginId when a request matches the path
     * pattern in PathPattern. If you want CloudFront to allow end users to use any
     * available protocol, specify allow-all. If you want CloudFront to require HTTPS,
     * specify https. If you want CloudFront to respond to an HTTP request with an HTTP
     * status code of 301 (Moved Permanently) and the HTTPS URL, specify
     * redirect-to-https. The viewer then resubmits the request using the HTTPS URL.
     */
    inline void SetViewerProtocolPolicy(const ViewerProtocolPolicy& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }

    /**
     * Use this element to specify the protocol that users can use to access the files
     * in the origin specified by TargetOriginId when a request matches the path
     * pattern in PathPattern. If you want CloudFront to allow end users to use any
     * available protocol, specify allow-all. If you want CloudFront to require HTTPS,
     * specify https. If you want CloudFront to respond to an HTTP request with an HTTP
     * status code of 301 (Moved Permanently) and the HTTPS URL, specify
     * redirect-to-https. The viewer then resubmits the request using the HTTPS URL.
     */
    inline void SetViewerProtocolPolicy(ViewerProtocolPolicy&& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }

    /**
     * Use this element to specify the protocol that users can use to access the files
     * in the origin specified by TargetOriginId when a request matches the path
     * pattern in PathPattern. If you want CloudFront to allow end users to use any
     * available protocol, specify allow-all. If you want CloudFront to require HTTPS,
     * specify https. If you want CloudFront to respond to an HTTP request with an HTTP
     * status code of 301 (Moved Permanently) and the HTTPS URL, specify
     * redirect-to-https. The viewer then resubmits the request using the HTTPS URL.
     */
    inline CacheBehavior& WithViewerProtocolPolicy(const ViewerProtocolPolicy& value) { SetViewerProtocolPolicy(value); return *this;}

    /**
     * Use this element to specify the protocol that users can use to access the files
     * in the origin specified by TargetOriginId when a request matches the path
     * pattern in PathPattern. If you want CloudFront to allow end users to use any
     * available protocol, specify allow-all. If you want CloudFront to require HTTPS,
     * specify https. If you want CloudFront to respond to an HTTP request with an HTTP
     * status code of 301 (Moved Permanently) and the HTTPS URL, specify
     * redirect-to-https. The viewer then resubmits the request using the HTTPS URL.
     */
    inline CacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy&& value) { SetViewerProtocolPolicy(value); return *this;}

    /**
     * The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront queries your origin to see whether the object has been
     * updated.You can specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline long long GetMinTTL() const{ return m_minTTL; }

    /**
     * The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront queries your origin to see whether the object has been
     * updated.You can specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline void SetMinTTL(long long value) { m_minTTLHasBeenSet = true; m_minTTL = value; }

    /**
     * The minimum amount of time that you want objects to stay in CloudFront caches
     * before CloudFront queries your origin to see whether the object has been
     * updated.You can specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline CacheBehavior& WithMinTTL(long long value) { SetMinTTL(value); return *this;}

    
    inline const AllowedMethods& GetAllowedMethods() const{ return m_allowedMethods; }

    
    inline void SetAllowedMethods(const AllowedMethods& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }

    
    inline void SetAllowedMethods(AllowedMethods&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }

    
    inline CacheBehavior& WithAllowedMethods(const AllowedMethods& value) { SetAllowedMethods(value); return *this;}

    
    inline CacheBehavior& WithAllowedMethods(AllowedMethods&& value) { SetAllowedMethods(value); return *this;}

    /**
     * Indicates whether you want to distribute media files in Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify true; if not, specify false.
     */
    inline bool GetSmoothStreaming() const{ return m_smoothStreaming; }

    /**
     * Indicates whether you want to distribute media files in Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify true; if not, specify false.
     */
    inline void SetSmoothStreaming(bool value) { m_smoothStreamingHasBeenSet = true; m_smoothStreaming = value; }

    /**
     * Indicates whether you want to distribute media files in Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify true; if not, specify false.
     */
    inline CacheBehavior& WithSmoothStreaming(bool value) { SetSmoothStreaming(value); return *this;}

    /**
     * If you don't configure your origin to add a Cache-Control max-age directive or
     * an Expires header, DefaultTTL is the default amount of time (in seconds) that an
     * object is in a CloudFront cache before CloudFront forwards another request to
     * your origin to determine whether the object has been updated. The value that you
     * specify applies only when your origin does not add HTTP headers such as
     * Cache-Control max-age, Cache-Control s-maxage, and Expires to objects. You can
     * specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline long long GetDefaultTTL() const{ return m_defaultTTL; }

    /**
     * If you don't configure your origin to add a Cache-Control max-age directive or
     * an Expires header, DefaultTTL is the default amount of time (in seconds) that an
     * object is in a CloudFront cache before CloudFront forwards another request to
     * your origin to determine whether the object has been updated. The value that you
     * specify applies only when your origin does not add HTTP headers such as
     * Cache-Control max-age, Cache-Control s-maxage, and Expires to objects. You can
     * specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline void SetDefaultTTL(long long value) { m_defaultTTLHasBeenSet = true; m_defaultTTL = value; }

    /**
     * If you don't configure your origin to add a Cache-Control max-age directive or
     * an Expires header, DefaultTTL is the default amount of time (in seconds) that an
     * object is in a CloudFront cache before CloudFront forwards another request to
     * your origin to determine whether the object has been updated. The value that you
     * specify applies only when your origin does not add HTTP headers such as
     * Cache-Control max-age, Cache-Control s-maxage, and Expires to objects. You can
     * specify a value from 0 to 3,153,600,000 seconds (100 years).
     */
    inline CacheBehavior& WithDefaultTTL(long long value) { SetDefaultTTL(value); return *this;}

    /**
     * The maximum amount of time (in seconds) that an object is in a CloudFront cache
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as Cache-Control max-age, Cache-Control s-maxage,
     * and Expires to objects. You can specify a value from 0 to 3,153,600,000 seconds
     * (100 years).
     */
    inline long long GetMaxTTL() const{ return m_maxTTL; }

    /**
     * The maximum amount of time (in seconds) that an object is in a CloudFront cache
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as Cache-Control max-age, Cache-Control s-maxage,
     * and Expires to objects. You can specify a value from 0 to 3,153,600,000 seconds
     * (100 years).
     */
    inline void SetMaxTTL(long long value) { m_maxTTLHasBeenSet = true; m_maxTTL = value; }

    /**
     * The maximum amount of time (in seconds) that an object is in a CloudFront cache
     * before CloudFront forwards another request to your origin to determine whether
     * the object has been updated. The value that you specify applies only when your
     * origin adds HTTP headers such as Cache-Control max-age, Cache-Control s-maxage,
     * and Expires to objects. You can specify a value from 0 to 3,153,600,000 seconds
     * (100 years).
     */
    inline CacheBehavior& WithMaxTTL(long long value) { SetMaxTTL(value); return *this;}

    /**
     * Whether you want CloudFront to automatically compress content for web requests
     * that include Accept-Encoding: gzip in the request header. If so, specify true;
     * if not, specify false. CloudFront compresses files larger than 1000 bytes and
     * less than 1 megabyte for both Amazon S3 and custom origins. When a CloudFront
     * edge location is unusually busy, some files might not be compressed. The value
     * of the Content-Type header must be on the list of file types that CloudFront
     * will compress. For the current list, see <a
     * href="http://docs.aws.amazon.com/console/cloudfront/compressed-content">Serving
     * Compressed Content</a> in the Amazon CloudFront Developer Guide. If you
     * configure CloudFront to compress content, CloudFront removes the ETag response
     * header from the objects that it compresses. The ETag header indicates that the
     * version in a CloudFront edge cache is identical to the version on the origin
     * server, but after compression the two versions are no longer identical. As a
     * result, for compressed objects, CloudFront can't use the ETag header to
     * determine whether an expired object in the CloudFront edge cache is still the
     * latest version.
     */
    inline bool GetCompress() const{ return m_compress; }

    /**
     * Whether you want CloudFront to automatically compress content for web requests
     * that include Accept-Encoding: gzip in the request header. If so, specify true;
     * if not, specify false. CloudFront compresses files larger than 1000 bytes and
     * less than 1 megabyte for both Amazon S3 and custom origins. When a CloudFront
     * edge location is unusually busy, some files might not be compressed. The value
     * of the Content-Type header must be on the list of file types that CloudFront
     * will compress. For the current list, see <a
     * href="http://docs.aws.amazon.com/console/cloudfront/compressed-content">Serving
     * Compressed Content</a> in the Amazon CloudFront Developer Guide. If you
     * configure CloudFront to compress content, CloudFront removes the ETag response
     * header from the objects that it compresses. The ETag header indicates that the
     * version in a CloudFront edge cache is identical to the version on the origin
     * server, but after compression the two versions are no longer identical. As a
     * result, for compressed objects, CloudFront can't use the ETag header to
     * determine whether an expired object in the CloudFront edge cache is still the
     * latest version.
     */
    inline void SetCompress(bool value) { m_compressHasBeenSet = true; m_compress = value; }

    /**
     * Whether you want CloudFront to automatically compress content for web requests
     * that include Accept-Encoding: gzip in the request header. If so, specify true;
     * if not, specify false. CloudFront compresses files larger than 1000 bytes and
     * less than 1 megabyte for both Amazon S3 and custom origins. When a CloudFront
     * edge location is unusually busy, some files might not be compressed. The value
     * of the Content-Type header must be on the list of file types that CloudFront
     * will compress. For the current list, see <a
     * href="http://docs.aws.amazon.com/console/cloudfront/compressed-content">Serving
     * Compressed Content</a> in the Amazon CloudFront Developer Guide. If you
     * configure CloudFront to compress content, CloudFront removes the ETag response
     * header from the objects that it compresses. The ETag header indicates that the
     * version in a CloudFront edge cache is identical to the version on the origin
     * server, but after compression the two versions are no longer identical. As a
     * result, for compressed objects, CloudFront can't use the ETag header to
     * determine whether an expired object in the CloudFront edge cache is still the
     * latest version.
     */
    inline CacheBehavior& WithCompress(bool value) { SetCompress(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
