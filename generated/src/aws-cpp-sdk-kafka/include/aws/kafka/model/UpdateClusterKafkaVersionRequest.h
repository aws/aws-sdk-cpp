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
    AWS_KAFKA_API UpdateClusterKafkaVersionRequest();

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
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline UpdateClusterKafkaVersionRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The custom configuration that should be applied on the new
     * version of cluster.</p>
            
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const{ return m_configurationInfo; }
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }
    inline void SetConfigurationInfo(const ConfigurationInfo& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = value; }
    inline void SetConfigurationInfo(ConfigurationInfo&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::move(value); }
    inline UpdateClusterKafkaVersionRequest& WithConfigurationInfo(const ConfigurationInfo& value) { SetConfigurationInfo(value); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithConfigurationInfo(ConfigurationInfo&& value) { SetConfigurationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Current cluster version.</p>
            
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateClusterKafkaVersionRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Target Kafka version.</p>
            
     */
    inline const Aws::String& GetTargetKafkaVersion() const{ return m_targetKafkaVersion; }
    inline bool TargetKafkaVersionHasBeenSet() const { return m_targetKafkaVersionHasBeenSet; }
    inline void SetTargetKafkaVersion(const Aws::String& value) { m_targetKafkaVersionHasBeenSet = true; m_targetKafkaVersion = value; }
    inline void SetTargetKafkaVersion(Aws::String&& value) { m_targetKafkaVersionHasBeenSet = true; m_targetKafkaVersion = std::move(value); }
    inline void SetTargetKafkaVersion(const char* value) { m_targetKafkaVersionHasBeenSet = true; m_targetKafkaVersion.assign(value); }
    inline UpdateClusterKafkaVersionRequest& WithTargetKafkaVersion(const Aws::String& value) { SetTargetKafkaVersion(value); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithTargetKafkaVersion(Aws::String&& value) { SetTargetKafkaVersion(std::move(value)); return *this;}
    inline UpdateClusterKafkaVersionRequest& WithTargetKafkaVersion(const char* value) { SetTargetKafkaVersion(value); return *this;}
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
