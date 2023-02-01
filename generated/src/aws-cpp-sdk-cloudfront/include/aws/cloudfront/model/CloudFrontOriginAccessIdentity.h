/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityConfig.h>
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
   * <p>CloudFront origin access identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CloudFrontOriginAccessIdentity">AWS
   * API Reference</a></p>
   */
  class CloudFrontOriginAccessIdentity
  {
  public:
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity();
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline CloudFrontOriginAccessIdentity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline CloudFrontOriginAccessIdentity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline CloudFrontOriginAccessIdentity& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline const Aws::String& GetS3CanonicalUserId() const{ return m_s3CanonicalUserId; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline bool S3CanonicalUserIdHasBeenSet() const { return m_s3CanonicalUserIdHasBeenSet; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline void SetS3CanonicalUserId(const Aws::String& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = value; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline void SetS3CanonicalUserId(Aws::String&& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = std::move(value); }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline void SetS3CanonicalUserId(const char* value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId.assign(value); }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(const Aws::String& value) { SetS3CanonicalUserId(value); return *this;}

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(Aws::String&& value) { SetS3CanonicalUserId(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(const char* value) { SetS3CanonicalUserId(value); return *this;}


    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline bool CloudFrontOriginAccessIdentityConfigHasBeenSet() const { return m_cloudFrontOriginAccessIdentityConfigHasBeenSet; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CloudFrontOriginAccessIdentity& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CloudFrontOriginAccessIdentity& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_s3CanonicalUserId;
    bool m_s3CanonicalUserIdHasBeenSet = false;

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
