/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MetricsConfigurationPolicy.h>
#include <aws/cleanroomsml/model/TrainedModelArtifactMaxSize.h>
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
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy() = default;
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container for the logs of the trained model.</p>
     */
    inline const Aws::Vector<LogsConfigurationPolicy>& GetContainerLogs() const { return m_containerLogs; }
    inline bool ContainerLogsHasBeenSet() const { return m_containerLogsHasBeenSet; }
    template<typename ContainerLogsT = Aws::Vector<LogsConfigurationPolicy>>
    void SetContainerLogs(ContainerLogsT&& value) { m_containerLogsHasBeenSet = true; m_containerLogs = std::forward<ContainerLogsT>(value); }
    template<typename ContainerLogsT = Aws::Vector<LogsConfigurationPolicy>>
    TrainedModelsConfigurationPolicy& WithContainerLogs(ContainerLogsT&& value) { SetContainerLogs(std::forward<ContainerLogsT>(value)); return *this;}
    template<typename ContainerLogsT = LogsConfigurationPolicy>
    TrainedModelsConfigurationPolicy& AddContainerLogs(ContainerLogsT&& value) { m_containerLogsHasBeenSet = true; m_containerLogs.emplace_back(std::forward<ContainerLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container for the metrics of the trained model.</p>
     */
    inline const MetricsConfigurationPolicy& GetContainerMetrics() const { return m_containerMetrics; }
    inline bool ContainerMetricsHasBeenSet() const { return m_containerMetricsHasBeenSet; }
    template<typename ContainerMetricsT = MetricsConfigurationPolicy>
    void SetContainerMetrics(ContainerMetricsT&& value) { m_containerMetricsHasBeenSet = true; m_containerMetrics = std::forward<ContainerMetricsT>(value); }
    template<typename ContainerMetricsT = MetricsConfigurationPolicy>
    TrainedModelsConfigurationPolicy& WithContainerMetrics(ContainerMetricsT&& value) { SetContainerMetrics(std::forward<ContainerMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size limit for trained model artifacts as defined in the
     * configuration policy. This setting helps enforce consistent size limits across
     * trained models in the collaboration.</p>
     */
    inline const TrainedModelArtifactMaxSize& GetMaxArtifactSize() const { return m_maxArtifactSize; }
    inline bool MaxArtifactSizeHasBeenSet() const { return m_maxArtifactSizeHasBeenSet; }
    template<typename MaxArtifactSizeT = TrainedModelArtifactMaxSize>
    void SetMaxArtifactSize(MaxArtifactSizeT&& value) { m_maxArtifactSizeHasBeenSet = true; m_maxArtifactSize = std::forward<MaxArtifactSizeT>(value); }
    template<typename MaxArtifactSizeT = TrainedModelArtifactMaxSize>
    TrainedModelsConfigurationPolicy& WithMaxArtifactSize(MaxArtifactSizeT&& value) { SetMaxArtifactSize(std::forward<MaxArtifactSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogsConfigurationPolicy> m_containerLogs;
    bool m_containerLogsHasBeenSet = false;

    MetricsConfigurationPolicy m_containerMetrics;
    bool m_containerMetricsHasBeenSet = false;

    TrainedModelArtifactMaxSize m_maxArtifactSize;
    bool m_maxArtifactSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
