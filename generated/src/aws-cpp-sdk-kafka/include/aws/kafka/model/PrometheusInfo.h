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
    AWS_KAFKA_API PrometheusInfo() = default;
    AWS_KAFKA_API PrometheusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API PrometheusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Indicates whether you want to turn on or turn off the JMX
     * Exporter.</p>
         
     */
    inline const JmxExporterInfo& GetJmxExporter() const { return m_jmxExporter; }
    inline bool JmxExporterHasBeenSet() const { return m_jmxExporterHasBeenSet; }
    template<typename JmxExporterT = JmxExporterInfo>
    void SetJmxExporter(JmxExporterT&& value) { m_jmxExporterHasBeenSet = true; m_jmxExporter = std::forward<JmxExporterT>(value); }
    template<typename JmxExporterT = JmxExporterInfo>
    PrometheusInfo& WithJmxExporter(JmxExporterT&& value) { SetJmxExporter(std::forward<JmxExporterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Indicates whether you want to turn on or turn off the Node
     * Exporter.</p>
         
     */
    inline const NodeExporterInfo& GetNodeExporter() const { return m_nodeExporter; }
    inline bool NodeExporterHasBeenSet() const { return m_nodeExporterHasBeenSet; }
    template<typename NodeExporterT = NodeExporterInfo>
    void SetNodeExporter(NodeExporterT&& value) { m_nodeExporterHasBeenSet = true; m_nodeExporter = std::forward<NodeExporterT>(value); }
    template<typename NodeExporterT = NodeExporterInfo>
    PrometheusInfo& WithNodeExporter(NodeExporterT&& value) { SetNodeExporter(std::forward<NodeExporterT>(value)); return *this;}
    ///@}
  private:

    JmxExporterInfo m_jmxExporter;
    bool m_jmxExporterHasBeenSet = false;

    NodeExporterInfo m_nodeExporter;
    bool m_nodeExporterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
