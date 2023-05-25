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
  class ExportSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API ExportSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline const Aws::String& GetSourceSnapshotName() const{ return m_sourceSnapshotName; }

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline void SetSourceSnapshotName(const Aws::String& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline void SetSourceSnapshotName(Aws::String&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::move(value); }

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline void SetSourceSnapshotName(const char* value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName.assign(value); }

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline ExportSnapshotRequest& WithSourceSnapshotName(const Aws::String& value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline ExportSnapshotRequest& WithSourceSnapshotName(Aws::String&& value) { SetSourceSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline ExportSnapshotRequest& WithSourceSnapshotName(const char* value) { SetSourceSnapshotName(value); return *this;}

  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
