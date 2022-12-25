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
  class UpdateBrokerCountRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateBrokerCountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrokerCount"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline UpdateBrokerCountRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline UpdateBrokerCountRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline UpdateBrokerCountRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateBrokerCountRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateBrokerCountRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateBrokerCountRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>The number of broker nodes that you want the cluster to have
     * after this operation completes successfully.</p>
         
     */
    inline int GetTargetNumberOfBrokerNodes() const{ return m_targetNumberOfBrokerNodes; }

    /**
     * 
            <p>The number of broker nodes that you want the cluster to have
     * after this operation completes successfully.</p>
         
     */
    inline bool TargetNumberOfBrokerNodesHasBeenSet() const { return m_targetNumberOfBrokerNodesHasBeenSet; }

    /**
     * 
            <p>The number of broker nodes that you want the cluster to have
     * after this operation completes successfully.</p>
         
     */
    inline void SetTargetNumberOfBrokerNodes(int value) { m_targetNumberOfBrokerNodesHasBeenSet = true; m_targetNumberOfBrokerNodes = value; }

    /**
     * 
            <p>The number of broker nodes that you want the cluster to have
     * after this operation completes successfully.</p>
         
     */
    inline UpdateBrokerCountRequest& WithTargetNumberOfBrokerNodes(int value) { SetTargetNumberOfBrokerNodes(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    int m_targetNumberOfBrokerNodes;
    bool m_targetNumberOfBrokerNodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
