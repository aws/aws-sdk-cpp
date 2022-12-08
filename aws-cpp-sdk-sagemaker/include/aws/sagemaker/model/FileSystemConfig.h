/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon Elastic File System (EFS) storage configuration for a SageMaker
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FileSystemConfig">AWS
   * API Reference</a></p>
   */
  class FileSystemConfig
  {
  public:
    AWS_SAGEMAKER_API FileSystemConfig();
    AWS_SAGEMAKER_API FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline const Aws::String& GetMountPath() const{ return m_mountPath; }

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline void SetMountPath(const Aws::String& value) { m_mountPathHasBeenSet = true; m_mountPath = value; }

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline void SetMountPath(Aws::String&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::move(value); }

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline void SetMountPath(const char* value) { m_mountPathHasBeenSet = true; m_mountPath.assign(value); }

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline FileSystemConfig& WithMountPath(const Aws::String& value) { SetMountPath(value); return *this;}

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline FileSystemConfig& WithMountPath(Aws::String&& value) { SetMountPath(std::move(value)); return *this;}

    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline FileSystemConfig& WithMountPath(const char* value) { SetMountPath(value); return *this;}


    /**
     * <p>The default POSIX user ID (UID). If not specified, defaults to
     * <code>1000</code>.</p>
     */
    inline int GetDefaultUid() const{ return m_defaultUid; }

    /**
     * <p>The default POSIX user ID (UID). If not specified, defaults to
     * <code>1000</code>.</p>
     */
    inline bool DefaultUidHasBeenSet() const { return m_defaultUidHasBeenSet; }

    /**
     * <p>The default POSIX user ID (UID). If not specified, defaults to
     * <code>1000</code>.</p>
     */
    inline void SetDefaultUid(int value) { m_defaultUidHasBeenSet = true; m_defaultUid = value; }

    /**
     * <p>The default POSIX user ID (UID). If not specified, defaults to
     * <code>1000</code>.</p>
     */
    inline FileSystemConfig& WithDefaultUid(int value) { SetDefaultUid(value); return *this;}


    /**
     * <p>The default POSIX group ID (GID). If not specified, defaults to
     * <code>100</code>.</p>
     */
    inline int GetDefaultGid() const{ return m_defaultGid; }

    /**
     * <p>The default POSIX group ID (GID). If not specified, defaults to
     * <code>100</code>.</p>
     */
    inline bool DefaultGidHasBeenSet() const { return m_defaultGidHasBeenSet; }

    /**
     * <p>The default POSIX group ID (GID). If not specified, defaults to
     * <code>100</code>.</p>
     */
    inline void SetDefaultGid(int value) { m_defaultGidHasBeenSet = true; m_defaultGid = value; }

    /**
     * <p>The default POSIX group ID (GID). If not specified, defaults to
     * <code>100</code>.</p>
     */
    inline FileSystemConfig& WithDefaultGid(int value) { SetDefaultGid(value); return *this;}

  private:

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;

    int m_defaultUid;
    bool m_defaultUidHasBeenSet = false;

    int m_defaultGid;
    bool m_defaultGidHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
