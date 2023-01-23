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
  class GetInstanceSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline const Aws::String& GetInstanceSnapshotName() const{ return m_instanceSnapshotName; }

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline bool InstanceSnapshotNameHasBeenSet() const { return m_instanceSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline void SetInstanceSnapshotName(const Aws::String& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline void SetInstanceSnapshotName(Aws::String&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline void SetInstanceSnapshotName(const char* value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName.assign(value); }

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline GetInstanceSnapshotRequest& WithInstanceSnapshotName(const Aws::String& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline GetInstanceSnapshotRequest& WithInstanceSnapshotName(Aws::String&& value) { SetInstanceSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot for which you are requesting information.</p>
     */
    inline GetInstanceSnapshotRequest& WithInstanceSnapshotName(const char* value) { SetInstanceSnapshotName(value); return *this;}

  private:

    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
