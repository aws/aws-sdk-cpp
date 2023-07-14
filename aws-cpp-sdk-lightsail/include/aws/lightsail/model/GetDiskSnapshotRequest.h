﻿/**
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
  class AWS_LIGHTSAIL_API GetDiskSnapshotRequest : public LightsailRequest
  {
  public:
    GetDiskSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDiskSnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline const Aws::String& GetDiskSnapshotName() const{ return m_diskSnapshotName; }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetDiskSnapshotName(const Aws::String& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = value; }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetDiskSnapshotName(Aws::String&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::move(value); }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline void SetDiskSnapshotName(const char* value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName.assign(value); }

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline GetDiskSnapshotRequest& WithDiskSnapshotName(const Aws::String& value) { SetDiskSnapshotName(value); return *this;}

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline GetDiskSnapshotRequest& WithDiskSnapshotName(Aws::String&& value) { SetDiskSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the disk snapshot (e.g., <code>my-disk-snapshot</code>).</p>
     */
    inline GetDiskSnapshotRequest& WithDiskSnapshotName(const char* value) { SetDiskSnapshotName(value); return *this;}

  private:

    Aws::String m_diskSnapshotName;
    bool m_diskSnapshotNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
