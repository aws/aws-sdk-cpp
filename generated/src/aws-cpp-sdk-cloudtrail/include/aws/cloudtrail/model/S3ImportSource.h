/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> The settings for the source S3 bucket. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/S3ImportSource">AWS
   * API Reference</a></p>
   */
  class S3ImportSource
  {
  public:
    AWS_CLOUDTRAIL_API S3ImportSource() = default;
    AWS_CLOUDTRAIL_API S3ImportSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API S3ImportSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3LocationUri() const { return m_s3LocationUri; }
    inline bool S3LocationUriHasBeenSet() const { return m_s3LocationUriHasBeenSet; }
    template<typename S3LocationUriT = Aws::String>
    void SetS3LocationUri(S3LocationUriT&& value) { m_s3LocationUriHasBeenSet = true; m_s3LocationUri = std::forward<S3LocationUriT>(value); }
    template<typename S3LocationUriT = Aws::String>
    S3ImportSource& WithS3LocationUri(S3LocationUriT&& value) { SetS3LocationUri(std::forward<S3LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Region associated with the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketRegion() const { return m_s3BucketRegion; }
    inline bool S3BucketRegionHasBeenSet() const { return m_s3BucketRegionHasBeenSet; }
    template<typename S3BucketRegionT = Aws::String>
    void SetS3BucketRegion(S3BucketRegionT&& value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion = std::forward<S3BucketRegionT>(value); }
    template<typename S3BucketRegionT = Aws::String>
    S3ImportSource& WithS3BucketRegion(S3BucketRegionT&& value) { SetS3BucketRegion(std::forward<S3BucketRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketAccessRoleArn() const { return m_s3BucketAccessRoleArn; }
    inline bool S3BucketAccessRoleArnHasBeenSet() const { return m_s3BucketAccessRoleArnHasBeenSet; }
    template<typename S3BucketAccessRoleArnT = Aws::String>
    void SetS3BucketAccessRoleArn(S3BucketAccessRoleArnT&& value) { m_s3BucketAccessRoleArnHasBeenSet = true; m_s3BucketAccessRoleArn = std::forward<S3BucketAccessRoleArnT>(value); }
    template<typename S3BucketAccessRoleArnT = Aws::String>
    S3ImportSource& WithS3BucketAccessRoleArn(S3BucketAccessRoleArnT&& value) { SetS3BucketAccessRoleArn(std::forward<S3BucketAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3LocationUri;
    bool m_s3LocationUriHasBeenSet = false;

    Aws::String m_s3BucketRegion;
    bool m_s3BucketRegionHasBeenSet = false;

    Aws::String m_s3BucketAccessRoleArn;
    bool m_s3BucketAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
