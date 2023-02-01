/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DetachDiskRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DetachDiskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachDisk"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const{ return m_diskName; }

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const Aws::String& value) { m_diskNameHasBeenSet = true; m_diskName = value; }

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline void SetDiskName(Aws::String&& value) { m_diskNameHasBeenSet = true; m_diskName = std::move(value); }

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const char* value) { m_diskNameHasBeenSet = true; m_diskName.assign(value); }

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline DetachDiskRequest& WithDiskName(const Aws::String& value) { SetDiskName(value); return *this;}

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline DetachDiskRequest& WithDiskName(Aws::String&& value) { SetDiskName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the disk you want to detach from your instance (e.g.,
     * <code>my-disk</code>).</p>
     */
    inline DetachDiskRequest& WithDiskName(const char* value) { SetDiskName(value); return *this;}

  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
