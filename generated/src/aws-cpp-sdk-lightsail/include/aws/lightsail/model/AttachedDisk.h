/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes a block storage disk that is attached to an instance, and is
   * included in an automatic snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachedDisk">AWS
   * API Reference</a></p>
   */
  class AttachedDisk
  {
  public:
    AWS_LIGHTSAIL_API AttachedDisk();
    AWS_LIGHTSAIL_API AttachedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AttachedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachedDisk& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachedDisk& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the disk (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachedDisk& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The size of the disk in GB.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB.</p>
     */
    inline AttachedDisk& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
