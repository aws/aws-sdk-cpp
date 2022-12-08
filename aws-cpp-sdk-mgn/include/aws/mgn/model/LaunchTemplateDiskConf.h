/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/VolumeType.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Launch template disk configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LaunchTemplateDiskConf">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateDiskConf
  {
  public:
    AWS_MGN_API LaunchTemplateDiskConf();
    AWS_MGN_API LaunchTemplateDiskConf(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LaunchTemplateDiskConf& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Launch template disk iops configuration.</p>
     */
    inline long long GetIops() const{ return m_iops; }

    /**
     * <p>Launch template disk iops configuration.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Launch template disk iops configuration.</p>
     */
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Launch template disk iops configuration.</p>
     */
    inline LaunchTemplateDiskConf& WithIops(long long value) { SetIops(value); return *this;}


    /**
     * <p>Launch template disk throughput configuration.</p>
     */
    inline long long GetThroughput() const{ return m_throughput; }

    /**
     * <p>Launch template disk throughput configuration.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>Launch template disk throughput configuration.</p>
     */
    inline void SetThroughput(long long value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>Launch template disk throughput configuration.</p>
     */
    inline LaunchTemplateDiskConf& WithThroughput(long long value) { SetThroughput(value); return *this;}


    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline LaunchTemplateDiskConf& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>Launch template disk volume type configuration.</p>
     */
    inline LaunchTemplateDiskConf& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}

  private:

    long long m_iops;
    bool m_iopsHasBeenSet = false;

    long long m_throughput;
    bool m_throughputHasBeenSet = false;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
