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
    AWS_EC2_API RestoreSnapshotTierResponse();
    AWS_EC2_API RestoreSnapshotTierResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RestoreSnapshotTierResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotTierResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotTierResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline RestoreSnapshotTierResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreStartTime() const{ return m_restoreStartTime; }

    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline void SetRestoreStartTime(const Aws::Utils::DateTime& value) { m_restoreStartTime = value; }

    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline void SetRestoreStartTime(Aws::Utils::DateTime&& value) { m_restoreStartTime = std::move(value); }

    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline RestoreSnapshotTierResponse& WithRestoreStartTime(const Aws::Utils::DateTime& value) { SetRestoreStartTime(value); return *this;}

    /**
     * <p>The date and time when the snapshot restore process started.</p>
     */
    inline RestoreSnapshotTierResponse& WithRestoreStartTime(Aws::Utils::DateTime&& value) { SetRestoreStartTime(std::move(value)); return *this;}


    /**
     * <p>For temporary restores only. The number of days for which the archived
     * snapshot is temporarily restored.</p>
     */
    inline int GetRestoreDuration() const{ return m_restoreDuration; }

    /**
     * <p>For temporary restores only. The number of days for which the archived
     * snapshot is temporarily restored.</p>
     */
    inline void SetRestoreDuration(int value) { m_restoreDuration = value; }

    /**
     * <p>For temporary restores only. The number of days for which the archived
     * snapshot is temporarily restored.</p>
     */
    inline RestoreSnapshotTierResponse& WithRestoreDuration(int value) { SetRestoreDuration(value); return *this;}


    /**
     * <p>Indicates whether the snapshot is permanently restored. <code>true</code>
     * indicates a permanent restore. <code>false</code> indicates a temporary
     * restore.</p>
     */
    inline bool GetIsPermanentRestore() const{ return m_isPermanentRestore; }

    /**
     * <p>Indicates whether the snapshot is permanently restored. <code>true</code>
     * indicates a permanent restore. <code>false</code> indicates a temporary
     * restore.</p>
     */
    inline void SetIsPermanentRestore(bool value) { m_isPermanentRestore = value; }

    /**
     * <p>Indicates whether the snapshot is permanently restored. <code>true</code>
     * indicates a permanent restore. <code>false</code> indicates a temporary
     * restore.</p>
     */
    inline RestoreSnapshotTierResponse& WithIsPermanentRestore(bool value) { SetIsPermanentRestore(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RestoreSnapshotTierResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RestoreSnapshotTierResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    Aws::Utils::DateTime m_restoreStartTime;

    int m_restoreDuration;

    bool m_isPermanentRestore;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
