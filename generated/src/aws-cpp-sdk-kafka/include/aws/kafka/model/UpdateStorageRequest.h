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
    AWS_KAFKA_API UpdateStorageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorage"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline UpdateStorageRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline UpdateStorageRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline UpdateStorageRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline UpdateStorageRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateStorageRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of cluster to update from. A successful operation
     * will then generate a new version.</p>
         
     */
    inline UpdateStorageRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline UpdateStorageRequest& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline UpdateStorageRequest& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline const StorageMode& GetStorageMode() const{ return m_storageMode; }

    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline bool StorageModeHasBeenSet() const { return m_storageModeHasBeenSet; }

    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline void SetStorageMode(const StorageMode& value) { m_storageModeHasBeenSet = true; m_storageMode = value; }

    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline void SetStorageMode(StorageMode&& value) { m_storageModeHasBeenSet = true; m_storageMode = std::move(value); }

    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline UpdateStorageRequest& WithStorageMode(const StorageMode& value) { SetStorageMode(value); return *this;}

    /**
     * 
            <p>Controls storage mode for supported storage tiers.</p>
         
     */
    inline UpdateStorageRequest& WithStorageMode(StorageMode&& value) { SetStorageMode(std::move(value)); return *this;}


    /**
     * 
            <p>size of the EBS volume to update.</p>
         
     */
    inline int GetVolumeSizeGB() const{ return m_volumeSizeGB; }

    /**
     * 
            <p>size of the EBS volume to update.</p>
         
     */
    inline bool VolumeSizeGBHasBeenSet() const { return m_volumeSizeGBHasBeenSet; }

    /**
     * 
            <p>size of the EBS volume to update.</p>
         
     */
    inline void SetVolumeSizeGB(int value) { m_volumeSizeGBHasBeenSet = true; m_volumeSizeGB = value; }

    /**
     * 
            <p>size of the EBS volume to update.</p>
         
     */
    inline UpdateStorageRequest& WithVolumeSizeGB(int value) { SetVolumeSizeGB(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    StorageMode m_storageMode;
    bool m_storageModeHasBeenSet = false;

    int m_volumeSizeGB;
    bool m_volumeSizeGBHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
