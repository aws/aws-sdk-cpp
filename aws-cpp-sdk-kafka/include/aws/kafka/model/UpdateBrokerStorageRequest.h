/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KAFKA_API UpdateBrokerStorageRequest : public KafkaRequest
  {
  public:
    UpdateBrokerStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrokerStorage"; }

    Aws::String SerializePayload() const override;


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
    inline UpdateBrokerStorageRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline UpdateBrokerStorageRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline const Aws::Vector<BrokerEBSVolumeInfo>& GetTargetBrokerEBSVolumeInfo() const{ return m_targetBrokerEBSVolumeInfo; }

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline bool TargetBrokerEBSVolumeInfoHasBeenSet() const { return m_targetBrokerEBSVolumeInfoHasBeenSet; }

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline void SetTargetBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo = value; }

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline void SetTargetBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo = std::move(value); }

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithTargetBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { SetTargetBrokerEBSVolumeInfo(value); return *this;}

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline UpdateBrokerStorageRequest& WithTargetBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { SetTargetBrokerEBSVolumeInfo(std::move(value)); return *this;}

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline UpdateBrokerStorageRequest& AddTargetBrokerEBSVolumeInfo(const BrokerEBSVolumeInfo& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo.push_back(value); return *this; }

    /**
     * 
            <p>Describes the target volume size and the ID of the broker to
     * apply the update to.</p>
         
     */
    inline UpdateBrokerStorageRequest& AddTargetBrokerEBSVolumeInfo(BrokerEBSVolumeInfo&& value) { m_targetBrokerEBSVolumeInfoHasBeenSet = true; m_targetBrokerEBSVolumeInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    Aws::Vector<BrokerEBSVolumeInfo> m_targetBrokerEBSVolumeInfo;
    bool m_targetBrokerEBSVolumeInfoHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
