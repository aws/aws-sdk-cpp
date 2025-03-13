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
   * <p>Summary of the information about a CloudFront origin access
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CloudFrontOriginAccessIdentitySummary">AWS
   * API Reference</a></p>
   */
  class CloudFrontOriginAccessIdentitySummary
  {
  public:
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentitySummary() = default;
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentitySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentitySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for the origin access identity. For example:
     * <code>E74FTE3AJFJ256A</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CloudFrontOriginAccessIdentitySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.</p>
     */
    inline const Aws::String& GetS3CanonicalUserId() const { return m_s3CanonicalUserId; }
    inline bool S3CanonicalUserIdHasBeenSet() const { return m_s3CanonicalUserIdHasBeenSet; }
    template<typename S3CanonicalUserIdT = Aws::String>
    void SetS3CanonicalUserId(S3CanonicalUserIdT&& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = std::forward<S3CanonicalUserIdT>(value); }
    template<typename S3CanonicalUserIdT = Aws::String>
    CloudFrontOriginAccessIdentitySummary& WithS3CanonicalUserId(S3CanonicalUserIdT&& value) { SetS3CanonicalUserId(std::forward<S3CanonicalUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment for this origin access identity, as originally specified when
     * created.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CloudFrontOriginAccessIdentitySummary& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_s3CanonicalUserId;
    bool m_s3CanonicalUserIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
