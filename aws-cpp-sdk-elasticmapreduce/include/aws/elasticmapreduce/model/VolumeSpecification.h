/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
   * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
   * instance in the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/VolumeSpecification">AWS
   * API Reference</a></p>
   */
  class VolumeSpecification
  {
  public:
    AWS_EMR_API VolumeSpecification();
    AWS_EMR_API VolumeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API VolumeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline VolumeSpecification& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
     */
    inline VolumeSpecification& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. Volume types supported are gp2, io1, and standard.</p>
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


    /**
     * <p>The throughput, in mebibyte per second (MiB/s). This optional parameter can
     * be a number from 125 - 1000 and is valid only for gp3 volumes.</p>
     */
    inline int GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput, in mebibyte per second (MiB/s). This optional parameter can
     * be a number from 125 - 1000 and is valid only for gp3 volumes.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput, in mebibyte per second (MiB/s). This optional parameter can
     * be a number from 125 - 1000 and is valid only for gp3 volumes.</p>
     */
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput, in mebibyte per second (MiB/s). This optional parameter can
     * be a number from 125 - 1000 and is valid only for gp3 volumes.</p>
     */
    inline VolumeSpecification& WithThroughput(int value) { SetThroughput(value); return *this;}

  private:

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    int m_sizeInGB;
    bool m_sizeInGBHasBeenSet = false;

    int m_throughput;
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
