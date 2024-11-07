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
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy();
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelInferenceJobsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logs container for the trained model inference job.</p>
     */
    inline const Aws::Vector<LogsConfigurationPolicy>& GetContainerLogs() const{ return m_containerLogs; }
    inline bool ContainerLogsHasBeenSet() const { return m_containerLogsHasBeenSet; }
    inline void SetContainerLogs(const Aws::Vector<LogsConfigurationPolicy>& value) { m_containerLogsHasBeenSet = true; m_containerLogs = value; }
    inline void SetContainerLogs(Aws::Vector<LogsConfigurationPolicy>&& value) { m_containerLogsHasBeenSet = true; m_containerLogs = std::move(value); }
    inline TrainedModelInferenceJobsConfigurationPolicy& WithContainerLogs(const Aws::Vector<LogsConfigurationPolicy>& value) { SetContainerLogs(value); return *this;}
    inline TrainedModelInferenceJobsConfigurationPolicy& WithContainerLogs(Aws::Vector<LogsConfigurationPolicy>&& value) { SetContainerLogs(std::move(value)); return *this;}
    inline TrainedModelInferenceJobsConfigurationPolicy& AddContainerLogs(const LogsConfigurationPolicy& value) { m_containerLogsHasBeenSet = true; m_containerLogs.push_back(value); return *this; }
    inline TrainedModelInferenceJobsConfigurationPolicy& AddContainerLogs(LogsConfigurationPolicy&& value) { m_containerLogsHasBeenSet = true; m_containerLogs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum allowed size of the output of the trained model inference
     * job.</p>
     */
    inline const TrainedModelInferenceMaxOutputSize& GetMaxOutputSize() const{ return m_maxOutputSize; }
    inline bool MaxOutputSizeHasBeenSet() const { return m_maxOutputSizeHasBeenSet; }
    inline void SetMaxOutputSize(const TrainedModelInferenceMaxOutputSize& value) { m_maxOutputSizeHasBeenSet = true; m_maxOutputSize = value; }
    inline void SetMaxOutputSize(TrainedModelInferenceMaxOutputSize&& value) { m_maxOutputSizeHasBeenSet = true; m_maxOutputSize = std::move(value); }
    inline TrainedModelInferenceJobsConfigurationPolicy& WithMaxOutputSize(const TrainedModelInferenceMaxOutputSize& value) { SetMaxOutputSize(value); return *this;}
    inline TrainedModelInferenceJobsConfigurationPolicy& WithMaxOutputSize(TrainedModelInferenceMaxOutputSize&& value) { SetMaxOutputSize(std::move(value)); return *this;}
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
