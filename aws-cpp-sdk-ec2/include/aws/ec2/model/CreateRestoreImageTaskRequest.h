/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateRestoreImageTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateRestoreImageTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestoreImageTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline CreateRestoreImageTaskRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline CreateRestoreImageTaskRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the stored AMI object.</p>
     */
    inline CreateRestoreImageTaskRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline CreateRestoreImageTaskRequest& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline CreateRestoreImageTaskRequest& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The name of the stored AMI object in the bucket.</p>
     */
    inline CreateRestoreImageTaskRequest& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}


    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline CreateRestoreImageTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline CreateRestoreImageTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the restored AMI. The name must be unique for AMIs in the Region
     * for this account. If you do not provide a name, the new AMI gets the same name
     * as the original AMI.</p>
     */
    inline CreateRestoreImageTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline CreateRestoreImageTaskRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline CreateRestoreImageTaskRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline CreateRestoreImageTaskRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the AMI and snapshots on restoration. You can tag the
     * AMI, the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots, the value for <code>ResourceType</code> must be
     * <code>snapshot</code>. The same tag is applied to all of the snapshots that are
     * created.</p> </li> </ul>
     */
    inline CreateRestoreImageTaskRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateRestoreImageTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
