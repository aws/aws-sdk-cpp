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
    AWS_DATASYNC_API S3ManifestConfig() = default;
    AWS_DATASYNC_API S3ManifestConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API S3ManifestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon S3 object key of your manifest. This can include a
     * prefix (for example, <code>prefix/my-manifest.csv</code>).</p>
     */
    inline const Aws::String& GetManifestObjectPath() const { return m_manifestObjectPath; }
    inline bool ManifestObjectPathHasBeenSet() const { return m_manifestObjectPathHasBeenSet; }
    template<typename ManifestObjectPathT = Aws::String>
    void SetManifestObjectPath(ManifestObjectPathT&& value) { m_manifestObjectPathHasBeenSet = true; m_manifestObjectPath = std::forward<ManifestObjectPathT>(value); }
    template<typename ManifestObjectPathT = Aws::String>
    S3ManifestConfig& WithManifestObjectPath(ManifestObjectPathT&& value) { SetManifestObjectPath(std::forward<ManifestObjectPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Identity and Access Management (IAM) role that allows DataSync
     * to access your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const { return m_bucketAccessRoleArn; }
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }
    template<typename BucketAccessRoleArnT = Aws::String>
    void SetBucketAccessRoleArn(BucketAccessRoleArnT&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::forward<BucketAccessRoleArnT>(value); }
    template<typename BucketAccessRoleArnT = Aws::String>
    S3ManifestConfig& WithBucketAccessRoleArn(BucketAccessRoleArnT&& value) { SetBucketAccessRoleArn(std::forward<BucketAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the S3 bucket where you're
     * hosting your manifest.</p>
     */
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    S3ManifestConfig& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the object version ID of the manifest that you want DataSync to
     * use. If you don't set this, DataSync uses the latest version of the object.</p>
     */
    inline const Aws::String& GetManifestObjectVersionId() const { return m_manifestObjectVersionId; }
    inline bool ManifestObjectVersionIdHasBeenSet() const { return m_manifestObjectVersionIdHasBeenSet; }
    template<typename ManifestObjectVersionIdT = Aws::String>
    void SetManifestObjectVersionId(ManifestObjectVersionIdT&& value) { m_manifestObjectVersionIdHasBeenSet = true; m_manifestObjectVersionId = std::forward<ManifestObjectVersionIdT>(value); }
    template<typename ManifestObjectVersionIdT = Aws::String>
    S3ManifestConfig& WithManifestObjectVersionId(ManifestObjectVersionIdT&& value) { SetManifestObjectVersionId(std::forward<ManifestObjectVersionIdT>(value)); return *this;}
    ///@}
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
