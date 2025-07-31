/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/ClusterMetadata.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the task or pod in the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ClusterDetails">AWS
   * API Reference</a></p>
   */
  class ClusterDetails
  {
  public:
    AWS_INSPECTOR2_API ClusterDetails() = default;
    AWS_INSPECTOR2_API ClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last timestamp when Amazon Inspector recorded the image in use in the
     * task or pod in the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetLastInUse() const { return m_lastInUse; }
    inline bool LastInUseHasBeenSet() const { return m_lastInUseHasBeenSet; }
    template<typename LastInUseT = Aws::Utils::DateTime>
    void SetLastInUse(LastInUseT&& value) { m_lastInUseHasBeenSet = true; m_lastInUse = std::forward<LastInUseT>(value); }
    template<typename LastInUseT = Aws::Utils::DateTime>
    ClusterDetails& WithLastInUse(LastInUseT&& value) { SetLastInUse(std::forward<LastInUseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks or pods where an image was running on the cluster.</p>
     */
    inline long long GetRunningUnitCount() const { return m_runningUnitCount; }
    inline bool RunningUnitCountHasBeenSet() const { return m_runningUnitCountHasBeenSet; }
    inline void SetRunningUnitCount(long long value) { m_runningUnitCountHasBeenSet = true; m_runningUnitCount = value; }
    inline ClusterDetails& WithRunningUnitCount(long long value) { SetRunningUnitCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks or pods where an image was stopped on the cluster in the
     * last 24 hours.</p>
     */
    inline long long GetStoppedUnitCount() const { return m_stoppedUnitCount; }
    inline bool StoppedUnitCountHasBeenSet() const { return m_stoppedUnitCountHasBeenSet; }
    inline void SetStoppedUnitCount(long long value) { m_stoppedUnitCountHasBeenSet = true; m_stoppedUnitCount = value; }
    inline ClusterDetails& WithStoppedUnitCount(long long value) { SetStoppedUnitCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ClusterMetadata& GetClusterMetadata() const { return m_clusterMetadata; }
    inline bool ClusterMetadataHasBeenSet() const { return m_clusterMetadataHasBeenSet; }
    template<typename ClusterMetadataT = ClusterMetadata>
    void SetClusterMetadata(ClusterMetadataT&& value) { m_clusterMetadataHasBeenSet = true; m_clusterMetadata = std::forward<ClusterMetadataT>(value); }
    template<typename ClusterMetadataT = ClusterMetadata>
    ClusterDetails& WithClusterMetadata(ClusterMetadataT&& value) { SetClusterMetadata(std::forward<ClusterMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastInUse{};
    bool m_lastInUseHasBeenSet = false;

    long long m_runningUnitCount{0};
    bool m_runningUnitCountHasBeenSet = false;

    long long m_stoppedUnitCount{0};
    bool m_stoppedUnitCountHasBeenSet = false;

    ClusterMetadata m_clusterMetadata;
    bool m_clusterMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
