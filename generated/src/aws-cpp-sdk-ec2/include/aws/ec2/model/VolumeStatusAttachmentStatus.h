/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the instances to which the volume is
   * attached.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusAttachmentStatus">AWS
   * API Reference</a></p>
   */
  class VolumeStatusAttachmentStatus
  {
  public:
    AWS_EC2_API VolumeStatusAttachmentStatus();
    AWS_EC2_API VolumeStatusAttachmentStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusAttachmentStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline const Aws::String& GetIoPerformance() const{ return m_ioPerformance; }

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline bool IoPerformanceHasBeenSet() const { return m_ioPerformanceHasBeenSet; }

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline void SetIoPerformance(const Aws::String& value) { m_ioPerformanceHasBeenSet = true; m_ioPerformance = value; }

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline void SetIoPerformance(Aws::String&& value) { m_ioPerformanceHasBeenSet = true; m_ioPerformance = std::move(value); }

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline void SetIoPerformance(const char* value) { m_ioPerformanceHasBeenSet = true; m_ioPerformance.assign(value); }

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithIoPerformance(const Aws::String& value) { SetIoPerformance(value); return *this;}

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithIoPerformance(Aws::String&& value) { SetIoPerformance(std::move(value)); return *this;}

    /**
     * <p>The maximum IOPS supported by the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithIoPerformance(const char* value) { SetIoPerformance(value); return *this;}


    /**
     * <p>The ID of the attached instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attached instance.</p>
     */
    inline VolumeStatusAttachmentStatus& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_ioPerformance;
    bool m_ioPerformanceHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
