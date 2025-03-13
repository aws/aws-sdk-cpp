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
  class DeleteDiskRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteDiskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDisk"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name of the disk you want to delete (<code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const { return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    template<typename DiskNameT = Aws::String>
    void SetDiskName(DiskNameT&& value) { m_diskNameHasBeenSet = true; m_diskName = std::forward<DiskNameT>(value); }
    template<typename DiskNameT = Aws::String>
    DeleteDiskRequest& WithDiskName(DiskNameT&& value) { SetDiskName(std::forward<DiskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to delete all add-ons for the disk.</p>
     */
    inline bool GetForceDeleteAddOns() const { return m_forceDeleteAddOns; }
    inline bool ForceDeleteAddOnsHasBeenSet() const { return m_forceDeleteAddOnsHasBeenSet; }
    inline void SetForceDeleteAddOns(bool value) { m_forceDeleteAddOnsHasBeenSet = true; m_forceDeleteAddOns = value; }
    inline DeleteDiskRequest& WithForceDeleteAddOns(bool value) { SetForceDeleteAddOns(value); return *this;}
    ///@}
  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;

    bool m_forceDeleteAddOns{false};
    bool m_forceDeleteAddOnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
