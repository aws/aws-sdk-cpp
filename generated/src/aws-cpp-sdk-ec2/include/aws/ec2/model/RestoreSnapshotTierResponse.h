/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class RestoreSnapshotTierResponse
  {
  public:
    AWS_EC2_API RestoreSnapshotTierResponse() = default;
    AWS_EC2_API RestoreSnapshotTierResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RestoreSnapshotTierResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    RestoreSnapshotTierResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreStartTime() const { return m_restoreStartTime; }
    template<typename RestoreStartTimeT = Aws::Utils::DateTime>
    void SetRestoreStartTime(RestoreStartTimeT&& value) { m_restoreStartTimeHasBeenSet = true; m_restoreStartTime = std::forward<RestoreStartTimeT>(value); }
    template<typename RestoreStartTimeT = Aws::Utils::DateTime>
    RestoreSnapshotTierResponse& WithRestoreStartTime(RestoreStartTimeT&& value) { SetRestoreStartTime(std::forward<RestoreStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For temporary restores only. The number of days for which the archived
     * snapshot is temporarily restored.</p>
     */
    inline int GetRestoreDuration() const { return m_restoreDuration; }
    inline void SetRestoreDuration(int value) { m_restoreDurationHasBeenSet = true; m_restoreDuration = value; }
    inline RestoreSnapshotTierResponse& WithRestoreDuration(int value) { SetRestoreDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is permanently restored. <code>true</code>
     * indicates a permanent restore. <code>false</code> indicates a temporary
     * restore.</p>
     */
    inline bool GetIsPermanentRestore() const { return m_isPermanentRestore; }
    inline void SetIsPermanentRestore(bool value) { m_isPermanentRestoreHasBeenSet = true; m_isPermanentRestore = value; }
    inline RestoreSnapshotTierResponse& WithIsPermanentRestore(bool value) { SetIsPermanentRestore(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RestoreSnapshotTierResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Utils::DateTime m_restoreStartTime{};
    bool m_restoreStartTimeHasBeenSet = false;

    int m_restoreDuration{0};
    bool m_restoreDurationHasBeenSet = false;

    bool m_isPermanentRestore{false};
    bool m_isPermanentRestoreHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
