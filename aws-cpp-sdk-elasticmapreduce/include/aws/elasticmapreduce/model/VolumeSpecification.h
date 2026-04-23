/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>EBS volume specifications such as volume type, IOPS, and size (GiB) that will
   * be requested for the EBS volume attached to an EC2 instance in the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/VolumeSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API VolumeSpecification
  {
  public:
    VolumeSpecification();
    VolumeSpecification(Aws::Utils::Json::JsonView jsonValue);
    VolumeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline VolumeSpecification& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline VolumeSpecification& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. Volume types supported are gp2, io1, standard.</p>
     */
    inline VolumeSpecification& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports.</p>
     */
    inline VolumeSpecification& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The volume size, in gibibytes (GiB). This can be a number from 1 - 1024. If
     * the volume type is EBS-optimized, the minimum value is 10.</p>
     */
    inline int GetSizeInGB() const{ return m_sizeInGB; }

    /**
     * <p>The volume size, in gibibytes (GiB). This can be a number from 1 - 1024. If
     * the volume type is EBS-optimized, the minimum value is 10.</p>
     */
    inline bool SizeInGBHasBeenSet() const { return m_sizeInGBHasBeenSet; }

    /**
     * <p>The volume size, in gibibytes (GiB). This can be a number from 1 - 1024. If
     * the volume type is EBS-optimized, the minimum value is 10.</p>
     */
    inline void SetSizeInGB(int value) { m_sizeInGBHasBeenSet = true; m_sizeInGB = value; }

    /**
     * <p>The volume size, in gibibytes (GiB). This can be a number from 1 - 1024. If
     * the volume type is EBS-optimized, the minimum value is 10.</p>
     */
    inline VolumeSpecification& WithSizeInGB(int value) { SetSizeInGB(value); return *this;}

  private:

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    int m_sizeInGB;
    bool m_sizeInGBHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
