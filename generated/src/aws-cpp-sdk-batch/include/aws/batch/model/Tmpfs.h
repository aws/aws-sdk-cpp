/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The container path, mount options, and size of the <code>tmpfs</code>
   * mount.</p>  <p>This object isn't applicable to jobs that are running on
   * Fargate resources.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Tmpfs">AWS API
   * Reference</a></p>
   */
  class Tmpfs
  {
  public:
    AWS_BATCH_API Tmpfs();
    AWS_BATCH_API Tmpfs(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Tmpfs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The absolute file path in the container where the <code>tmpfs</code> volume
     * is mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }
    inline Tmpfs& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}
    inline Tmpfs& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}
    inline Tmpfs& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size (in MiB) of the <code>tmpfs</code> volume.</p>
     */
    inline int GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline Tmpfs& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>tmpfs</code> volume mount options.</p> <p>Valid values:
     * "<code>defaults</code>" | "<code>ro</code>" | "<code>rw</code>" |
     * "<code>suid</code>" | "<code>nosuid</code>" | "<code>dev</code>" |
     * "<code>nodev</code>" | "<code>exec</code>" | "<code>noexec</code>" |
     * "<code>sync</code>" | "<code>async</code>" | "<code>dirsync</code>" |
     * "<code>remount</code>" | "<code>mand</code>" | "<code>nomand</code>" |
     * "<code>atime</code>" | "<code>noatime</code>" | "<code>diratime</code>" |
     * "<code>nodiratime</code>" | "<code>bind</code>" | "<code>rbind" | "unbindable" |
     * "runbindable" | "private" | "rprivate" | "shared" | "rshared" | "slave" |
     * "rslave" | "relatime</code>" | "<code>norelatime</code>" |
     * "<code>strictatime</code>" | "<code>nostrictatime</code>" | "<code>mode</code>"
     * | "<code>uid</code>" | "<code>gid</code>" | "<code>nr_inodes</code>" |
     * "<code>nr_blocks</code>" | "<code>mpol</code>"</p>
     */
    inline const Aws::Vector<Aws::String>& GetMountOptions() const{ return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    inline void SetMountOptions(const Aws::Vector<Aws::String>& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }
    inline void SetMountOptions(Aws::Vector<Aws::String>&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }
    inline Tmpfs& WithMountOptions(const Aws::Vector<Aws::String>& value) { SetMountOptions(value); return *this;}
    inline Tmpfs& WithMountOptions(Aws::Vector<Aws::String>&& value) { SetMountOptions(std::move(value)); return *this;}
    inline Tmpfs& AddMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }
    inline Tmpfs& AddMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(std::move(value)); return *this; }
    inline Tmpfs& AddMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
