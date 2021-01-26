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
            <p>Indicates whether you want to enable or disable the JMX
   * Exporter.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/JmxExporter">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API JmxExporter
  {
  public:
    JmxExporter();
    JmxExporter(Aws::Utils::Json::JsonView jsonValue);
    JmxExporter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether you want to enable or disable the JMX
     * Exporter.</p>
         
     */
    inline bool GetEnabledInBroker() const{ return m_enabledInBroker; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the JMX
     * Exporter.</p>
         
     */
    inline bool EnabledInBrokerHasBeenSet() const { return m_enabledInBrokerHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the JMX
     * Exporter.</p>
         
     */
    inline void SetEnabledInBroker(bool value) { m_enabledInBrokerHasBeenSet = true; m_enabledInBroker = value; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the JMX
     * Exporter.</p>
         
     */
    inline JmxExporter& WithEnabledInBroker(bool value) { SetEnabledInBroker(value); return *this;}

  private:

    bool m_enabledInBroker;
    bool m_enabledInBrokerHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
