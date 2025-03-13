/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionSummary.h>
#include <aws/kafkaconnect/model/WorkerConfigurationState.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The summary of a worker configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class WorkerConfigurationSummary
  {
  public:
    AWS_KAFKACONNECT_API WorkerConfigurationSummary() = default;
    AWS_KAFKACONNECT_API WorkerConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    WorkerConfigurationSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a worker configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkerConfigurationSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline const WorkerConfigurationRevisionSummary& GetLatestRevision() const { return m_latestRevision; }
    inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }
    template<typename LatestRevisionT = WorkerConfigurationRevisionSummary>
    void SetLatestRevision(LatestRevisionT&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::forward<LatestRevisionT>(value); }
    template<typename LatestRevisionT = WorkerConfigurationRevisionSummary>
    WorkerConfigurationSummary& WithLatestRevision(LatestRevisionT&& value) { SetLatestRevision(std::forward<LatestRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkerConfigurationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const { return m_workerConfigurationArn; }
    inline bool WorkerConfigurationArnHasBeenSet() const { return m_workerConfigurationArnHasBeenSet; }
    template<typename WorkerConfigurationArnT = Aws::String>
    void SetWorkerConfigurationArn(WorkerConfigurationArnT&& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = std::forward<WorkerConfigurationArnT>(value); }
    template<typename WorkerConfigurationArnT = Aws::String>
    WorkerConfigurationSummary& WithWorkerConfigurationArn(WorkerConfigurationArnT&& value) { SetWorkerConfigurationArn(std::forward<WorkerConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the worker configuration.</p>
     */
    inline WorkerConfigurationState GetWorkerConfigurationState() const { return m_workerConfigurationState; }
    inline bool WorkerConfigurationStateHasBeenSet() const { return m_workerConfigurationStateHasBeenSet; }
    inline void SetWorkerConfigurationState(WorkerConfigurationState value) { m_workerConfigurationStateHasBeenSet = true; m_workerConfigurationState = value; }
    inline WorkerConfigurationSummary& WithWorkerConfigurationState(WorkerConfigurationState value) { SetWorkerConfigurationState(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkerConfigurationRevisionSummary m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;

    WorkerConfigurationState m_workerConfigurationState{WorkerConfigurationState::NOT_SET};
    bool m_workerConfigurationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
