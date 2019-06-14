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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CloudFrontOriginAccessIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity
  {
  public:
    CloudFrontOriginAccessIdentity();
    CloudFrontOriginAccessIdentity(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudFrontOriginAccessIdentity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline const Aws::String& GetS3CanonicalUserId() const{ return m_s3CanonicalUserId; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline bool S3CanonicalUserIdHasBeenSet() const { return m_s3CanonicalUserIdHasBeenSet; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline void SetS3CanonicalUserId(const Aws::String& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = value; }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline void SetS3CanonicalUserId(Aws::String&& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = std::move(value); }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline void SetS3CanonicalUserId(const char* value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId.assign(value); }

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(const Aws::String& value) { SetS3CanonicalUserId(value); return *this;}

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(Aws::String&& value) { SetS3CanonicalUserId(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.
     * </p>
     */
    inline CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(const char* value) { SetS3CanonicalUserId(value); return *this;}


    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline bool CloudFrontOriginAccessIdentityConfigHasBeenSet() const { return m_cloudFrontOriginAccessIdentityConfigHasBeenSet; }

    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline CloudFrontOriginAccessIdentity& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The current configuration information for the identity. </p>
     */
    inline CloudFrontOriginAccessIdentity& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_s3CanonicalUserId;
    bool m_s3CanonicalUserIdHasBeenSet;

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
