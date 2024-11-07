/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MetricsConfigurationPolicy.h>
#include <aws/cleanroomsml/model/LogsConfigurationPolicy.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The configuration policy for the trained models.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelsConfigurationPolicy">AWS
   * API Reference</a></p>
   */
  class TrainedModelsConfigurationPolicy
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy();
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the logs of the trained model.</p>
     */
    inline const Aws::Vector<LogsConfigurationPolicy>& GetContainerLogs() const{ return m_containerLogs; }
    inline bool ContainerLogsHasBeenSet() const { return m_containerLogsHasBeenSet; }
    inline void SetContainerLogs(const Aws::Vector<LogsConfigurationPolicy>& value) { m_containerLogsHasBeenSet = true; m_containerLogs = value; }
    inline void SetContainerLogs(Aws::Vector<LogsConfigurationPolicy>&& value) { m_containerLogsHasBeenSet = true; m_containerLogs = std::move(value); }
    inline TrainedModelsConfigurationPolicy& WithContainerLogs(const Aws::Vector<LogsConfigurationPolicy>& value) { SetContainerLogs(value); return *this;}
    inline TrainedModelsConfigurationPolicy& WithContainerLogs(Aws::Vector<LogsConfigurationPolicy>&& value) { SetContainerLogs(std::move(value)); return *this;}
    inline TrainedModelsConfigurationPolicy& AddContainerLogs(const LogsConfigurationPolicy& value) { m_containerLogsHasBeenSet = true; m_containerLogs.push_back(value); return *this; }
    inline TrainedModelsConfigurationPolicy& AddContainerLogs(LogsConfigurationPolicy&& value) { m_containerLogsHasBeenSet = true; m_containerLogs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container for the metrics of the trained model.</p>
     */
    inline const MetricsConfigurationPolicy& GetContainerMetrics() const{ return m_containerMetrics; }
    inline bool ContainerMetricsHasBeenSet() const { return m_containerMetricsHasBeenSet; }
    inline void SetContainerMetrics(const MetricsConfigurationPolicy& value) { m_containerMetricsHasBeenSet = true; m_containerMetrics = value; }
    inline void SetContainerMetrics(MetricsConfigurationPolicy&& value) { m_containerMetricsHasBeenSet = true; m_containerMetrics = std::move(value); }
    inline TrainedModelsConfigurationPolicy& WithContainerMetrics(const MetricsConfigurationPolicy& value) { SetContainerMetrics(value); return *this;}
    inline TrainedModelsConfigurationPolicy& WithContainerMetrics(MetricsConfigurationPolicy&& value) { SetContainerMetrics(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogsConfigurationPolicy> m_containerLogs;
    bool m_containerLogsHasBeenSet = false;

    MetricsConfigurationPolicy m_containerMetrics;
    bool m_containerMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
