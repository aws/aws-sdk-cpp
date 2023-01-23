/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/JmxExporterInfo.h>
#include <aws/kafka/model/NodeExporterInfo.h>
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
            <p>Prometheus settings.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/PrometheusInfo">AWS
   * API Reference</a></p>
   */
  class PrometheusInfo
  {
  public:
    AWS_KAFKA_API PrometheusInfo();
    AWS_KAFKA_API PrometheusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API PrometheusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline const JmxExporterInfo& GetJmxExporter() const{ return m_jmxExporter; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline bool JmxExporterHasBeenSet() const { return m_jmxExporterHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline void SetJmxExporter(const JmxExporterInfo& value) { m_jmxExporterHasBeenSet = true; m_jmxExporter = value; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline void SetJmxExporter(JmxExporterInfo&& value) { m_jmxExporterHasBeenSet = true; m_jmxExporter = std::move(value); }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline PrometheusInfo& WithJmxExporter(const JmxExporterInfo& value) { SetJmxExporter(value); return *this;}

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline PrometheusInfo& WithJmxExporter(JmxExporterInfo&& value) { SetJmxExporter(std::move(value)); return *this;}


    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline const NodeExporterInfo& GetNodeExporter() const{ return m_nodeExporter; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline bool NodeExporterHasBeenSet() const { return m_nodeExporterHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline void SetNodeExporter(const NodeExporterInfo& value) { m_nodeExporterHasBeenSet = true; m_nodeExporter = value; }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline void SetNodeExporter(NodeExporterInfo&& value) { m_nodeExporterHasBeenSet = true; m_nodeExporter = std::move(value); }

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline PrometheusInfo& WithNodeExporter(const NodeExporterInfo& value) { SetNodeExporter(value); return *this;}

    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline PrometheusInfo& WithNodeExporter(NodeExporterInfo&& value) { SetNodeExporter(std::move(value)); return *this;}

  private:

    JmxExporterInfo m_jmxExporter;
    bool m_jmxExporterHasBeenSet = false;

    NodeExporterInfo m_nodeExporter;
    bool m_nodeExporterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
