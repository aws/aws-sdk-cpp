﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/PrometheusInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/OpenMonitoringInfo">AWS
   * API Reference</a></p>
   */
  class OpenMonitoringInfo
  {
  public:
    AWS_KAFKA_API OpenMonitoringInfo() = default;
    AWS_KAFKA_API OpenMonitoringInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API OpenMonitoringInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline const PrometheusInfo& GetPrometheus() const { return m_prometheus; }
    inline bool PrometheusHasBeenSet() const { return m_prometheusHasBeenSet; }
    template<typename PrometheusT = PrometheusInfo>
    void SetPrometheus(PrometheusT&& value) { m_prometheusHasBeenSet = true; m_prometheus = std::forward<PrometheusT>(value); }
    template<typename PrometheusT = PrometheusInfo>
    OpenMonitoringInfo& WithPrometheus(PrometheusT&& value) { SetPrometheus(std::forward<PrometheusT>(value)); return *this;}
    ///@}
  private:

    PrometheusInfo m_prometheus;
    bool m_prometheusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
