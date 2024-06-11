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
    AWS_KAFKA_API UpdateBrokerTypeRequest();

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
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline UpdateBrokerTypeRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline UpdateBrokerTypeRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline UpdateBrokerTypeRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The cluster version that you want to change. After this
     * operation completes successfully, the cluster will have a new version.</p>
     
     *    
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateBrokerTypeRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateBrokerTypeRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateBrokerTypeRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon MSK broker type that you want all of the brokers in
     * this cluster to be.</p>
         
     */
    inline const Aws::String& GetTargetInstanceType() const{ return m_targetInstanceType; }
    inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
    inline void SetTargetInstanceType(const Aws::String& value) { m_targetInstanceTypeHasBeenSet = true; m_targetInstanceType = value; }
    inline void SetTargetInstanceType(Aws::String&& value) { m_targetInstanceTypeHasBeenSet = true; m_targetInstanceType = std::move(value); }
    inline void SetTargetInstanceType(const char* value) { m_targetInstanceTypeHasBeenSet = true; m_targetInstanceType.assign(value); }
    inline UpdateBrokerTypeRequest& WithTargetInstanceType(const Aws::String& value) { SetTargetInstanceType(value); return *this;}
    inline UpdateBrokerTypeRequest& WithTargetInstanceType(Aws::String&& value) { SetTargetInstanceType(std::move(value)); return *this;}
    inline UpdateBrokerTypeRequest& WithTargetInstanceType(const char* value) { SetTargetInstanceType(value); return *this;}
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
