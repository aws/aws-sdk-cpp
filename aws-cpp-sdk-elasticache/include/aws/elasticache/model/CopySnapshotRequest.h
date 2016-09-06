/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>CopySnapshotMessage</i> action.</p>
   */
  class AWS_ELASTICACHE_API CopySnapshotRequest : public ElastiCacheRequest
  {
  public:
    CopySnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline const Aws::String& GetSourceSnapshotName() const{ return m_sourceSnapshotName; }

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline void SetSourceSnapshotName(const Aws::String& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline void SetSourceSnapshotName(Aws::String&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline void SetSourceSnapshotName(const char* value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName.assign(value); }

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const Aws::String& value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(Aws::String&& value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const char* value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetSnapshotName() const{ return m_targetSnapshotName; }

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline void SetTargetSnapshotName(const Aws::String& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline void SetTargetSnapshotName(Aws::String&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline void SetTargetSnapshotName(const char* value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName.assign(value); }

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const Aws::String& value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(Aws::String&& value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p> <p class="title"> <b>Error Message</b>
     * </p> <ul> <li> <p> <b>Error Message:</b> The S3 bucket %s already contains an
     * object with key %s.</p> <p> <b>Solution:</b> Give the <i>TargetSnapshotName</i>
     * a new and unique value. If exporting a snapshot, you could alternatively create
     * a new Amazon S3 bucket and use this same value for
     * <i>TargetSnapshotName</i>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const char* value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline const Aws::String& GetTargetBucket() const{ return m_targetBucket; }

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline void SetTargetBucket(const Aws::String& value) { m_targetBucketHasBeenSet = true; m_targetBucket = value; }

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline void SetTargetBucket(Aws::String&& value) { m_targetBucketHasBeenSet = true; m_targetBucket = value; }

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline void SetTargetBucket(const char* value) { m_targetBucketHasBeenSet = true; m_targetBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline CopySnapshotRequest& WithTargetBucket(const Aws::String& value) { SetTargetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline CopySnapshotRequest& WithTargetBucket(Aws::String&& value) { SetTargetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to which the snapshot will be exported. This parameter
     * is used only when exporting a snapshot for external access.</p> <p>When using
     * this parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p> <b>Error Messages:</b> </p> <p>You could
     * receive one of the following error messages.</p> <p class="title"> <b>Erorr
     * Messages</b> </p> <ul> <li> <p> <b>Error Message: </b> ElastiCache has not been
     * granted READ permissions %s on the S3 Bucket.</p> <p> <b>Solution:</b> Add List
     * and Read permissions on the bucket.</p> </li> <li> <p> <b>Error Message: </b>
     * ElastiCache has not been granted WRITE permissions %s on the S3 Bucket.</p> <p>
     * <b>Solution:</b> Add Upload/Delete permissions on the bucket.</p> </li> <li> <p>
     * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s
     * on the S3 Bucket.</p> <p> <b>Solution:</b> Add View Permissions permissions on
     * the bucket.</p> </li> <li> <p> <b>Error Message:</b> The S3 bucket %s is outside
     * of the region.</p> <p> <b>Solution:</b> Before exporting your snapshot, create a
     * new Amazon S3 bucket in the same region as your snapshot. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s does not exist.</p> <p> <b>Solution:</b> Create an Amazon S3 bucket
     * in the same region as your snapshot. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * S3 bucket %s is not owned by the authenticated user.</p> <p> <b>Solution:</b>
     * Create an Amazon S3 bucket in the same region as your snapshot. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
     * 1: Create an Amazon S3 Bucket</a>.</p> </li> <li> <p> <b>Error Message:</b> The
     * authenticated user does not have sufficient permissions to perform the desired
     * activity.</p> <p> <b>Solution:</b> Contact your system administrator to get the
     * needed permissions.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline CopySnapshotRequest& WithTargetBucket(const char* value) { SetTargetBucket(value); return *this;}

  private:
    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet;
    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet;
    Aws::String m_targetBucket;
    bool m_targetBucketHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
