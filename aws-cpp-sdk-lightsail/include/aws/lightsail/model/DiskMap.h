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
   * <p>Describes a block storage disk mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DiskMap">AWS
   * API Reference</a></p>
   */
  class DiskMap
  {
  public:
    AWS_LIGHTSAIL_API DiskMap();
    AWS_LIGHTSAIL_API DiskMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DiskMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline const Aws::String& GetOriginalDiskPath() const{ return m_originalDiskPath; }

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline bool OriginalDiskPathHasBeenSet() const { return m_originalDiskPathHasBeenSet; }

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline void SetOriginalDiskPath(const Aws::String& value) { m_originalDiskPathHasBeenSet = true; m_originalDiskPath = value; }

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline void SetOriginalDiskPath(Aws::String&& value) { m_originalDiskPathHasBeenSet = true; m_originalDiskPath = std::move(value); }

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline void SetOriginalDiskPath(const char* value) { m_originalDiskPathHasBeenSet = true; m_originalDiskPath.assign(value); }

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline DiskMap& WithOriginalDiskPath(const Aws::String& value) { SetOriginalDiskPath(value); return *this;}

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline DiskMap& WithOriginalDiskPath(Aws::String&& value) { SetOriginalDiskPath(std::move(value)); return *this;}

    /**
     * <p>The original disk path exposed to the instance (for example,
     * <code>/dev/sdh</code>).</p>
     */
    inline DiskMap& WithOriginalDiskPath(const char* value) { SetOriginalDiskPath(value); return *this;}


    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline const Aws::String& GetNewDiskName() const{ return m_newDiskName; }

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline bool NewDiskNameHasBeenSet() const { return m_newDiskNameHasBeenSet; }

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline void SetNewDiskName(const Aws::String& value) { m_newDiskNameHasBeenSet = true; m_newDiskName = value; }

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline void SetNewDiskName(Aws::String&& value) { m_newDiskNameHasBeenSet = true; m_newDiskName = std::move(value); }

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline void SetNewDiskName(const char* value) { m_newDiskNameHasBeenSet = true; m_newDiskName.assign(value); }

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline DiskMap& WithNewDiskName(const Aws::String& value) { SetNewDiskName(value); return *this;}

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline DiskMap& WithNewDiskName(Aws::String&& value) { SetNewDiskName(std::move(value)); return *this;}

    /**
     * <p>The new disk name (e.g., <code>my-new-disk</code>).</p>
     */
    inline DiskMap& WithNewDiskName(const char* value) { SetNewDiskName(value); return *this;}

  private:

    Aws::String m_originalDiskPath;
    bool m_originalDiskPathHasBeenSet = false;

    Aws::String m_newDiskName;
    bool m_newDiskNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
