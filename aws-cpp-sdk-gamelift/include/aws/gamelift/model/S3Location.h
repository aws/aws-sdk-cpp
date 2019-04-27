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
   * <p>Location in Amazon Simple Storage Service (Amazon S3) where build or script
   * files are stored for access by Amazon GameLift. This location is specified in
   * <a>CreateBuild</a>, <a>CreateScript</a>, and <a>UpdateScript</a> requests.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/S3Location">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API S3Location
  {
  public:
    S3Location();
    S3Location(Aws::Utils::Json::JsonView jsonValue);
    S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 bucket identifier. This is the name of the S3 bucket.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Name of the zip file containing the build files or script files. </p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * for an IAM role that allows Amazon GameLift to access the S3 bucket.</p>
     */
    inline S3Location& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline S3Location& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline S3Location& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the file, if object versioning is turned on for the bucket. Amazon
     * GameLift uses this information when retrieving files from an S3 bucket that you
     * own. Use this parameter to specify a specific version of the file; if not set,
     * the latest version of the file is retrieved. </p>
     */
    inline S3Location& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
