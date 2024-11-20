/**
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
#include <aws/cloudfront/model/GrpcConfig.h>
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
   * behavior) as you have origins if you want CloudFront to serve objects from all
   * of the origins. Each cache behavior specifies the one origin from which you want
   * CloudFront to get objects. If you have two origins and only the default cache
   * behavior, the default cache behavior will cause CloudFront to get objects from
   * one of the origins, but the other origin is never used.</p> <p>For the current
   * quota (formerly known as limit) on the number of cache behaviors that you can
   * add to a distribution, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/cloudfront-limits.html">Quotas</a>
   * in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If you don't want to
   * specify any cache behaviors, include only an empty <code>CacheBehaviors</code>
   * element. Don't specify an empty individual <code>CacheBehavior</code> element,
   * because this is invalid. For more information, see <a
   * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_CacheBehaviors.html">CacheBehaviors</a>.
   * </p> <p>To delete all cache behaviors in an existing distribution, update the
   * distribution configuration and include only an empty <code>CacheBehaviors</code>
   * element.</p> <p>To add, change, or remove one or more cache behaviors, update
   * the distribution configuration and specify all of the cache behaviors that you
   * want to include in the updated distribution.</p> <p>For more information about
   * cache behaviors, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesCacheBehavior">Cache
   * Behavior Settings</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CacheBehavior">AWS
   * API Reference</a></p>
   */
  class CacheBehavior
  {
  public:
    AWS_CLOUDFRONT_API CacheBehavior();
    AWS_CLOUDFRONT_API CacheBehavior(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CacheBehavior& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The pattern (for example, <code>images/ *.jpg</code>) that specifies which
     * requests to apply the behavior to. When CloudFront receives a viewer request,
     * the requested path is compared with path patterns in the order in which cache
     * behaviors are listed in the distribution.</p>  <p>You can optionally
     * include a slash (<code>/</code>) at the beginning of the path pattern. For
     * example, <code>/images/ *.jpg</code>. CloudFront behavior is the same with or
     * without the leading <code>/</code>.</p>  <p>The path pattern for the
     * default cache behavior is <code>*</code> and cannot be changed. If the request
     * for an object does not match the path pattern for any cache behaviors,
     * CloudFront applies the behavior in the default cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-values-specify.html#DownloadDistValuesPathPattern">Path
     * Pattern</a> in the <i> Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetPathPattern() const{ return m_pathPattern; }
    inline bool PathPatternHasBeenSet() const { return m_pathPatternHasBeenSet; }
    inline void SetPathPattern(const Aws::String& value) { m_pathPatternHasBeenSet = true; m_pathPattern = value; }
    inline void SetPathPattern(Aws::String&& value) { m_pathPatternHasBeenSet = true; m_pathPattern = std::move(value); }
    inline void SetPathPattern(const char* value) { m_pathPatternHasBeenSet = true; m_pathPattern.assign(value); }
    inline CacheBehavior& WithPathPattern(const Aws::String& value) { SetPathPattern(value); return *this;}
    inline CacheBehavior& WithPathPattern(Aws::String&& value) { SetPathPattern(std::move(value)); return *this;}
    inline CacheBehavior& WithPathPattern(const char* value) { SetPathPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they match this cache behavior.</p>
     */
    inline const Aws::String& GetTargetOriginId() const{ return m_targetOriginId; }
    inline bool TargetOriginIdHasBeenSet() const { return m_targetOriginIdHasBeenSet; }
    inline void SetTargetOriginId(const Aws::String& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = value; }
    inline void SetTargetOriginId(Aws::String&& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = std::move(value); }
    inline void SetTargetOriginId(const char* value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId.assign(value); }
    inline CacheBehavior& WithTargetOriginId(const Aws::String& value) { SetTargetOriginId(value); return *this;}
    inline CacheBehavior& WithTargetOriginId(Aws::String&& value) { SetTargetOriginId(std::move(value)); return *this;}
    inline CacheBehavior& WithTargetOriginId(const char* value) { SetTargetOriginId(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>A list of Amazon Web Services
     * account IDs whose public keys CloudFront can use to validate signed URLs or
     * signed cookies.</p> <p>When a cache behavior contains trusted signers,
     * CloudFront requires signed URLs or signed cookies for all requests that match
     * the cache behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in the trusted signer's Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const TrustedSigners& GetTrustedSigners() const{ return m_trustedSigners; }
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }
    inline void SetTrustedSigners(const TrustedSigners& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = value; }
    inline void SetTrustedSigners(TrustedSigners&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::move(value); }
    inline CacheBehavior& WithTrustedSigners(const TrustedSigners& value) { SetTrustedSigners(value); return *this;}
    inline CacheBehavior& WithTrustedSigners(TrustedSigners&& value) { SetTrustedSigners(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool TrustedKeyGroupsHasBeenSet() const { return m_trustedKeyGroupsHasBeenSet; }
    inline void SetTrustedKeyGroups(const TrustedKeyGroups& value) { m_trustedKeyGroupsHasBeenSet = true; m_trustedKeyGroups = value; }
    inline void SetTrustedKeyGroups(TrustedKeyGroups&& value) { m_trustedKeyGroupsHasBeenSet = true; m_trustedKeyGroups = std::move(value); }
    inline CacheBehavior& WithTrustedKeyGroups(const TrustedKeyGroups& value) { SetTrustedKeyGroups(value); return *this;}
    inline CacheBehavior& WithTrustedKeyGroups(TrustedKeyGroups&& value) { SetTrustedKeyGroups(std::move(value)); return *this;}
    ///@}

    ///@{
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
     * we recommend that you clear your objects' cache because cached objects are
     * protocol agnostic. That means that an edge location will return an object from
     * the cache regardless of whether the current request protocol matches the
     * protocol used previously. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Expiration.html">Managing
     * Cache Expiration</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * 
     */
    inline const ViewerProtocolPolicy& GetViewerProtocolPolicy() const{ return m_viewerProtocolPolicy; }
    inline bool ViewerProtocolPolicyHasBeenSet() const { return m_viewerProtocolPolicyHasBeenSet; }
    inline void SetViewerProtocolPolicy(const ViewerProtocolPolicy& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }
    inline void SetViewerProtocolPolicy(ViewerProtocolPolicy&& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = std::move(value); }
    inline CacheBehavior& WithViewerProtocolPolicy(const ViewerProtocolPolicy& value) { SetViewerProtocolPolicy(value); return *this;}
    inline CacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy&& value) { SetViewerProtocolPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AllowedMethods& GetAllowedMethods() const{ return m_allowedMethods; }
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }
    inline void SetAllowedMethods(const AllowedMethods& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }
    inline void SetAllowedMethods(AllowedMethods&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::move(value); }
    inline CacheBehavior& WithAllowedMethods(const AllowedMethods& value) { SetAllowedMethods(value); return *this;}
    inline CacheBehavior& WithAllowedMethods(AllowedMethods&& value) { SetAllowedMethods(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to distribute media files in the Microsoft Smooth
     * Streaming format using the origin that is associated with this cache behavior.
     * If so, specify <code>true</code>; if not, specify <code>false</code>. If you
     * specify <code>true</code> for <code>SmoothStreaming</code>, you can still
     * distribute other content using this cache behavior if the content matches the
     * value of <code>PathPattern</code>.</p>
     */
    inline bool GetSmoothStreaming() const{ return m_smoothStreaming; }
    inline bool SmoothStreamingHasBeenSet() const { return m_smoothStreamingHasBeenSet; }
    inline void SetSmoothStreaming(bool value) { m_smoothStreamingHasBeenSet = true; m_smoothStreaming = value; }
    inline CacheBehavior& WithSmoothStreaming(bool value) { SetSmoothStreaming(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify true; if not, specify false. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetCompress() const{ return m_compress; }
    inline bool CompressHasBeenSet() const { return m_compressHasBeenSet; }
    inline void SetCompress(bool value) { m_compressHasBeenSet = true; m_compress = value; }
    inline CacheBehavior& WithCompress(bool value) { SetCompress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline const LambdaFunctionAssociations& GetLambdaFunctionAssociations() const{ return m_lambdaFunctionAssociations; }
    inline bool LambdaFunctionAssociationsHasBeenSet() const { return m_lambdaFunctionAssociationsHasBeenSet; }
    inline void SetLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = value; }
    inline void SetLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = std::move(value); }
    inline CacheBehavior& WithLambdaFunctionAssociations(const LambdaFunctionAssociations& value) { SetLambdaFunctionAssociations(value); return *this;}
    inline CacheBehavior& WithLambdaFunctionAssociations(LambdaFunctionAssociations&& value) { SetLambdaFunctionAssociations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * CloudFront functions must be published to the <code>LIVE</code> stage to
     * associate them with a cache behavior.</p>
     */
    inline const FunctionAssociations& GetFunctionAssociations() const{ return m_functionAssociations; }
    inline bool FunctionAssociationsHasBeenSet() const { return m_functionAssociationsHasBeenSet; }
    inline void SetFunctionAssociations(const FunctionAssociations& value) { m_functionAssociationsHasBeenSet = true; m_functionAssociations = value; }
    inline void SetFunctionAssociations(FunctionAssociations&& value) { m_functionAssociationsHasBeenSet = true; m_functionAssociations = std::move(value); }
    inline CacheBehavior& WithFunctionAssociations(const FunctionAssociations& value) { SetFunctionAssociations(value); return *this;}
    inline CacheBehavior& WithFunctionAssociations(FunctionAssociations&& value) { SetFunctionAssociations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for this
     * cache behavior.</p>
     */
    inline const Aws::String& GetFieldLevelEncryptionId() const{ return m_fieldLevelEncryptionId; }
    inline bool FieldLevelEncryptionIdHasBeenSet() const { return m_fieldLevelEncryptionIdHasBeenSet; }
    inline void SetFieldLevelEncryptionId(const Aws::String& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = value; }
    inline void SetFieldLevelEncryptionId(Aws::String&& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = std::move(value); }
    inline void SetFieldLevelEncryptionId(const char* value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId.assign(value); }
    inline CacheBehavior& WithFieldLevelEncryptionId(const Aws::String& value) { SetFieldLevelEncryptionId(value); return *this;}
    inline CacheBehavior& WithFieldLevelEncryptionId(Aws::String&& value) { SetFieldLevelEncryptionId(std::move(value)); return *this;}
    inline CacheBehavior& WithFieldLevelEncryptionId(const char* value) { SetFieldLevelEncryptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigArn() const{ return m_realtimeLogConfigArn; }
    inline bool RealtimeLogConfigArnHasBeenSet() const { return m_realtimeLogConfigArnHasBeenSet; }
    inline void SetRealtimeLogConfigArn(const Aws::String& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = value; }
    inline void SetRealtimeLogConfigArn(Aws::String&& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = std::move(value); }
    inline void SetRealtimeLogConfigArn(const char* value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn.assign(value); }
    inline CacheBehavior& WithRealtimeLogConfigArn(const Aws::String& value) { SetRealtimeLogConfigArn(value); return *this;}
    inline CacheBehavior& WithRealtimeLogConfigArn(Aws::String&& value) { SetRealtimeLogConfigArn(std::move(value)); return *this;}
    inline CacheBehavior& WithRealtimeLogConfigArn(const char* value) { SetRealtimeLogConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cache policy that is attached to this cache
     * behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-cache-policies.html">Using
     * the managed cache policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>A <code>CacheBehavior</code> must include either a
     * <code>CachePolicyId</code> or <code>ForwardedValues</code>. We recommend that
     * you use a <code>CachePolicyId</code>.</p>
     */
    inline const Aws::String& GetCachePolicyId() const{ return m_cachePolicyId; }
    inline bool CachePolicyIdHasBeenSet() const { return m_cachePolicyIdHasBeenSet; }
    inline void SetCachePolicyId(const Aws::String& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = value; }
    inline void SetCachePolicyId(Aws::String&& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = std::move(value); }
    inline void SetCachePolicyId(const char* value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId.assign(value); }
    inline CacheBehavior& WithCachePolicyId(const Aws::String& value) { SetCachePolicyId(value); return *this;}
    inline CacheBehavior& WithCachePolicyId(Aws::String&& value) { SetCachePolicyId(std::move(value)); return *this;}
    inline CacheBehavior& WithCachePolicyId(const char* value) { SetCachePolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the origin request policy that is attached to this
     * cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOriginRequestPolicyId() const{ return m_originRequestPolicyId; }
    inline bool OriginRequestPolicyIdHasBeenSet() const { return m_originRequestPolicyIdHasBeenSet; }
    inline void SetOriginRequestPolicyId(const Aws::String& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = value; }
    inline void SetOriginRequestPolicyId(Aws::String&& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = std::move(value); }
    inline void SetOriginRequestPolicyId(const char* value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId.assign(value); }
    inline CacheBehavior& WithOriginRequestPolicyId(const Aws::String& value) { SetOriginRequestPolicyId(value); return *this;}
    inline CacheBehavior& WithOriginRequestPolicyId(Aws::String&& value) { SetOriginRequestPolicyId(std::move(value)); return *this;}
    inline CacheBehavior& WithOriginRequestPolicyId(const char* value) { SetOriginRequestPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline const Aws::String& GetResponseHeadersPolicyId() const{ return m_responseHeadersPolicyId; }
    inline bool ResponseHeadersPolicyIdHasBeenSet() const { return m_responseHeadersPolicyIdHasBeenSet; }
    inline void SetResponseHeadersPolicyId(const Aws::String& value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId = value; }
    inline void SetResponseHeadersPolicyId(Aws::String&& value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId = std::move(value); }
    inline void SetResponseHeadersPolicyId(const char* value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId.assign(value); }
    inline CacheBehavior& WithResponseHeadersPolicyId(const Aws::String& value) { SetResponseHeadersPolicyId(value); return *this;}
    inline CacheBehavior& WithResponseHeadersPolicyId(Aws::String&& value) { SetResponseHeadersPolicyId(std::move(value)); return *this;}
    inline CacheBehavior& WithResponseHeadersPolicyId(const char* value) { SetResponseHeadersPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gRPC configuration for your cache behavior.</p>
     */
    inline const GrpcConfig& GetGrpcConfig() const{ return m_grpcConfig; }
    inline bool GrpcConfigHasBeenSet() const { return m_grpcConfigHasBeenSet; }
    inline void SetGrpcConfig(const GrpcConfig& value) { m_grpcConfigHasBeenSet = true; m_grpcConfig = value; }
    inline void SetGrpcConfig(GrpcConfig&& value) { m_grpcConfigHasBeenSet = true; m_grpcConfig = std::move(value); }
    inline CacheBehavior& WithGrpcConfig(const GrpcConfig& value) { SetGrpcConfig(value); return *this;}
    inline CacheBehavior& WithGrpcConfig(GrpcConfig&& value) { SetGrpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pathPattern;
    bool m_pathPatternHasBeenSet = false;

    Aws::String m_targetOriginId;
    bool m_targetOriginIdHasBeenSet = false;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet = false;

    TrustedKeyGroups m_trustedKeyGroups;
    bool m_trustedKeyGroupsHasBeenSet = false;

    ViewerProtocolPolicy m_viewerProtocolPolicy;
    bool m_viewerProtocolPolicyHasBeenSet = false;

    AllowedMethods m_allowedMethods;
    bool m_allowedMethodsHasBeenSet = false;

    bool m_smoothStreaming;
    bool m_smoothStreamingHasBeenSet = false;

    bool m_compress;
    bool m_compressHasBeenSet = false;

    LambdaFunctionAssociations m_lambdaFunctionAssociations;
    bool m_lambdaFunctionAssociationsHasBeenSet = false;

    FunctionAssociations m_functionAssociations;
    bool m_functionAssociationsHasBeenSet = false;

    Aws::String m_fieldLevelEncryptionId;
    bool m_fieldLevelEncryptionIdHasBeenSet = false;

    Aws::String m_realtimeLogConfigArn;
    bool m_realtimeLogConfigArnHasBeenSet = false;

    Aws::String m_cachePolicyId;
    bool m_cachePolicyIdHasBeenSet = false;

    Aws::String m_originRequestPolicyId;
    bool m_originRequestPolicyIdHasBeenSet = false;

    Aws::String m_responseHeadersPolicyId;
    bool m_responseHeadersPolicyIdHasBeenSet = false;

    GrpcConfig m_grpcConfig;
    bool m_grpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
