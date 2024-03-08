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
   * <p>Specifies the S3 bucket where you're hosting the manifest that you want
   * DataSync to use. For more information and configuration examples, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
   * what DataSync transfers by using a manifest</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/S3ManifestConfig">AWS
   * API Reference</a></p>
   */
  class S3ManifestConfig
  {
  public:
    AWS_DATASYNC_API S3ManifestConfig();
    AWS_DATASYNC_API S3ManifestConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API S3ManifestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline const Aws::String& GetManifestObjectPath() const{ return m_manifestObjectPath; }

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline bool ManifestObjectPathHasBeenSet() const { return m_manifestObjectPathHasBeenSet; }

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline void SetManifestObjectPath(const Aws::String& value) { m_manifestObjectPathHasBeenSet = true; m_manifestObjectPath = value; }

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline void SetManifestObjectPath(Aws::String&& value) { m_manifestObjectPathHasBeenSet = true; m_manifestObjectPath = std::move(value); }

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline void SetManifestObjectPath(const char* value) { m_manifestObjectPathHasBeenSet = true; m_manifestObjectPath.assign(value); }

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline S3ManifestConfig& WithManifestObjectPath(const Aws::String& value) { SetManifestObjectPath(value); return *this;}

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline S3ManifestConfig& WithManifestObjectPath(Aws::String&& value) { SetManifestObjectPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline S3ManifestConfig& WithManifestObjectPath(const char* value) { SetManifestObjectPath(value); return *this;}


    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const{ return m_bucketAccessRoleArn; }

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline void SetBucketAccessRoleArn(const Aws::String& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = value; }

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline void SetBucketAccessRoleArn(Aws::String&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::move(value); }

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline void SetBucketAccessRoleArn(const char* value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn.assign(value); }

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline S3ManifestConfig& WithBucketAccessRoleArn(const Aws::String& value) { SetBucketAccessRoleArn(value); return *this;}

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline S3ManifestConfig& WithBucketAccessRoleArn(Aws::String&& value) { SetBucketAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline S3ManifestConfig& WithBucketAccessRoleArn(const char* value) { SetBucketAccessRoleArn(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline S3ManifestConfig& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline S3ManifestConfig& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline S3ManifestConfig& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline const Aws::String& GetManifestObjectVersionId() const{ return m_manifestObjectVersionId; }

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline bool ManifestObjectVersionIdHasBeenSet() const { return m_manifestObjectVersionIdHasBeenSet; }

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline void SetManifestObjectVersionId(const Aws::String& value) { m_manifestObjectVersionIdHasBeenSet = true; m_manifestObjectVersionId = value; }

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline void SetManifestObjectVersionId(Aws::String&& value) { m_manifestObjectVersionIdHasBeenSet = true; m_manifestObjectVersionId = std::move(value); }

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline void SetManifestObjectVersionId(const char* value) { m_manifestObjectVersionIdHasBeenSet = true; m_manifestObjectVersionId.assign(value); }

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline S3ManifestConfig& WithManifestObjectVersionId(const Aws::String& value) { SetManifestObjectVersionId(value); return *this;}

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline S3ManifestConfig& WithManifestObjectVersionId(Aws::String&& value) { SetManifestObjectVersionId(std::move(value)); return *this;}

    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline S3ManifestConfig& WithManifestObjectVersionId(const char* value) { SetManifestObjectVersionId(value); return *this;}

  private:

    Aws::String m_manifestObjectPath;
    bool m_manifestObjectPathHasBeenSet = false;

    Aws::String m_bucketAccessRoleArn;
    bool m_bucketAccessRoleArnHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::String m_manifestObjectVersionId;
    bool m_manifestObjectVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
