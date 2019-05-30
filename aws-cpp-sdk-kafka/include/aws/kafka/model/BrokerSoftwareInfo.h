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
            <p>Information about the current software installed on the
   * cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerSoftwareInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API BrokerSoftwareInfo
  {
  public:
    BrokerSoftwareInfo();
    BrokerSoftwareInfo(Aws::Utils::Json::JsonView jsonValue);
    BrokerSoftwareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline const Aws::String& GetConfigurationArn() const{ return m_configurationArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline void SetConfigurationArn(const Aws::String& value) { m_configurationArnHasBeenSet = true; m_configurationArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline void SetConfigurationArn(Aws::String&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline void SetConfigurationArn(const char* value) { m_configurationArnHasBeenSet = true; m_configurationArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline BrokerSoftwareInfo& WithConfigurationArn(const Aws::String& value) { SetConfigurationArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline BrokerSoftwareInfo& WithConfigurationArn(Aws::String&& value) { SetConfigurationArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline BrokerSoftwareInfo& WithConfigurationArn(const char* value) { SetConfigurationArn(value); return *this;}


    /**
     * 
            <p>The revision of the configuration to use. This field isn't
     * visible in this preview release.</p>
         
     */
    inline long long GetConfigurationRevision() const{ return m_configurationRevision; }

    /**
     * 
            <p>The revision of the configuration to use. This field isn't
     * visible in this preview release.</p>
         
     */
    inline bool ConfigurationRevisionHasBeenSet() const { return m_configurationRevisionHasBeenSet; }

    /**
     * 
            <p>The revision of the configuration to use. This field isn't
     * visible in this preview release.</p>
         
     */
    inline void SetConfigurationRevision(long long value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = value; }

    /**
     * 
            <p>The revision of the configuration to use. This field isn't
     * visible in this preview release.</p>
         
     */
    inline BrokerSoftwareInfo& WithConfigurationRevision(long long value) { SetConfigurationRevision(value); return *this;}


    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline const Aws::String& GetKafkaVersion() const{ return m_kafkaVersion; }

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline void SetKafkaVersion(const Aws::String& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = value; }

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline void SetKafkaVersion(Aws::String&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::move(value); }

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline void SetKafkaVersion(const char* value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion.assign(value); }

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline BrokerSoftwareInfo& WithKafkaVersion(const Aws::String& value) { SetKafkaVersion(value); return *this;}

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline BrokerSoftwareInfo& WithKafkaVersion(Aws::String&& value) { SetKafkaVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline BrokerSoftwareInfo& WithKafkaVersion(const char* value) { SetKafkaVersion(value); return *this;}

  private:

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet;

    long long m_configurationRevision;
    bool m_configurationRevisionHasBeenSet;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
