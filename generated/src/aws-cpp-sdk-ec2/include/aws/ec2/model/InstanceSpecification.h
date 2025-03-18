/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The instance details to specify which volumes should be
   * snapshotted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceSpecification">AWS
   * API Reference</a></p>
   */
  class InstanceSpecification
  {
  public:
    AWS_EC2_API InstanceSpecification() = default;
    AWS_EC2_API InstanceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceSpecification& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline bool GetExcludeBootVolume() const { return m_excludeBootVolume; }
    inline bool ExcludeBootVolumeHasBeenSet() const { return m_excludeBootVolumeHasBeenSet; }
    inline void SetExcludeBootVolume(bool value) { m_excludeBootVolumeHasBeenSet = true; m_excludeBootVolume = value; }
    inline InstanceSpecification& WithExcludeBootVolume(bool value) { SetExcludeBootVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeDataVolumeIds() const { return m_excludeDataVolumeIds; }
    inline bool ExcludeDataVolumeIdsHasBeenSet() const { return m_excludeDataVolumeIdsHasBeenSet; }
    template<typename ExcludeDataVolumeIdsT = Aws::Vector<Aws::String>>
    void SetExcludeDataVolumeIds(ExcludeDataVolumeIdsT&& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds = std::forward<ExcludeDataVolumeIdsT>(value); }
    template<typename ExcludeDataVolumeIdsT = Aws::Vector<Aws::String>>
    InstanceSpecification& WithExcludeDataVolumeIds(ExcludeDataVolumeIdsT&& value) { SetExcludeDataVolumeIds(std::forward<ExcludeDataVolumeIdsT>(value)); return *this;}
    template<typename ExcludeDataVolumeIdsT = Aws::String>
    InstanceSpecification& AddExcludeDataVolumeIds(ExcludeDataVolumeIdsT&& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds.emplace_back(std::forward<ExcludeDataVolumeIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    bool m_excludeBootVolume{false};
    bool m_excludeBootVolumeHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeDataVolumeIds;
    bool m_excludeDataVolumeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
