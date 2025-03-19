/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Information on the usage of a data source package in the behavior
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DatasourcePackageUsageInfo">AWS
   * API Reference</a></p>
   */
  class DatasourcePackageUsageInfo
  {
  public:
    AWS_DETECTIVE_API DatasourcePackageUsageInfo() = default;
    AWS_DETECTIVE_API DatasourcePackageUsageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API DatasourcePackageUsageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total volume of data in bytes per day ingested for a given data source
     * package.</p>
     */
    inline long long GetVolumeUsageInBytes() const { return m_volumeUsageInBytes; }
    inline bool VolumeUsageInBytesHasBeenSet() const { return m_volumeUsageInBytesHasBeenSet; }
    inline void SetVolumeUsageInBytes(long long value) { m_volumeUsageInBytesHasBeenSet = true; m_volumeUsageInBytes = value; }
    inline DatasourcePackageUsageInfo& WithVolumeUsageInBytes(long long value) { SetVolumeUsageInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data and time when the member account data volume was last updated. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetVolumeUsageUpdateTime() const { return m_volumeUsageUpdateTime; }
    inline bool VolumeUsageUpdateTimeHasBeenSet() const { return m_volumeUsageUpdateTimeHasBeenSet; }
    template<typename VolumeUsageUpdateTimeT = Aws::Utils::DateTime>
    void SetVolumeUsageUpdateTime(VolumeUsageUpdateTimeT&& value) { m_volumeUsageUpdateTimeHasBeenSet = true; m_volumeUsageUpdateTime = std::forward<VolumeUsageUpdateTimeT>(value); }
    template<typename VolumeUsageUpdateTimeT = Aws::Utils::DateTime>
    DatasourcePackageUsageInfo& WithVolumeUsageUpdateTime(VolumeUsageUpdateTimeT&& value) { SetVolumeUsageUpdateTime(std::forward<VolumeUsageUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    long long m_volumeUsageInBytes{0};
    bool m_volumeUsageInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_volumeUsageUpdateTime{};
    bool m_volumeUsageUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
