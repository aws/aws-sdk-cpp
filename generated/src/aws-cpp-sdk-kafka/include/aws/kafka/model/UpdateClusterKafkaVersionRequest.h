/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ConfigurationInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class UpdateClusterKafkaVersionRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateClusterKafkaVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterKafkaVersion"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
            
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    UpdateClusterKafkaVersionRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The custom configuration that should be applied on the new
     * version of cluster.</p>
            
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const { return m_configurationInfo; }
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    void SetConfigurationInfo(ConfigurationInfoT&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::forward<ConfigurationInfoT>(value); }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    UpdateClusterKafkaVersionRequest& WithConfigurationInfo(ConfigurationInfoT&& value) { SetConfigurationInfo(std::forward<ConfigurationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Current cluster version.</p>
            
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateClusterKafkaVersionRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Target Kafka version.</p>
            
     */
    inline const Aws::String& GetTargetKafkaVersion() const { return m_targetKafkaVersion; }
    inline bool TargetKafkaVersionHasBeenSet() const { return m_targetKafkaVersionHasBeenSet; }
    template<typename TargetKafkaVersionT = Aws::String>
    void SetTargetKafkaVersion(TargetKafkaVersionT&& value) { m_targetKafkaVersionHasBeenSet = true; m_targetKafkaVersion = std::forward<TargetKafkaVersionT>(value); }
    template<typename TargetKafkaVersionT = Aws::String>
    UpdateClusterKafkaVersionRequest& WithTargetKafkaVersion(TargetKafkaVersionT&& value) { SetTargetKafkaVersion(std::forward<TargetKafkaVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_targetKafkaVersion;
    bool m_targetKafkaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
