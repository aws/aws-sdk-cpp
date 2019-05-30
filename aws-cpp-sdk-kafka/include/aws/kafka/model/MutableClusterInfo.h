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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationInfo.h>
#include <aws/kafka/model/BrokerEBSVolumeInfo.h>
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
            <p>Information about cluster attributes that can be updated via
   * update APIs.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/MutableClusterInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API MutableClusterInfo
  {
  public:
    MutableClusterInfo();
    MutableClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    MutableClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline const Aws::Vector<BrokerEBSVolumeInfo>& GetBrokerEBSVolumeInfo() const{ return m_brokerEBSVolumeInfo; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline bool BrokerEBSVolumeInfoHasBeenSet() const { return m_brokerEBSVolumeInfoHasBeenSet; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline void SetBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo = value; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline void SetBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo = std::move(value); }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& WithBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { SetBrokerEBSVolumeInfo(value); return *this;}

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& WithBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { SetBrokerEBSVolumeInfo(std::move(value)); return *this;}

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& AddBrokerEBSVolumeInfo(const BrokerEBSVolumeInfo& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo.push_back(value); return *this; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& AddBrokerEBSVolumeInfo(BrokerEBSVolumeInfo&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const{ return m_configurationInfo; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline void SetConfigurationInfo(const ConfigurationInfo& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = value; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline void SetConfigurationInfo(ConfigurationInfo&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::move(value); }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline MutableClusterInfo& WithConfigurationInfo(const ConfigurationInfo& value) { SetConfigurationInfo(value); return *this;}

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline MutableClusterInfo& WithConfigurationInfo(ConfigurationInfo&& value) { SetConfigurationInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline MutableClusterInfo& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}

  private:

    Aws::Vector<BrokerEBSVolumeInfo> m_brokerEBSVolumeInfo;
    bool m_brokerEBSVolumeInfoHasBeenSet;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
