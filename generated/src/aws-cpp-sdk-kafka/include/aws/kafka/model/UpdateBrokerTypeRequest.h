/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class UpdateBrokerTypeRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateBrokerTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrokerType"; }

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
    UpdateBrokerTypeRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The cluster version that you want to change. After this
     * operation completes successfully, the cluster will have a new version.</p>
     
     *    
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateBrokerTypeRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon MSK broker type that you want all of the brokers in
     * this cluster to be.</p>
         
     */
    inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
    inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
    template<typename TargetInstanceTypeT = Aws::String>
    void SetTargetInstanceType(TargetInstanceTypeT&& value) { m_targetInstanceTypeHasBeenSet = true; m_targetInstanceType = std::forward<TargetInstanceTypeT>(value); }
    template<typename TargetInstanceTypeT = Aws::String>
    UpdateBrokerTypeRequest& WithTargetInstanceType(TargetInstanceTypeT&& value) { SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_targetInstanceType;
    bool m_targetInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
