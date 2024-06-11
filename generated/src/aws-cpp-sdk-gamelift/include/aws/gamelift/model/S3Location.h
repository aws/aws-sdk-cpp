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
   * by Amazon GameLift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_GAMELIFT_API S3Location();
    AWS_GAMELIFT_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 bucket identifier. Thename of the S3 bucket.</p> 
     * <p>Amazon GameLift doesn't support uploading from Amazon S3 buckets with names
     * that contain a dot (.).</p> 
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zip file that contains the build files or script files. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline S3Location& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline S3Location& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline S3Location& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the file, if object versioning is turned on for the bucket.
     * Amazon GameLift uses this information when retrieving files from an S3 bucket
     * that you own. Use this parameter to specify a specific version of the file. If
     * not set, the latest version of the file is retrieved. </p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }
    inline S3Location& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}
    inline S3Location& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}
    inline S3Location& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}
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
