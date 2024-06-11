﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ProvisionedThroughput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Specifies the EBS volume upgrade information. The broker
   * identifier must be set to the keyword ALL. This means the changes apply to all
   * the brokers in the cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerEBSVolumeInfo">AWS
   * API Reference</a></p>
   */
  class BrokerEBSVolumeInfo
  {
  public:
    AWS_KAFKA_API BrokerEBSVolumeInfo();
    AWS_KAFKA_API BrokerEBSVolumeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerEBSVolumeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline const Aws::String& GetKafkaBrokerNodeId() const{ return m_kafkaBrokerNodeId; }
    inline bool KafkaBrokerNodeIdHasBeenSet() const { return m_kafkaBrokerNodeIdHasBeenSet; }
    inline void SetKafkaBrokerNodeId(const Aws::String& value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId = value; }
    inline void SetKafkaBrokerNodeId(Aws::String&& value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId = std::move(value); }
    inline void SetKafkaBrokerNodeId(const char* value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId.assign(value); }
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(const Aws::String& value) { SetKafkaBrokerNodeId(value); return *this;}
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(Aws::String&& value) { SetKafkaBrokerNodeId(std::move(value)); return *this;}
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(const char* value) { SetKafkaBrokerNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>EBS volume provisioned throughput information.</p>
         
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline BrokerEBSVolumeInfo& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline BrokerEBSVolumeInfo& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Size of the EBS volume to update.</p>
         
     */
    inline int GetVolumeSizeGB() const{ return m_volumeSizeGB; }
    inline bool VolumeSizeGBHasBeenSet() const { return m_volumeSizeGBHasBeenSet; }
    inline void SetVolumeSizeGB(int value) { m_volumeSizeGBHasBeenSet = true; m_volumeSizeGB = value; }
    inline BrokerEBSVolumeInfo& WithVolumeSizeGB(int value) { SetVolumeSizeGB(value); return *this;}
    ///@}
  private:

    Aws::String m_kafkaBrokerNodeId;
    bool m_kafkaBrokerNodeIdHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    int m_volumeSizeGB;
    bool m_volumeSizeGBHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
