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
  class GetDiskSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetDiskSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDiskSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the disk snapshot (<code>my-disk-snapshot</code>).</p>
     */
    inline const Aws::String& GetDiskSnapshotName() const { return m_diskSnapshotName; }
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }
    template<typename DiskSnapshotNameT = Aws::String>
    void SetDiskSnapshotName(DiskSnapshotNameT&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::forward<DiskSnapshotNameT>(value); }
    template<typename DiskSnapshotNameT = Aws::String>
    GetDiskSnapshotRequest& WithDiskSnapshotName(DiskSnapshotNameT&& value) { SetDiskSnapshotName(std::forward<DiskSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_diskSnapshotName;
    bool m_diskSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
