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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The container path, mount options, and size of the tmpfs mount.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Tmpfs">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Tmpfs
  {
  public:
    Tmpfs();
    Tmpfs(Aws::Utils::Json::JsonView jsonValue);
    Tmpfs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline Tmpfs& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline Tmpfs& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline Tmpfs& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}


    /**
     * <p>The size (in MiB) of the tmpfs volume.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size (in MiB) of the tmpfs volume.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size (in MiB) of the tmpfs volume.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size (in MiB) of the tmpfs volume.</p>
     */
    inline Tmpfs& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline void SetMountOptions(const Aws::Vector<Aws::String>& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline void SetMountOptions(Aws::Vector<Aws::String>&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline Tmpfs& WithMountOptions(const Aws::Vector<Aws::String>& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline Tmpfs& WithMountOptions(Aws::Vector<Aws::String>&& value) { SetMountOptions(std::move(value)); return *this;}

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline Tmpfs& AddMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline Tmpfs& AddMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values: <code>"defaults"
     * | "ro" | "rw" | "suid" | "nosuid" | "dev" | "nodev" | "exec" | "noexec" | "sync"
     * | "async" | "dirsync" | "remount" | "mand" | "nomand" | "atime" | "noatime" |
     * "diratime" | "nodiratime" | "bind" | "rbind" | "unbindable" | "runbindable" |
     * "private" | "rprivate" | "shared" | "rshared" | "slave" | "rslave" | "relatime"
     * | "norelatime" | "strictatime" | "nostrictatime" | "mode" | "uid" | "gid" |
     * "nr_inodes" | "nr_blocks" | "mpol"</code> </p>
     */
    inline Tmpfs& AddMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }

  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;

    Aws::Vector<Aws::String> m_mountOptions;
    bool m_mountOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
