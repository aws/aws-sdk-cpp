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
    AWS_LIGHTSAIL_API ExportSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the instance or disk snapshot to be exported to Amazon EC2.</p>
     */
    inline const Aws::String& GetSourceSnapshotName() const { return m_sourceSnapshotName; }
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }
    template<typename SourceSnapshotNameT = Aws::String>
    void SetSourceSnapshotName(SourceSnapshotNameT&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::forward<SourceSnapshotNameT>(value); }
    template<typename SourceSnapshotNameT = Aws::String>
    ExportSnapshotRequest& WithSourceSnapshotName(SourceSnapshotNameT&& value) { SetSourceSnapshotName(std::forward<SourceSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
