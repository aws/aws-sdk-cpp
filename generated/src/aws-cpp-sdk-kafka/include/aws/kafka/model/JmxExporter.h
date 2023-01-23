/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>

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
            <p>Indicates whether you want to turn on or turn off the JMX
   * Exporter.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/JmxExporter">AWS
   * API Reference</a></p>
   */
  class JmxExporter
  {
  public:
    AWS_KAFKA_API JmxExporter();
    AWS_KAFKA_API JmxExporter(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API JmxExporter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline bool GetEnabledInBroker() const{ return m_enabledInBroker; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline bool EnabledInBrokerHasBeenSet() const { return m_enabledInBrokerHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline void SetEnabledInBroker(bool value) { m_enabledInBrokerHasBeenSet = true; m_enabledInBroker = value; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline JmxExporter& WithEnabledInBroker(bool value) { SetEnabledInBroker(value); return *this;}

  private:

    bool m_enabledInBroker;
    bool m_enabledInBrokerHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
