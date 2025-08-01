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
   * <p>A complex type that describes the default cache behavior if you don't specify
   * a <code>CacheBehavior</code> element or if request URLs don't match any of the
   * values of <code>PathPattern</code> in <code>CacheBehavior</code> elements. You
   * must create exactly one default cache behavior.</p>  <p>If your
   * minimum TTL is greater than 0, CloudFront will cache content for at least the
   * duration specified in the cache policy's minimum TTL, even if the
   * <code>Cache-Control: no-cache</code>, <code>no-store</code>, or
   * <code>private</code> directives are present in the origin headers.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DefaultCacheBehavior">AWS
   * API Reference</a></p>
   */
  class DefaultCacheBehavior
  {
  public:
    AWS_CLOUDFRONT_API DefaultCacheBehavior() = default;
    AWS_CLOUDFRONT_API DefaultCacheBehavior(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DefaultCacheBehavior& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The value of <code>ID</code> for the origin that you want CloudFront to route
     * requests to when they use the default cache behavior.</p>
     */
    inline const Aws::String& GetTargetOriginId() const { return m_targetOriginId; }
    inline bool TargetOriginIdHasBeenSet() const { return m_targetOriginIdHasBeenSet; }
    template<typename TargetOriginIdT = Aws::String>
    void SetTargetOriginId(TargetOriginIdT&& value) { m_targetOriginIdHasBeenSet = true; m_targetOriginId = std::forward<TargetOriginIdT>(value); }
    template<typename TargetOriginIdT = Aws::String>
    DefaultCacheBehavior& WithTargetOriginId(TargetOriginIdT&& value) { SetTargetOriginId(std::forward<TargetOriginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>   <p>This field only supports
     * standard distributions. You can't specify this field for multi-tenant
     * distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>A list of Amazon Web Services account IDs
     * whose public keys CloudFront can use to validate signed URLs or signed
     * cookies.</p> <p>When a cache behavior contains trusted signers, CloudFront
     * requires signed URLs or signed cookies for all requests that match the cache
     * behavior. The URLs or cookies must be signed with the private key of a
     * CloudFront key pair in a trusted signer's Amazon Web Services account. The
     * signed URL or cookie contains information about which public key CloudFront
     * should use to verify the signature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
     * private content</a> in the <i>Amazon CloudFront Developer Guide</i>.</p></p>
     */
    inline const TrustedSigners& GetTrustedSigners() const { return m_trustedSigners; }
    inline bool TrustedSignersHasBeenSet() const { return m_trustedSignersHasBeenSet; }
    template<typename TrustedSignersT = TrustedSigners>
    void SetTrustedSigners(TrustedSignersT&& value) { m_trustedSignersHasBeenSet = true; m_trustedSigners = std::forward<TrustedSignersT>(value); }
    template<typename TrustedSignersT = TrustedSigners>
    DefaultCacheBehavior& WithTrustedSigners(TrustedSignersT&& value) { SetTrustedSigners(std::forward<TrustedSignersT>(value)); return *this;}
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
    inline const TrustedKeyGroups& GetTrustedKeyGroups() const { return m_trustedKeyGroups; }
    inline bool TrustedKeyGroupsHasBeenSet() const { return m_trustedKeyGroupsHasBeenSet; }
    template<typename TrustedKeyGroupsT = TrustedKeyGroups>
    void SetTrustedKeyGroups(TrustedKeyGroupsT&& value) { m_trustedKeyGroupsHasBeenSet = true; m_trustedKeyGroups = std::forward<TrustedKeyGroupsT>(value); }
    template<typename TrustedKeyGroupsT = TrustedKeyGroups>
    DefaultCacheBehavior& WithTrustedKeyGroups(TrustedKeyGroupsT&& value) { SetTrustedKeyGroups(std::forward<TrustedKeyGroupsT>(value)); return *this;}
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
    inline ViewerProtocolPolicy GetViewerProtocolPolicy() const { return m_viewerProtocolPolicy; }
    inline bool ViewerProtocolPolicyHasBeenSet() const { return m_viewerProtocolPolicyHasBeenSet; }
    inline void SetViewerProtocolPolicy(ViewerProtocolPolicy value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }
    inline DefaultCacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicy value) { SetViewerProtocolPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const AllowedMethods& GetAllowedMethods() const { return m_allowedMethods; }
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }
    template<typename AllowedMethodsT = AllowedMethods>
    void SetAllowedMethods(AllowedMethodsT&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::forward<AllowedMethodsT>(value); }
    template<typename AllowedMethodsT = AllowedMethods>
    DefaultCacheBehavior& WithAllowedMethods(AllowedMethodsT&& value) { SetAllowedMethods(std::forward<AllowedMethodsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>This field only supports standard distributions. You can't specify
     * this field for multi-tenant distributions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
     * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>  <p>Indicates whether you want to distribute
     * media files in the Microsoft Smooth Streaming format using the origin that is
     * associated with this cache behavior. If so, specify <code>true</code>; if not,
     * specify <code>false</code>. If you specify <code>true</code> for
     * <code>SmoothStreaming</code>, you can still distribute other content using this
     * cache behavior if the content matches the value of
     * <code>PathPattern</code>.</p></p>
     */
    inline bool GetSmoothStreaming() const { return m_smoothStreaming; }
    inline bool SmoothStreamingHasBeenSet() const { return m_smoothStreamingHasBeenSet; }
    inline void SetSmoothStreaming(bool value) { m_smoothStreamingHasBeenSet = true; m_smoothStreaming = value; }
    inline DefaultCacheBehavior& WithSmoothStreaming(bool value) { SetSmoothStreaming(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want CloudFront to automatically compress certain files for this
     * cache behavior. If so, specify <code>true</code>; if not, specify
     * <code>false</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/ServingCompressedFiles.html">Serving
     * Compressed Files</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetCompress() const { return m_compress; }
    inline bool CompressHasBeenSet() const { return m_compressHasBeenSet; }
    inline void SetCompress(bool value) { m_compressHasBeenSet = true; m_compress = value; }
    inline DefaultCacheBehavior& WithCompress(bool value) { SetCompress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more Lambda@Edge function associations
     * for a cache behavior.</p>
     */
    inline const LambdaFunctionAssociations& GetLambdaFunctionAssociations() const { return m_lambdaFunctionAssociations; }
    inline bool LambdaFunctionAssociationsHasBeenSet() const { return m_lambdaFunctionAssociationsHasBeenSet; }
    template<typename LambdaFunctionAssociationsT = LambdaFunctionAssociations>
    void SetLambdaFunctionAssociations(LambdaFunctionAssociationsT&& value) { m_lambdaFunctionAssociationsHasBeenSet = true; m_lambdaFunctionAssociations = std::forward<LambdaFunctionAssociationsT>(value); }
    template<typename LambdaFunctionAssociationsT = LambdaFunctionAssociations>
    DefaultCacheBehavior& WithLambdaFunctionAssociations(LambdaFunctionAssociationsT&& value) { SetLambdaFunctionAssociations(std::forward<LambdaFunctionAssociationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CloudFront functions that are associated with this cache behavior.
     * Your functions must be published to the <code>LIVE</code> stage to associate
     * them with a cache behavior.</p>
     */
    inline const FunctionAssociations& GetFunctionAssociations() const { return m_functionAssociations; }
    inline bool FunctionAssociationsHasBeenSet() const { return m_functionAssociationsHasBeenSet; }
    template<typename FunctionAssociationsT = FunctionAssociations>
    void SetFunctionAssociations(FunctionAssociationsT&& value) { m_functionAssociationsHasBeenSet = true; m_functionAssociations = std::forward<FunctionAssociationsT>(value); }
    template<typename FunctionAssociationsT = FunctionAssociations>
    DefaultCacheBehavior& WithFunctionAssociations(FunctionAssociationsT&& value) { SetFunctionAssociations(std::forward<FunctionAssociationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>ID</code> for the field-level encryption configuration
     * that you want CloudFront to use for encrypting specific fields of data for the
     * default cache behavior.</p>
     */
    inline const Aws::String& GetFieldLevelEncryptionId() const { return m_fieldLevelEncryptionId; }
    inline bool FieldLevelEncryptionIdHasBeenSet() const { return m_fieldLevelEncryptionIdHasBeenSet; }
    template<typename FieldLevelEncryptionIdT = Aws::String>
    void SetFieldLevelEncryptionId(FieldLevelEncryptionIdT&& value) { m_fieldLevelEncryptionIdHasBeenSet = true; m_fieldLevelEncryptionId = std::forward<FieldLevelEncryptionIdT>(value); }
    template<typename FieldLevelEncryptionIdT = Aws::String>
    DefaultCacheBehavior& WithFieldLevelEncryptionId(FieldLevelEncryptionIdT&& value) { SetFieldLevelEncryptionId(std::forward<FieldLevelEncryptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the real-time log configuration that is
     * attached to this cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
     * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRealtimeLogConfigArn() const { return m_realtimeLogConfigArn; }
    inline bool RealtimeLogConfigArnHasBeenSet() const { return m_realtimeLogConfigArnHasBeenSet; }
    template<typename RealtimeLogConfigArnT = Aws::String>
    void SetRealtimeLogConfigArn(RealtimeLogConfigArnT&& value) { m_realtimeLogConfigArnHasBeenSet = true; m_realtimeLogConfigArn = std::forward<RealtimeLogConfigArnT>(value); }
    template<typename RealtimeLogConfigArnT = Aws::String>
    DefaultCacheBehavior& WithRealtimeLogConfigArn(RealtimeLogConfigArnT&& value) { SetRealtimeLogConfigArn(std::forward<RealtimeLogConfigArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetCachePolicyId() const { return m_cachePolicyId; }
    inline bool CachePolicyIdHasBeenSet() const { return m_cachePolicyIdHasBeenSet; }
    template<typename CachePolicyIdT = Aws::String>
    void SetCachePolicyId(CachePolicyIdT&& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = std::forward<CachePolicyIdT>(value); }
    template<typename CachePolicyIdT = Aws::String>
    DefaultCacheBehavior& WithCachePolicyId(CachePolicyIdT&& value) { SetCachePolicyId(std::forward<CachePolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the origin request policy that is attached to the
     * default cache behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> or <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/using-managed-origin-request-policies.html">Using
     * the managed origin request policies</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOriginRequestPolicyId() const { return m_originRequestPolicyId; }
    inline bool OriginRequestPolicyIdHasBeenSet() const { return m_originRequestPolicyIdHasBeenSet; }
    template<typename OriginRequestPolicyIdT = Aws::String>
    void SetOriginRequestPolicyId(OriginRequestPolicyIdT&& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = std::forward<OriginRequestPolicyIdT>(value); }
    template<typename OriginRequestPolicyIdT = Aws::String>
    DefaultCacheBehavior& WithOriginRequestPolicyId(OriginRequestPolicyIdT&& value) { SetOriginRequestPolicyId(std::forward<OriginRequestPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a response headers policy.</p>
     */
    inline const Aws::String& GetResponseHeadersPolicyId() const { return m_responseHeadersPolicyId; }
    inline bool ResponseHeadersPolicyIdHasBeenSet() const { return m_responseHeadersPolicyIdHasBeenSet; }
    template<typename ResponseHeadersPolicyIdT = Aws::String>
    void SetResponseHeadersPolicyId(ResponseHeadersPolicyIdT&& value) { m_responseHeadersPolicyIdHasBeenSet = true; m_responseHeadersPolicyId = std::forward<ResponseHeadersPolicyIdT>(value); }
    template<typename ResponseHeadersPolicyIdT = Aws::String>
    DefaultCacheBehavior& WithResponseHeadersPolicyId(ResponseHeadersPolicyIdT&& value) { SetResponseHeadersPolicyId(std::forward<ResponseHeadersPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gRPC configuration for your cache behavior.</p>
     */
    inline const GrpcConfig& GetGrpcConfig() const { return m_grpcConfig; }
    inline bool GrpcConfigHasBeenSet() const { return m_grpcConfigHasBeenSet; }
    template<typename GrpcConfigT = GrpcConfig>
    void SetGrpcConfig(GrpcConfigT&& value) { m_grpcConfigHasBeenSet = true; m_grpcConfig = std::forward<GrpcConfigT>(value); }
    template<typename GrpcConfigT = GrpcConfig>
    DefaultCacheBehavior& WithGrpcConfig(GrpcConfigT&& value) { SetGrpcConfig(std::forward<GrpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetOriginId;
    bool m_targetOriginIdHasBeenSet = false;

    TrustedSigners m_trustedSigners;
    bool m_trustedSignersHasBeenSet = false;

    TrustedKeyGroups m_trustedKeyGroups;
    bool m_trustedKeyGroupsHasBeenSet = false;

    ViewerProtocolPolicy m_viewerProtocolPolicy{ViewerProtocolPolicy::NOT_SET};
    bool m_viewerProtocolPolicyHasBeenSet = false;

    AllowedMethods m_allowedMethods;
    bool m_allowedMethodsHasBeenSet = false;

    bool m_smoothStreaming{false};
    bool m_smoothStreamingHasBeenSet = false;

    bool m_compress{false};
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
