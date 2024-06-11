/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/OpenMonitoringInfo.h>
#include <aws/kafka/model/LoggingInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * Request body for UpdateMonitoring.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateMonitoringRequest">AWS
   * API Reference</a></p>
   */
  class UpdateMonitoringRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateMonitoringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitoring"; }

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
    inline UpdateMonitoringRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline UpdateMonitoringRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline UpdateMonitoringRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of the MSK cluster to update. Cluster versions
     * aren't simple numbers. You can describe an MSK cluster to find its version. When
     * this update operation is successful, it generates a new cluster version.</p>
   
     *      
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateMonitoringRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateMonitoringRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateMonitoringRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }
    inline UpdateMonitoringRequest& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}
    inline UpdateMonitoringRequest& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoringInfo& GetOpenMonitoring() const{ return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    inline void SetOpenMonitoring(const OpenMonitoringInfo& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = value; }
    inline void SetOpenMonitoring(OpenMonitoringInfo&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::move(value); }
    inline UpdateMonitoringRequest& WithOpenMonitoring(const OpenMonitoringInfo& value) { SetOpenMonitoring(value); return *this;}
    inline UpdateMonitoringRequest& WithOpenMonitoring(OpenMonitoringInfo&& value) { SetOpenMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }
    inline UpdateMonitoringRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}
    inline UpdateMonitoringRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoringInfo m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
