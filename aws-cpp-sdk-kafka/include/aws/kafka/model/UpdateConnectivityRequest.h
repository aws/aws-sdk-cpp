/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ConnectivityInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * Request body for UpdateConnectivity.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateConnectivityRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConnectivityRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateConnectivityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectivity"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConnectivityRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConnectivityRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConnectivityRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline void SetConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = value; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline void SetConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::move(value); }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline UpdateConnectivityRequest& WithConnectivityInfo(const ConnectivityInfo& value) { SetConnectivityInfo(value); return *this;}

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline UpdateConnectivityRequest& WithConnectivityInfo(ConnectivityInfo&& value) { SetConnectivityInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline UpdateConnectivityRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline UpdateConnectivityRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline UpdateConnectivityRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ConnectivityInfo m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
