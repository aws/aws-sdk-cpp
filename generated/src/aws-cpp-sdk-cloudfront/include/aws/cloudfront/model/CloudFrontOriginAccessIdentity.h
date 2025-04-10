﻿/**
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
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity() = default;
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for the origin access identity, for example,
     * <code>E74FTE3AJFJ256A</code>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CloudFrontOriginAccessIdentity& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 canonical user ID for the origin access identity, used when
     * giving the origin access identity read permission to an object in Amazon S3.</p>
     */
    inline const Aws::String& GetS3CanonicalUserId() const { return m_s3CanonicalUserId; }
    inline bool S3CanonicalUserIdHasBeenSet() const { return m_s3CanonicalUserIdHasBeenSet; }
    template<typename S3CanonicalUserIdT = Aws::String>
    void SetS3CanonicalUserId(S3CanonicalUserIdT&& value) { m_s3CanonicalUserIdHasBeenSet = true; m_s3CanonicalUserId = std::forward<S3CanonicalUserIdT>(value); }
    template<typename S3CanonicalUserIdT = Aws::String>
    CloudFrontOriginAccessIdentity& WithS3CanonicalUserId(S3CanonicalUserIdT&& value) { SetS3CanonicalUserId(std::forward<S3CanonicalUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const { return m_cloudFrontOriginAccessIdentityConfig; }
    inline bool CloudFrontOriginAccessIdentityConfigHasBeenSet() const { return m_cloudFrontOriginAccessIdentityConfigHasBeenSet; }
    template<typename CloudFrontOriginAccessIdentityConfigT = CloudFrontOriginAccessIdentityConfig>
    void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfigT&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::forward<CloudFrontOriginAccessIdentityConfigT>(value); }
    template<typename CloudFrontOriginAccessIdentityConfigT = CloudFrontOriginAccessIdentityConfig>
    CloudFrontOriginAccessIdentity& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfigT&& value) { SetCloudFrontOriginAccessIdentityConfig(std::forward<CloudFrontOriginAccessIdentityConfigT>(value)); return *this;}
    ///@}
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
