/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class ExportServerlessCacheSnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ExportServerlessCacheSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportServerlessCacheSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the serverless cache snapshot to be exported to S3.
     * Available for Valkey and Redis OSS only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }
    inline ExportServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}
    inline ExportServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline ExportServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Amazon S3 bucket to export the snapshot to. The Amazon S3 bucket
     * must also be in same region as the snapshot. Available for Valkey and Redis OSS
     * only.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline ExportServerlessCacheSnapshotRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline ExportServerlessCacheSnapshotRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline ExportServerlessCacheSnapshotRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
