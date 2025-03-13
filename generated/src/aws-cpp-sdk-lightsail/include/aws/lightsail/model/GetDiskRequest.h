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
  class GetDiskRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetDiskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDisk"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the disk (<code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const { return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    template<typename DiskNameT = Aws::String>
    void SetDiskName(DiskNameT&& value) { m_diskNameHasBeenSet = true; m_diskName = std::forward<DiskNameT>(value); }
    template<typename DiskNameT = Aws::String>
    GetDiskRequest& WithDiskName(DiskNameT&& value) { SetDiskName(std::forward<DiskNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
