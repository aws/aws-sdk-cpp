/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BrokerSoftwareInfo
  {
  public:
    AWS_KAFKA_API BrokerSoftwareInfo() = default;
    AWS_KAFKA_API BrokerSoftwareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerSoftwareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration used for the
     * cluster. This field isn't visible in this preview release.</p>
         
     */
    inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }
    template<typename ConfigurationArnT = Aws::String>
    void SetConfigurationArn(ConfigurationArnT&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::forward<ConfigurationArnT>(value); }
    template<typename ConfigurationArnT = Aws::String>
    BrokerSoftwareInfo& WithConfigurationArn(ConfigurationArnT&& value) { SetConfigurationArn(std::forward<ConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The revision of the configuration to use. This field isn't
     * visible in this preview release.</p>
         
     */
    inline long long GetConfigurationRevision() const { return m_configurationRevision; }
    inline bool ConfigurationRevisionHasBeenSet() const { return m_configurationRevisionHasBeenSet; }
    inline void SetConfigurationRevision(long long value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = value; }
    inline BrokerSoftwareInfo& WithConfigurationRevision(long long value) { SetConfigurationRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of Apache Kafka.</p>
         
     */
    inline const Aws::String& GetKafkaVersion() const { return m_kafkaVersion; }
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }
    template<typename KafkaVersionT = Aws::String>
    void SetKafkaVersion(KafkaVersionT&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::forward<KafkaVersionT>(value); }
    template<typename KafkaVersionT = Aws::String>
    BrokerSoftwareInfo& WithKafkaVersion(KafkaVersionT&& value) { SetKafkaVersion(std::forward<KafkaVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;

    long long m_configurationRevision{0};
    bool m_configurationRevisionHasBeenSet = false;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
