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
    AWS_EC2_API InstanceSpecification();
    AWS_EC2_API InstanceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance to specify which volumes should be snapshotted.</p>
     */
    inline InstanceSpecification& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline bool GetExcludeBootVolume() const{ return m_excludeBootVolume; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline bool ExcludeBootVolumeHasBeenSet() const { return m_excludeBootVolumeHasBeenSet; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline void SetExcludeBootVolume(bool value) { m_excludeBootVolumeHasBeenSet = true; m_excludeBootVolume = value; }

    /**
     * <p>Excludes the root volume from being snapshotted.</p>
     */
    inline InstanceSpecification& WithExcludeBootVolume(bool value) { SetExcludeBootVolume(value); return *this;}


    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeDataVolumeIds() const{ return m_excludeDataVolumeIds; }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline bool ExcludeDataVolumeIdsHasBeenSet() const { return m_excludeDataVolumeIdsHasBeenSet; }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline void SetExcludeDataVolumeIds(const Aws::Vector<Aws::String>& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds = value; }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline void SetExcludeDataVolumeIds(Aws::Vector<Aws::String>&& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds = std::move(value); }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline InstanceSpecification& WithExcludeDataVolumeIds(const Aws::Vector<Aws::String>& value) { SetExcludeDataVolumeIds(value); return *this;}

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline InstanceSpecification& WithExcludeDataVolumeIds(Aws::Vector<Aws::String>&& value) { SetExcludeDataVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline InstanceSpecification& AddExcludeDataVolumeIds(const Aws::String& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline InstanceSpecification& AddExcludeDataVolumeIds(Aws::String&& value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the data (non-root) volumes to exclude from the multi-volume
     * snapshot set. If you specify the ID of the root volume, the request fails. To
     * exclude the root volume, use <b>ExcludeBootVolume</b>.</p> <p>You can specify up
     * to 40 volume IDs per request.</p>
     */
    inline InstanceSpecification& AddExcludeDataVolumeIds(const char* value) { m_excludeDataVolumeIdsHasBeenSet = true; m_excludeDataVolumeIds.push_back(value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    bool m_excludeBootVolume;
    bool m_excludeBootVolumeHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeDataVolumeIds;
    bool m_excludeDataVolumeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
