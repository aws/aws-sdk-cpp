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
  class AWS_LIGHTSAIL_API AttachDiskRequest : public LightsailRequest
  {
  public:
    AttachDiskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachDisk"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const{ return m_diskName; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const Aws::String& value) { m_diskNameHasBeenSet = true; m_diskName = value; }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(Aws::String&& value) { m_diskNameHasBeenSet = true; m_diskName = std::move(value); }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline void SetDiskName(const char* value) { m_diskNameHasBeenSet = true; m_diskName.assign(value); }

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline AttachDiskRequest& WithDiskName(const Aws::String& value) { SetDiskName(value); return *this;}

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline AttachDiskRequest& WithDiskName(Aws::String&& value) { SetDiskName(std::move(value)); return *this;}

    /**
     * <p>The unique Lightsail disk name (e.g., <code>my-disk</code>).</p>
     */
    inline AttachDiskRequest& WithDiskName(const char* value) { SetDiskName(value); return *this;}


    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline AttachDiskRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline AttachDiskRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline AttachDiskRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline const Aws::String& GetDiskPath() const{ return m_diskPath; }

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline bool DiskPathHasBeenSet() const { return m_diskPathHasBeenSet; }

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetDiskPath(const Aws::String& value) { m_diskPathHasBeenSet = true; m_diskPath = value; }

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetDiskPath(Aws::String&& value) { m_diskPathHasBeenSet = true; m_diskPath = std::move(value); }

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline void SetDiskPath(const char* value) { m_diskPathHasBeenSet = true; m_diskPath.assign(value); }

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachDiskRequest& WithDiskPath(const Aws::String& value) { SetDiskPath(value); return *this;}

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachDiskRequest& WithDiskPath(Aws::String&& value) { SetDiskPath(std::move(value)); return *this;}

    /**
     * <p>The disk path to expose to the instance (e.g., <code>/dev/xvdf</code>).</p>
     */
    inline AttachDiskRequest& WithDiskPath(const char* value) { SetDiskPath(value); return *this;}

  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    Aws::String m_diskPath;
    bool m_diskPathHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
