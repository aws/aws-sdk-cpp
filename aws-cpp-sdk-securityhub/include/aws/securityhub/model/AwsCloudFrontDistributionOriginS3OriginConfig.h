/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an origin that is an Amazon S3 bucket that is not
   * configured with static website hosting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginS3OriginConfig">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginS3OriginConfig
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginS3OriginConfig();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginS3OriginConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginS3OriginConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline const Aws::String& GetOriginAccessIdentity() const{ return m_originAccessIdentity; }

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline bool OriginAccessIdentityHasBeenSet() const { return m_originAccessIdentityHasBeenSet; }

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline void SetOriginAccessIdentity(const Aws::String& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = value; }

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline void SetOriginAccessIdentity(Aws::String&& value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity = std::move(value); }

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline void SetOriginAccessIdentity(const char* value) { m_originAccessIdentityHasBeenSet = true; m_originAccessIdentity.assign(value); }

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline AwsCloudFrontDistributionOriginS3OriginConfig& WithOriginAccessIdentity(const Aws::String& value) { SetOriginAccessIdentity(value); return *this;}

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline AwsCloudFrontDistributionOriginS3OriginConfig& WithOriginAccessIdentity(Aws::String&& value) { SetOriginAccessIdentity(std::move(value)); return *this;}

    /**
     * <p>The CloudFront origin access identity to associate with the origin.</p>
     */
    inline AwsCloudFrontDistributionOriginS3OriginConfig& WithOriginAccessIdentity(const char* value) { SetOriginAccessIdentity(value); return *this;}

  private:

    Aws::String m_originAccessIdentity;
    bool m_originAccessIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
