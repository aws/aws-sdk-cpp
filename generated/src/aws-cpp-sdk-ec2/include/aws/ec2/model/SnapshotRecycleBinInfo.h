/**
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
    AWS_EC2_API SnapshotRecycleBinInfo() = default;
    AWS_EC2_API SnapshotRecycleBinInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SnapshotRecycleBinInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    SnapshotRecycleBinInfo& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot entered the Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinEnterTime() const { return m_recycleBinEnterTime; }
    inline bool RecycleBinEnterTimeHasBeenSet() const { return m_recycleBinEnterTimeHasBeenSet; }
    template<typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
    void SetRecycleBinEnterTime(RecycleBinEnterTimeT&& value) { m_recycleBinEnterTimeHasBeenSet = true; m_recycleBinEnterTime = std::forward<RecycleBinEnterTimeT>(value); }
    template<typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
    SnapshotRecycleBinInfo& WithRecycleBinEnterTime(RecycleBinEnterTimeT&& value) { SetRecycleBinEnterTime(std::forward<RecycleBinEnterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot is to be permanently deleted from the
     * Recycle Bin.</p>
     */
    inline const Aws::Utils::DateTime& GetRecycleBinExitTime() const { return m_recycleBinExitTime; }
    inline bool RecycleBinExitTimeHasBeenSet() const { return m_recycleBinExitTimeHasBeenSet; }
    template<typename RecycleBinExitTimeT = Aws::Utils::DateTime>
    void SetRecycleBinExitTime(RecycleBinExitTimeT&& value) { m_recycleBinExitTimeHasBeenSet = true; m_recycleBinExitTime = std::forward<RecycleBinExitTimeT>(value); }
    template<typename RecycleBinExitTimeT = Aws::Utils::DateTime>
    SnapshotRecycleBinInfo& WithRecycleBinExitTime(RecycleBinExitTimeT&& value) { SetRecycleBinExitTime(std::forward<RecycleBinExitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SnapshotRecycleBinInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the volume from which the snapshot was created.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    SnapshotRecycleBinInfo& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinEnterTime{};
    bool m_recycleBinEnterTimeHasBeenSet = false;

    Aws::Utils::DateTime m_recycleBinExitTime{};
    bool m_recycleBinExitTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
