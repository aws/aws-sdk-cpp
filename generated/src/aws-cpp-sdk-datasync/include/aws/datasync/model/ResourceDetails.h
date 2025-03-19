/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/NetAppONTAPSVM.h>
#include <aws/datasync/model/NetAppONTAPVolume.h>
#include <aws/datasync/model/NetAppONTAPCluster.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Information provided by DataSync Discovery about the resources in your
   * on-premises storage system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_DATASYNC_API ResourceDetails() = default;
    AWS_DATASYNC_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPSVM>& GetNetAppONTAPSVMs() const { return m_netAppONTAPSVMs; }
    inline bool NetAppONTAPSVMsHasBeenSet() const { return m_netAppONTAPSVMsHasBeenSet; }
    template<typename NetAppONTAPSVMsT = Aws::Vector<NetAppONTAPSVM>>
    void SetNetAppONTAPSVMs(NetAppONTAPSVMsT&& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs = std::forward<NetAppONTAPSVMsT>(value); }
    template<typename NetAppONTAPSVMsT = Aws::Vector<NetAppONTAPSVM>>
    ResourceDetails& WithNetAppONTAPSVMs(NetAppONTAPSVMsT&& value) { SetNetAppONTAPSVMs(std::forward<NetAppONTAPSVMsT>(value)); return *this;}
    template<typename NetAppONTAPSVMsT = NetAppONTAPSVM>
    ResourceDetails& AddNetAppONTAPSVMs(NetAppONTAPSVMsT&& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs.emplace_back(std::forward<NetAppONTAPSVMsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPVolume>& GetNetAppONTAPVolumes() const { return m_netAppONTAPVolumes; }
    inline bool NetAppONTAPVolumesHasBeenSet() const { return m_netAppONTAPVolumesHasBeenSet; }
    template<typename NetAppONTAPVolumesT = Aws::Vector<NetAppONTAPVolume>>
    void SetNetAppONTAPVolumes(NetAppONTAPVolumesT&& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes = std::forward<NetAppONTAPVolumesT>(value); }
    template<typename NetAppONTAPVolumesT = Aws::Vector<NetAppONTAPVolume>>
    ResourceDetails& WithNetAppONTAPVolumes(NetAppONTAPVolumesT&& value) { SetNetAppONTAPVolumes(std::forward<NetAppONTAPVolumesT>(value)); return *this;}
    template<typename NetAppONTAPVolumesT = NetAppONTAPVolume>
    ResourceDetails& AddNetAppONTAPVolumes(NetAppONTAPVolumesT&& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes.emplace_back(std::forward<NetAppONTAPVolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPCluster>& GetNetAppONTAPClusters() const { return m_netAppONTAPClusters; }
    inline bool NetAppONTAPClustersHasBeenSet() const { return m_netAppONTAPClustersHasBeenSet; }
    template<typename NetAppONTAPClustersT = Aws::Vector<NetAppONTAPCluster>>
    void SetNetAppONTAPClusters(NetAppONTAPClustersT&& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters = std::forward<NetAppONTAPClustersT>(value); }
    template<typename NetAppONTAPClustersT = Aws::Vector<NetAppONTAPCluster>>
    ResourceDetails& WithNetAppONTAPClusters(NetAppONTAPClustersT&& value) { SetNetAppONTAPClusters(std::forward<NetAppONTAPClustersT>(value)); return *this;}
    template<typename NetAppONTAPClustersT = NetAppONTAPCluster>
    ResourceDetails& AddNetAppONTAPClusters(NetAppONTAPClustersT&& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters.emplace_back(std::forward<NetAppONTAPClustersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<NetAppONTAPSVM> m_netAppONTAPSVMs;
    bool m_netAppONTAPSVMsHasBeenSet = false;

    Aws::Vector<NetAppONTAPVolume> m_netAppONTAPVolumes;
    bool m_netAppONTAPVolumesHasBeenSet = false;

    Aws::Vector<NetAppONTAPCluster> m_netAppONTAPClusters;
    bool m_netAppONTAPClustersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
