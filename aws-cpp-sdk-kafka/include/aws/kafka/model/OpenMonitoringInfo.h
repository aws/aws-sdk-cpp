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
  class AWS_KAFKA_API OpenMonitoringInfo
  {
  public:
    OpenMonitoringInfo();
    OpenMonitoringInfo(Aws::Utils::Json::JsonView jsonValue);
    OpenMonitoringInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline const PrometheusInfo& GetPrometheus() const{ return m_prometheus; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline bool PrometheusHasBeenSet() const { return m_prometheusHasBeenSet; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline void SetPrometheus(const PrometheusInfo& value) { m_prometheusHasBeenSet = true; m_prometheus = value; }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline void SetPrometheus(PrometheusInfo&& value) { m_prometheusHasBeenSet = true; m_prometheus = std::move(value); }

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline OpenMonitoringInfo& WithPrometheus(const PrometheusInfo& value) { SetPrometheus(value); return *this;}

    /**
     * 
            <p>Prometheus settings.</p>
         
     */
    inline OpenMonitoringInfo& WithPrometheus(PrometheusInfo&& value) { SetPrometheus(std::move(value)); return *this;}

  private:

    PrometheusInfo m_prometheus;
    bool m_prometheusHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
