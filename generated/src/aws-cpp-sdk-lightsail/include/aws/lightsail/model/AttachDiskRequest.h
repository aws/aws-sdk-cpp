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
  class AttachDiskRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API AttachDiskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachDisk"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Lightsail disk name (<code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const { return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    template<typename DiskNameT = Aws::String>
    void SetDiskName(DiskNameT&& value) { m_diskNameHasBeenSet = true; m_diskName = std::forward<DiskNameT>(value); }
    template<typename DiskNameT = Aws::String>
    AttachDiskRequest& WithDiskName(DiskNameT&& value) { SetDiskName(std::forward<DiskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lightsail instance where you want to utilize the storage
     * disk.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    AttachDiskRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk path to expose to the instance (<code>/dev/xvdf</code>).</p>
     */
    inline const Aws::String& GetDiskPath() const { return m_diskPath; }
    inline bool DiskPathHasBeenSet() const { return m_diskPathHasBeenSet; }
    template<typename DiskPathT = Aws::String>
    void SetDiskPath(DiskPathT&& value) { m_diskPathHasBeenSet = true; m_diskPath = std::forward<DiskPathT>(value); }
    template<typename DiskPathT = Aws::String>
    AttachDiskRequest& WithDiskPath(DiskPathT&& value) { SetDiskPath(std::forward<DiskPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value used to determine the automatic mounting of a storage volume
     * to a virtual computer. The default value is <code>False</code>.</p> 
     * <p>This value only applies to Lightsail for Research resources.</p> 
     */
    inline bool GetAutoMounting() const { return m_autoMounting; }
    inline bool AutoMountingHasBeenSet() const { return m_autoMountingHasBeenSet; }
    inline void SetAutoMounting(bool value) { m_autoMountingHasBeenSet = true; m_autoMounting = value; }
    inline AttachDiskRequest& WithAutoMounting(bool value) { SetAutoMounting(value); return *this;}
    ///@}
  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_diskPath;
    bool m_diskPathHasBeenSet = false;

    bool m_autoMounting{false};
    bool m_autoMountingHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
