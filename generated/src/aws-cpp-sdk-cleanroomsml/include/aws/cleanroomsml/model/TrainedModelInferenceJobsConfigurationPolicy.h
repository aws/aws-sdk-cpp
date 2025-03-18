/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceMaxOutputSize.h>
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
   * <p>Provides configuration information for the trained model inference
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelInferenceJobsConfigurationPolicy">AWS
   * API Reference</a></p>
   */
  class TrainedModelInferenceJobsConfigurationPolicy
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy() = default;
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logs container for the trained model inference job.</p>
     */
    inline const Aws::Vector<LogsConfigurationPolicy>& GetContainerLogs() const { return m_containerLogs; }
    inline bool ContainerLogsHasBeenSet() const { return m_containerLogsHasBeenSet; }
    template<typename ContainerLogsT = Aws::Vector<LogsConfigurationPolicy>>
    void SetContainerLogs(ContainerLogsT&& value) { m_containerLogsHasBeenSet = true; m_containerLogs = std::forward<ContainerLogsT>(value); }
    template<typename ContainerLogsT = Aws::Vector<LogsConfigurationPolicy>>
    TrainedModelInferenceJobsConfigurationPolicy& WithContainerLogs(ContainerLogsT&& value) { SetContainerLogs(std::forward<ContainerLogsT>(value)); return *this;}
    template<typename ContainerLogsT = LogsConfigurationPolicy>
    TrainedModelInferenceJobsConfigurationPolicy& AddContainerLogs(ContainerLogsT&& value) { m_containerLogsHasBeenSet = true; m_containerLogs.emplace_back(std::forward<ContainerLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum allowed size of the output of the trained model inference
     * job.</p>
     */
    inline const TrainedModelInferenceMaxOutputSize& GetMaxOutputSize() const { return m_maxOutputSize; }
    inline bool MaxOutputSizeHasBeenSet() const { return m_maxOutputSizeHasBeenSet; }
    template<typename MaxOutputSizeT = TrainedModelInferenceMaxOutputSize>
    void SetMaxOutputSize(MaxOutputSizeT&& value) { m_maxOutputSizeHasBeenSet = true; m_maxOutputSize = std::forward<MaxOutputSizeT>(value); }
    template<typename MaxOutputSizeT = TrainedModelInferenceMaxOutputSize>
    TrainedModelInferenceJobsConfigurationPolicy& WithMaxOutputSize(MaxOutputSizeT&& value) { SetMaxOutputSize(std::forward<MaxOutputSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogsConfigurationPolicy> m_containerLogs;
    bool m_containerLogsHasBeenSet = false;

    TrainedModelInferenceMaxOutputSize m_maxOutputSize;
    bool m_maxOutputSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
