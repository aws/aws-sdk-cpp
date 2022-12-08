/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class StartReportCreationRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API StartReportCreationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReportCreation"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline StartReportCreationRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline StartReportCreationRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the report will be stored; for
     * example:</p> <p> <code>awsexamplebucket</code> </p> <p>For more information on
     * S3 bucket requirements, including an example bucket policy, see the example S3
     * bucket policy on this page.</p>
     */
    inline StartReportCreationRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
