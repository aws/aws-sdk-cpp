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
   * Summary of the information about a CloudFront origin access identity.
   */
  class AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentitySummary
  {
  public:
    CloudFrontOriginAccessIdentitySummary();
    CloudFrontOriginAccessIdentitySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudFrontOriginAccessIdentitySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The ID for the origin access identity. For example: E74FTE3AJFJ256A.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithId(const char* value) { SetId(value); return *this;}

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline const Aws::String& GetS3CanonicalUserId() const{ return m_s3CanonicalUserId; }

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline void SetS3CanonicalUserId(const Aws::String& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = value; }

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline void SetS3CanonicalUserId(Aws::String&& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = value; }

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline void SetS3CanonicalUserId(const char* value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId.assign(value); }

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithS3CanonicalUserId(const Aws::String& value) { SetS3CanonicalUserId(value); return *this;}

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithS3CanonicalUserId(Aws::String&& value) { SetS3CanonicalUserId(value); return *this;}

    /**
     * The Amazon S3 canonical user ID for the origin access identity, which you use
     * when giving the origin access identity read permission to an object in Amazon
     * S3.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithS3CanonicalUserId(const char* value) { SetS3CanonicalUserId(value); return *this;}

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * The comment for this origin access identity, as originally specified when
     * created.
     */
    inline CloudFrontOriginAccessIdentitySummary& WithComment(const char* value) { SetComment(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_s3CanonicalUserId;
    bool m_s3CanonicalUserIdHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
