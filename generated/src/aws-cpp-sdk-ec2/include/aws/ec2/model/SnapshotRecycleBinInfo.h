﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about a snapshot that is currently in the Recycle
   * Bin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotRecycleBinInfo">AWS
   * API Reference</a></p>
   */
  class SnapshotRecycleBinInfo
  {
  public:
    AWS_EC2_API SnapshotRecycleBinInfo();
    AWS_EC2_API SnapshotRecycleBinInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotRecycleBinInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline SnapshotRecycleBinInfo& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline SnapshotRecycleBinInfo& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline SnapshotRecycleBinInfo& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot entered the Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinEnterTime() const{ return m_recycleBinEnterTime; }
    inline bool RecycleBinEnterTimeHasBeenSet() const { return m_recycleBinEnterTimeHasBeenSet; }
    inline void SetRecycleBinEnterTime(const Aws::Utils::DateTime& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = value; }
    inline void SetRecycleBinEnterTime(Aws::Utils::DateTime&& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = std::move(value); }
    inline SnapshotRecycleBinInfo& WithRecycleBinEnterTime(const Aws::Utils::DateTime& value) { SetRecycleBinEnterTime(value); return *this;}
    inline SnapshotRecycleBinInfo& WithRecycleBinEnterTime(Aws::Utils::DateTime&& value) { SetRecycleBinEnterTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot is to be permanently deleted from the
     * Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinExitTime() const{ return m_recycleBinExitTime; }
    inline bool RecycleBinExitTimeHasBeenSet() const { return m_recycleBinExitTimeHasBeenSet; }
    inline void SetRecycleBinExitTime(const Aws::Utils::DateTime& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = value; }
    inline void SetRecycleBinExitTime(Aws::Utils::DateTime&& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = std::move(value); }
    inline SnapshotRecycleBinInfo& WithRecycleBinExitTime(const Aws::Utils::DateTime& value) { SetRecycleBinExitTime(value); return *this;}
    inline SnapshotRecycleBinInfo& WithRecycleBinExitTime(Aws::Utils::DateTime&& value) { SetRecycleBinExitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SnapshotRecycleBinInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SnapshotRecycleBinInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SnapshotRecycleBinInfo& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume from which the snapshot was created.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline SnapshotRecycleBinInfo& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline SnapshotRecycleBinInfo& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline SnapshotRecycleBinInfo& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinEnterTime;
    bool m_recycleBinEnterTimeHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinExitTime;
    bool m_recycleBinExitTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
