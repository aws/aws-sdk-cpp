/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Origin access identity configuration. Send a <code>GET</code> request to the
   * <code>/<i>CloudFront API version</i>/CloudFront/identity ID/config</code>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CloudFrontOriginAccessIdentityConfig">AWS
   * API Reference</a></p>
   */
  class CloudFrontOriginAccessIdentityConfig
  {
  public:
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityConfig() = default;
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request.</p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    CloudFrontOriginAccessIdentityConfig& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment to describe the origin access identity. The comment cannot be
     * longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CloudFrontOriginAccessIdentityConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
