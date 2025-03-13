/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies the Amazon Resource Name (ARN) of the Identity and Access
   * Management (IAM) role that DataSync uses to access your S3 bucket.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#create-s3-location-access">Providing
   * DataSync access to S3 buckets</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_DATASYNC_API S3Config() = default;
    AWS_DATASYNC_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ARN of the IAM role that DataSync uses to access your S3
     * bucket.</p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const { return m_bucketAccessRoleArn; }
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }
    template<typename BucketAccessRoleArnT = Aws::String>
    void SetBucketAccessRoleArn(BucketAccessRoleArnT&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::forward<BucketAccessRoleArnT>(value); }
    template<typename BucketAccessRoleArnT = Aws::String>
    S3Config& WithBucketAccessRoleArn(BucketAccessRoleArnT&& value) { SetBucketAccessRoleArn(std::forward<BucketAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketAccessRoleArn;
    bool m_bucketAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
