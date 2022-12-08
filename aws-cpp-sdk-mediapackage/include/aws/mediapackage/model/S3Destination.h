/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters for where in an S3 bucket to place the harvested
   * content
<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_MEDIAPACKAGE_API S3Destination();
    AWS_MEDIAPACKAGE_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline S3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline S3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline S3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline const Aws::String& GetManifestKey() const{ return m_manifestKey; }

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline bool ManifestKeyHasBeenSet() const { return m_manifestKeyHasBeenSet; }

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline void SetManifestKey(const Aws::String& value) { m_manifestKeyHasBeenSet = true; m_manifestKey = value; }

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline void SetManifestKey(Aws::String&& value) { m_manifestKeyHasBeenSet = true; m_manifestKey = std::move(value); }

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline void SetManifestKey(const char* value) { m_manifestKeyHasBeenSet = true; m_manifestKey.assign(value); }

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline S3Destination& WithManifestKey(const Aws::String& value) { SetManifestKey(value); return *this;}

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline S3Destination& WithManifestKey(Aws::String&& value) { SetManifestKey(std::move(value)); return *this;}

    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline S3Destination& WithManifestKey(const char* value) { SetManifestKey(value); return *this;}


    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline S3Destination& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline S3Destination& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline S3Destination& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_manifestKey;
    bool m_manifestKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
