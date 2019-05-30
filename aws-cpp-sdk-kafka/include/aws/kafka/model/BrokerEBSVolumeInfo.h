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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_KAFKA_API BrokerEBSVolumeInfo
  {
  public:
    BrokerEBSVolumeInfo();
    BrokerEBSVolumeInfo(Aws::Utils::Json::JsonView jsonValue);
    BrokerEBSVolumeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline const Aws::String& GetKafkaBrokerNodeId() const{ return m_kafkaBrokerNodeId; }

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline bool KafkaBrokerNodeIdHasBeenSet() const { return m_kafkaBrokerNodeIdHasBeenSet; }

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline void SetKafkaBrokerNodeId(const Aws::String& value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId = value; }

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline void SetKafkaBrokerNodeId(Aws::String&& value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId = std::move(value); }

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline void SetKafkaBrokerNodeId(const char* value) { m_kafkaBrokerNodeIdHasBeenSet = true; m_kafkaBrokerNodeId.assign(value); }

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(const Aws::String& value) { SetKafkaBrokerNodeId(value); return *this;}

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(Aws::String&& value) { SetKafkaBrokerNodeId(std::move(value)); return *this;}

    /**
     * 
            <p>The ID of the broker to update.</p>
         
     */
    inline BrokerEBSVolumeInfo& WithKafkaBrokerNodeId(const char* value) { SetKafkaBrokerNodeId(value); return *this;}


    /**
     * 
            <p>Size of the EBS volume to update.</p>
         
     */
    inline int GetVolumeSizeGB() const{ return m_volumeSizeGB; }

    /**
     * 
            <p>Size of the EBS volume to update.</p>
         
     */
    inline bool VolumeSizeGBHasBeenSet() const { return m_volumeSizeGBHasBeenSet; }

    /**
     * 
            <p>Size of the EBS volume to update.</p>
         
     */
    inline void SetVolumeSizeGB(int value) { m_volumeSizeGBHasBeenSet = true; m_volumeSizeGB = value; }

    /**
     * 
            <p>Size of the EBS volume to update.</p>
         
     */
    inline BrokerEBSVolumeInfo& WithVolumeSizeGB(int value) { SetVolumeSizeGB(value); return *this;}

  private:

    Aws::String m_kafkaBrokerNodeId;
    bool m_kafkaBrokerNodeIdHasBeenSet;

    int m_volumeSizeGB;
    bool m_volumeSizeGBHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
