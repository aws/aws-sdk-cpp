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
            <p>Indicates whether you want to turn on or turn off the Node
   * Exporter.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/NodeExporter">AWS
   * API Reference</a></p>
   */
  class NodeExporter
  {
  public:
    AWS_KAFKA_API NodeExporter();
    AWS_KAFKA_API NodeExporter(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API NodeExporter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline bool GetEnabledInBroker() const{ return m_enabledInBroker; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline bool EnabledInBrokerHasBeenSet() const { return m_enabledInBrokerHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline void SetEnabledInBroker(bool value) { m_enabledInBrokerHasBeenSet = true; m_enabledInBroker = value; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline NodeExporter& WithEnabledInBroker(bool value) { SetEnabledInBroker(value); return *this;}

  private:

    bool m_enabledInBroker;
    bool m_enabledInBrokerHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
