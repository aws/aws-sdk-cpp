/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/S3Location.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuildInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateBuildRequest : public GameLiftRequest
  {
  public:
    CreateBuildRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBuild"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline CreateBuildRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline CreateBuildRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a build. Build names do not need
     * to be unique. You can use <a>UpdateBuild</a> to change this value later. </p>
     */
    inline CreateBuildRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline CreateBuildRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline CreateBuildRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique. You can use <a>UpdateBuild</a> to change this
     * value later. </p>
     */
    inline CreateBuildRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }

    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }

    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline CreateBuildRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>The location where your game build files are stored. Use this parameter only
     * when creating a build using files that are stored in an S3 bucket that you own.
     * Identify an S3 bucket name and key, which must in the same Region where you're
     * creating a build. This parameter must also specify the ARN for an IAM role that
     * you've set up to give Amazon GameLift access your S3 bucket. To call this
     * operation with a storage location, you must have IAM PassRole permission. For
     * more details on IAM roles and PassRole permissions, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">
     * Set up a role for GameLift access</a>. </p>
     */
    inline CreateBuildRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline CreateBuildRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system that the game server binaries are built to run on. This
     * value determines the type of fleet resources that you can use for this build. If
     * your game build contains multiple executables, they all must run on the same
     * operating system. If an operating system is not specified when creating a build,
     * Amazon GameLift uses the default value (WINDOWS_2012). This value cannot be
     * changed later.</p>
     */
    inline CreateBuildRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateBuildRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateBuildRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateBuildRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new build resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateBuildRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
