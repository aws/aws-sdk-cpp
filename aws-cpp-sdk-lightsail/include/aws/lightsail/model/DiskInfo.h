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
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API DiskInfo
  {
  public:
    DiskInfo();
    DiskInfo(Aws::Utils::Json::JsonView jsonValue);
    DiskInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The disk name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The disk name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The disk name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The disk name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The disk name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The disk name.</p>
     */
    inline DiskInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The disk name.</p>
     */
    inline DiskInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The disk name.</p>
     */
    inline DiskInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The disk path.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The disk path.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The disk path.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The disk path.</p>
     */
    inline DiskInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The disk path.</p>
     */
    inline DiskInfo& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The disk path.</p>
     */
    inline DiskInfo& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB (e.g., <code>32</code>).</p>
     */
    inline DiskInfo& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}


    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool GetIsSystemDisk() const{ return m_isSystemDisk; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline bool IsSystemDiskHasBeenSet() const { return m_isSystemDiskHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline void SetIsSystemDisk(bool value) { m_isSystemDiskHasBeenSet = true; m_isSystemDisk = value; }

    /**
     * <p>A Boolean value indicating whether this disk is a system disk (has an
     * operating system loaded on it).</p>
     */
    inline DiskInfo& WithIsSystemDisk(bool value) { SetIsSystemDisk(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;

    bool m_isSystemDisk;
    bool m_isSystemDiskHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
