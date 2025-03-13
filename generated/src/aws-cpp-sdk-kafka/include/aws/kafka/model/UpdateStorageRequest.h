/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ProvisionedThroughput.h>
#include <aws/kafka/model/StorageMode.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Request object for UpdateStorage api. Its used to update the
   * storage attributes for the cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateStorageRequest">AWS
   * API Reference</a></p>
   */
  class UpdateStorageRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateStorageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorage"; }

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
    UpdateStorageRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
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
    UpdateStorageRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    UpdateStorageRequest& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline StorageMode GetStorageMode() const { return m_storageMode; }
    inline bool StorageModeHasBeenSet() const { return m_storageModeHasBeenSet; }
    inline void SetStorageMode(StorageMode value) { m_storageModeHasBeenSet = true; m_storageMode = value; }
    inline UpdateStorageRequest& WithStorageMode(StorageMode value) { SetStorageMode(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>size of the EBS volume to update.</p>
         
     */
    inline int GetVolumeSizeGB() const { return m_volumeSizeGB; }
    inline bool VolumeSizeGBHasBeenSet() const { return m_volumeSizeGBHasBeenSet; }
    inline void SetVolumeSizeGB(int value) { m_volumeSizeGBHasBeenSet = true; m_volumeSizeGB = value; }
    inline UpdateStorageRequest& WithVolumeSizeGB(int value) { SetVolumeSizeGB(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    StorageMode m_storageMode{StorageMode::NOT_SET};
    bool m_storageModeHasBeenSet = false;

    int m_volumeSizeGB{0};
    bool m_volumeSizeGBHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
