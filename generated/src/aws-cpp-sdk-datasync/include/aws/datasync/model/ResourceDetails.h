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
    AWS_DATASYNC_API ResourceDetails();
    AWS_DATASYNC_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPSVM>& GetNetAppONTAPSVMs() const{ return m_netAppONTAPSVMs; }

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline bool NetAppONTAPSVMsHasBeenSet() const { return m_netAppONTAPSVMsHasBeenSet; }

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline void SetNetAppONTAPSVMs(const Aws::Vector<NetAppONTAPSVM>& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs = value; }

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline void SetNetAppONTAPSVMs(Aws::Vector<NetAppONTAPSVM>&& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs = std::move(value); }

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPSVMs(const Aws::Vector<NetAppONTAPSVM>& value) { SetNetAppONTAPSVMs(value); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPSVMs(Aws::Vector<NetAppONTAPSVM>&& value) { SetNetAppONTAPSVMs(std::move(value)); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPSVMs(const NetAppONTAPSVM& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs.push_back(value); return *this; }

    /**
     * <p>The information that DataSync Discovery collects about storage virtual
     * machines (SVMs) in your on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPSVMs(NetAppONTAPSVM&& value) { m_netAppONTAPSVMsHasBeenSet = true; m_netAppONTAPSVMs.push_back(std::move(value)); return *this; }


    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPVolume>& GetNetAppONTAPVolumes() const{ return m_netAppONTAPVolumes; }

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline bool NetAppONTAPVolumesHasBeenSet() const { return m_netAppONTAPVolumesHasBeenSet; }

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline void SetNetAppONTAPVolumes(const Aws::Vector<NetAppONTAPVolume>& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes = value; }

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline void SetNetAppONTAPVolumes(Aws::Vector<NetAppONTAPVolume>&& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes = std::move(value); }

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPVolumes(const Aws::Vector<NetAppONTAPVolume>& value) { SetNetAppONTAPVolumes(value); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPVolumes(Aws::Vector<NetAppONTAPVolume>&& value) { SetNetAppONTAPVolumes(std::move(value)); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPVolumes(const NetAppONTAPVolume& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes.push_back(value); return *this; }

    /**
     * <p>The information that DataSync Discovery collects about volumes in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPVolumes(NetAppONTAPVolume&& value) { m_netAppONTAPVolumesHasBeenSet = true; m_netAppONTAPVolumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<NetAppONTAPCluster>& GetNetAppONTAPClusters() const{ return m_netAppONTAPClusters; }

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline bool NetAppONTAPClustersHasBeenSet() const { return m_netAppONTAPClustersHasBeenSet; }

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline void SetNetAppONTAPClusters(const Aws::Vector<NetAppONTAPCluster>& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters = value; }

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline void SetNetAppONTAPClusters(Aws::Vector<NetAppONTAPCluster>&& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters = std::move(value); }

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPClusters(const Aws::Vector<NetAppONTAPCluster>& value) { SetNetAppONTAPClusters(value); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& WithNetAppONTAPClusters(Aws::Vector<NetAppONTAPCluster>&& value) { SetNetAppONTAPClusters(std::move(value)); return *this;}

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPClusters(const NetAppONTAPCluster& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters.push_back(value); return *this; }

    /**
     * <p>The information that DataSync Discovery collects about the cluster in your
     * on-premises storage system.</p>
     */
    inline ResourceDetails& AddNetAppONTAPClusters(NetAppONTAPCluster&& value) { m_netAppONTAPClustersHasBeenSet = true; m_netAppONTAPClusters.push_back(std::move(value)); return *this; }

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
