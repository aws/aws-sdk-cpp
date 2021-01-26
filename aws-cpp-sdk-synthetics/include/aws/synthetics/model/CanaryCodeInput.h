/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>Use this structure to input your script code for the canary. This structure
   * contains the Lambda handler with the location where the canary should start
   * running the script. If the script is stored in an S3 bucket, the bucket name,
   * key, and version are also included. If the script was passed into the canary
   * directly, the script code is contained in the value of <code>Zipfile</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryCodeInput">AWS
   * API Reference</a></p>
   */
  class AWS_SYNTHETICS_API CanaryCodeInput
  {
  public:
    CanaryCodeInput();
    CanaryCodeInput(Aws::Utils::Json::JsonView jsonValue);
    CanaryCodeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline CanaryCodeInput& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline CanaryCodeInput& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>If your canary script is located in S3, specify the full bucket name here.
     * The bucket must already exist. Specify the full bucket name, including
     * <code>s3://</code> as the start of the bucket name.</p>
     */
    inline CanaryCodeInput& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline CanaryCodeInput& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline CanaryCodeInput& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline CanaryCodeInput& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline const Aws::String& GetS3Version() const{ return m_s3Version; }

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline bool S3VersionHasBeenSet() const { return m_s3VersionHasBeenSet; }

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline void SetS3Version(const Aws::String& value) { m_s3VersionHasBeenSet = true; m_s3Version = value; }

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline void SetS3Version(Aws::String&& value) { m_s3VersionHasBeenSet = true; m_s3Version = std::move(value); }

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline void SetS3Version(const char* value) { m_s3VersionHasBeenSet = true; m_s3Version.assign(value); }

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline CanaryCodeInput& WithS3Version(const Aws::String& value) { SetS3Version(value); return *this;}

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline CanaryCodeInput& WithS3Version(Aws::String&& value) { SetS3Version(std::move(value)); return *this;}

    /**
     * <p>The S3 version ID of your script.</p>
     */
    inline CanaryCodeInput& WithS3Version(const char* value) { SetS3Version(value); return *this;}


    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }

    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline void SetZipFile(Aws::Utils::ByteBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }

    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline CanaryCodeInput& WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an S3 location, the value of this parameter is the .zip file that contains
     * the script. It can be up to 5 MB.</p>
     */
    inline CanaryCodeInput& WithZipFile(Aws::Utils::ByteBuffer&& value) { SetZipFile(std::move(value)); return *this;}


    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline CanaryCodeInput& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline CanaryCodeInput& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The entry point to use for the source code when running the canary. This
     * value must end with the string <code>.handler</code>.</p>
     */
    inline CanaryCodeInput& WithHandler(const char* value) { SetHandler(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;

    Aws::String m_s3Version;
    bool m_s3VersionHasBeenSet;

    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;

    Aws::String m_handler;
    bool m_handlerHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
