/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Prometheus.h>
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
            <p>JMX and Node monitoring for the MSK cluster.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/OpenMonitoring">AWS
   * API Reference</a></p>
   */
  class OpenMonitoring
  {
  public:
    AWS_KAFKA_API OpenMonitoring();
    AWS_KAFKA_API OpenMonitoring(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API OpenMonitoring& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline const Prometheus& GetPrometheus() const{ return m_prometheus; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline bool PrometheusHasBeenSet() const { return m_prometheusHasBeenSet; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline void SetPrometheus(const Prometheus& value) { m_prometheusHasBeenSet = true; m_prometheus = value; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline void SetPrometheus(Prometheus&& value) { m_prometheusHasBeenSet = true; m_prometheus = std::move(value); }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline OpenMonitoring& WithPrometheus(const Prometheus& value) { SetPrometheus(value); return *this;}

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline OpenMonitoring& WithPrometheus(Prometheus&& value) { SetPrometheus(std::move(value)); return *this;}

  private:

    Prometheus m_prometheus;
    bool m_prometheusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
