/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/BrokerEBSVolumeInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class UpdateBrokerStorageRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateBrokerStorageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrokerStorage"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    UpdateBrokerStorageRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateBrokerStorageRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline const Aws::Vector<BrokerEBSVolumeInfo>& GetTargetBrokerEBSVolumeInfo() const { return m_targetBrokerEBSVolumeInfo; }
    inline bool TargetBrokerEBSVolumeInfoHasBeenSet() const { return m_targetBrokerEBSVolumeInfoHasBeenSet; }
    template<typename TargetBrokerEBSVolumeInfoT = Aws::Vector<BrokerEBSVolumeInfo>>
    void SetTargetBrokerEBSVolumeInfo(TargetBrokerEBSVolumeInfoT&& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo = std::forward<TargetBrokerEBSVolumeInfoT>(value); }
    template<typename TargetBrokerEBSVolumeInfoT = Aws::Vector<BrokerEBSVolumeInfo>>
    UpdateBrokerStorageRequest& WithTargetBrokerEBSVolumeInfo(TargetBrokerEBSVolumeInfoT&& value) { SetTargetBrokerEBSVolumeInfo(std::forward<TargetBrokerEBSVolumeInfoT>(value)); return *this;}
    template<typename TargetBrokerEBSVolumeInfoT = BrokerEBSVolumeInfo>
    UpdateBrokerStorageRequest& AddTargetBrokerEBSVolumeInfo(TargetBrokerEBSVolumeInfoT&& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo.emplace_back(std::forward<TargetBrokerEBSVolumeInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::Vector<BrokerEBSVolumeInfo> m_targetBrokerEBSVolumeInfo;
    bool m_targetBrokerEBSVolumeInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
