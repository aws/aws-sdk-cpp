/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/S3ObjectTag.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateStoreImageTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateStoreImageTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStoreImageTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline CreateStoreImageTaskRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline CreateStoreImageTaskRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline CreateStoreImageTaskRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline CreateStoreImageTaskRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline CreateStoreImageTaskRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket in which the AMI object will be stored. The
     * bucket must be in the Region in which the request is being made. The AMI object
     * appears in the bucket only after the upload task has completed. </p>
     */
    inline CreateStoreImageTaskRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline const Aws::Vector<S3ObjectTag>& GetS3ObjectTags() const{ return m_s3ObjectTags; }

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline bool S3ObjectTagsHasBeenSet() const { return m_s3ObjectTagsHasBeenSet; }

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline void SetS3ObjectTags(const Aws::Vector<S3ObjectTag>& value) { m_s3ObjectTagsHasBeenSet = true; m_s3ObjectTags = value; }

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline void SetS3ObjectTags(Aws::Vector<S3ObjectTag>&& value) { m_s3ObjectTagsHasBeenSet = true; m_s3ObjectTags = std::move(value); }

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline CreateStoreImageTaskRequest& WithS3ObjectTags(const Aws::Vector<S3ObjectTag>& value) { SetS3ObjectTags(value); return *this;}

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline CreateStoreImageTaskRequest& WithS3ObjectTags(Aws::Vector<S3ObjectTag>&& value) { SetS3ObjectTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline CreateStoreImageTaskRequest& AddS3ObjectTags(const S3ObjectTag& value) { m_s3ObjectTagsHasBeenSet = true; m_s3ObjectTags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the AMI object that will be stored in the Amazon S3
     * bucket. </p>
     */
    inline CreateStoreImageTaskRequest& AddS3ObjectTags(S3ObjectTag&& value) { m_s3ObjectTagsHasBeenSet = true; m_s3ObjectTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateStoreImageTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::Vector<S3ObjectTag> m_s3ObjectTags;
    bool m_s3ObjectTagsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
