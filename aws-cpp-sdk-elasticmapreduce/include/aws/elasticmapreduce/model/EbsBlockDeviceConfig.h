/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/VolumeSpecification.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration of requested EBS block device associated with the instance
   * group with count of volumes that will be associated to every instance.</p>
   */
  class AWS_EMR_API EbsBlockDeviceConfig
  {
  public:
    EbsBlockDeviceConfig();
    EbsBlockDeviceConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    EbsBlockDeviceConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>EBS volume specifications such as volume type, IOPS, and size(GiB) that will
     * be requested for the EBS volume attached to an EC2 instance in the cluster.</p>
     */
    inline const VolumeSpecification& GetVolumeSpecification() const{ return m_volumeSpecification; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, and size(GiB) that will
     * be requested for the EBS volume attached to an EC2 instance in the cluster.</p>
     */
    inline void SetVolumeSpecification(const VolumeSpecification& value) { m_volumeSpecificationHasBeenSet = true; m_volumeSpecification = value; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, and size(GiB) that will
     * be requested for the EBS volume attached to an EC2 instance in the cluster.</p>
     */
    inline void SetVolumeSpecification(VolumeSpecification&& value) { m_volumeSpecificationHasBeenSet = true; m_volumeSpecification = value; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, and size(GiB) that will
     * be requested for the EBS volume attached to an EC2 instance in the cluster.</p>
     */
    inline EbsBlockDeviceConfig& WithVolumeSpecification(const VolumeSpecification& value) { SetVolumeSpecification(value); return *this;}

    /**
     * <p>EBS volume specifications such as volume type, IOPS, and size(GiB) that will
     * be requested for the EBS volume attached to an EC2 instance in the cluster.</p>
     */
    inline EbsBlockDeviceConfig& WithVolumeSpecification(VolumeSpecification&& value) { SetVolumeSpecification(value); return *this;}

    /**
     * <p>Number of EBS volumes with specific volume configuration, that will be
     * associated with every instance in the instance group</p>
     */
    inline int GetVolumesPerInstance() const{ return m_volumesPerInstance; }

    /**
     * <p>Number of EBS volumes with specific volume configuration, that will be
     * associated with every instance in the instance group</p>
     */
    inline void SetVolumesPerInstance(int value) { m_volumesPerInstanceHasBeenSet = true; m_volumesPerInstance = value; }

    /**
     * <p>Number of EBS volumes with specific volume configuration, that will be
     * associated with every instance in the instance group</p>
     */
    inline EbsBlockDeviceConfig& WithVolumesPerInstance(int value) { SetVolumesPerInstance(value); return *this;}

  private:
    VolumeSpecification m_volumeSpecification;
    bool m_volumeSpecificationHasBeenSet;
    int m_volumesPerInstance;
    bool m_volumesPerInstanceHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
