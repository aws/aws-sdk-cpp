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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/Permission.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>PipelineOutputConfig</code> structure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/PipelineOutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API PipelineOutputConfig
  {
  public:
    PipelineOutputConfig();
    PipelineOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    PipelineOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline PipelineOutputConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline PipelineOutputConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. Specify this value when all of the following are true:</p>
     * <ul> <li> <p>You want to save transcoded files, thumbnails (if any), and
     * playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want to
     * specify the users or groups who have access to the transcoded files, thumbnails,
     * and playlists.</p> </li> <li> <p>You do not want to specify the permissions that
     * Elastic Transcoder grants to the files.</p> </li> <li> <p>You want to associate
     * the transcoded files and thumbnails with the Amazon S3 Standard storage
     * class.</p> </li> </ul> <p>If you want to save transcoded files and playlists in
     * one bucket and thumbnails in another bucket, specify which users can access the
     * transcoded files or the permissions the users have, or change the Amazon S3
     * storage class, omit OutputBucket and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead. </p>
     */
    inline PipelineOutputConfig& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline void SetStorageClass(const Aws::String& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline void SetStorageClass(Aws::String&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline void SetStorageClass(const char* value) { m_storageClassHasBeenSet = true; m_storageClass.assign(value); }

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline PipelineOutputConfig& WithStorageClass(const Aws::String& value) { SetStorageClass(value); return *this;}

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline PipelineOutputConfig& WithStorageClass(Aws::String&& value) { SetStorageClass(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket. </p>
     */
    inline PipelineOutputConfig& WithStorageClass(const char* value) { SetStorageClass(value); return *this;}


    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline PipelineOutputConfig& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline PipelineOutputConfig& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline PipelineOutputConfig& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>Optional. The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to transcoded files and
     * playlists, and the type of access you want them to have. You can grant
     * permissions to a maximum of 30 users and/or predefined Amazon S3 groups.</p>
     * <p>If you include <code>Permissions</code>, Elastic Transcoder grants only the
     * permissions that you specify. It does not grant full permissions to the owner of
     * the role specified by <code>Role</code>. If you want that user to have full
     * control, you must explicitly grant full control to the user.</p> <p> If you omit
     * <code>Permissions</code>, Elastic Transcoder grants full control over the
     * transcoded files and playlists to the owner of the role specified by
     * <code>Role</code>, and grants no other permissions to any other user or
     * group.</p>
     */
    inline PipelineOutputConfig& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
