/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>The location in Amazon S3 where build or script files are stored for access
   * by Amazon GameLift Servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_GAMELIFT_API S3Location() = default;
    AWS_GAMELIFT_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 bucket identifier. Thename of the S3 bucket.</p> 
     * <p>Amazon GameLift Servers doesn't support uploading from Amazon S3 buckets with
     * names that contain a dot (.).</p> 
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Location& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zip file that contains the build files or script files. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3Location& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift Servers to access the S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    S3Location& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the file, if object versioning is turned on for the bucket.
     * Amazon GameLift Servers uses this information when retrieving files from an S3
     * bucket that you own. Use this parameter to specify a specific version of the
     * file. If not set, the latest version of the file is retrieved. </p>
     */
    inline const Aws::String& GetObjectVersion() const { return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    template<typename ObjectVersionT = Aws::String>
    void SetObjectVersion(ObjectVersionT&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::forward<ObjectVersionT>(value); }
    template<typename ObjectVersionT = Aws::String>
    S3Location& WithObjectVersion(ObjectVersionT&& value) { SetObjectVersion(std::forward<ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
