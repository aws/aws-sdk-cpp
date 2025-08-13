/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/JobPrimaryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/braket/model/HybridJobQueueInfo.h>
#include <aws/braket/model/InputFileConfig.h>
#include <aws/braket/model/JobEventDetails.h>
#include <aws/braket/model/Association.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Braket
{
namespace Model
{
  class GetJobResult
  {
  public:
    AWS_BRAKET_API GetJobResult() = default;
    AWS_BRAKET_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the Amazon Braket hybrid job.</p>
     */
    inline JobPrimaryStatus GetStatus() const { return m_status; }
    inline void SetStatus(JobPrimaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetJobResult& WithStatus(JobPrimaryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Braket hybrid job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output results and other
     * hybrid job details to the s3 buckets of a user.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reason why an Amazon Braket hybrid job failed, if it
     * failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GetJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Braket hybrid job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket hybrid job that
     * influence the quality of the traiing job. The values are set with a map of JSON
     * key:value pairs, where the key is the name of the hyperparameter and the value
     * is the value of th hyperparameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    GetJobResult& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    GetJobResult& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline const Aws::Vector<InputFileConfig>& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = Aws::Vector<InputFileConfig>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<InputFileConfig>>
    GetJobResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = InputFileConfig>
    GetJobResult& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the S3 location where hybrid job artifacts are stored and the
     * encryption key used to store them there.</p>
     */
    inline const JobOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = JobOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = JobOutputDataConfig>
    GetJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined criteria that specifies when to stop a running hybrid
     * job.</p>
     */
    inline const JobStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = JobStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = JobStoppingCondition>
    GetJobResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output locations for hybrid job checkpoint data.</p>
     */
    inline const JobCheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    template<typename CheckpointConfigT = JobCheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = JobCheckpointConfig>
    GetJobResult& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definition of the Amazon Braket hybrid job created. Provides information
     * about the container image used, and the Python scripts used for training.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    GetJobResult& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource instances to use while running the hybrid job on Amazon
     * Braket.</p>
     */
    inline const InstanceConfig& GetInstanceConfig() const { return m_instanceConfig; }
    template<typename InstanceConfigT = InstanceConfig>
    void SetInstanceConfig(InstanceConfigT&& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = std::forward<InstanceConfigT>(value); }
    template<typename InstanceConfigT = InstanceConfig>
    GetJobResult& WithInstanceConfig(InstanceConfigT&& value) { SetInstanceConfig(std::forward<InstanceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the Amazon Braket hybrid job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the Amazon Braket hybrid job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetJobResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the Amazon Braket hybrid job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetJobResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billable time for which the Amazon Braket hybrid job used to
     * complete.</p>
     */
    inline int GetBillableDuration() const { return m_billableDuration; }
    inline void SetBillableDuration(int value) { m_billableDurationHasBeenSet = true; m_billableDuration = value; }
    inline GetJobResult& WithBillableDuration(int value) { SetBillableDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary device used by the Amazon Braket hybrid job.</p>
     */
    inline const DeviceConfig& GetDeviceConfig() const { return m_deviceConfig; }
    template<typename DeviceConfigT = DeviceConfig>
    void SetDeviceConfig(DeviceConfigT&& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = std::forward<DeviceConfigT>(value); }
    template<typename DeviceConfigT = DeviceConfig>
    GetJobResult& WithDeviceConfig(DeviceConfigT&& value) { SetDeviceConfig(std::forward<DeviceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the time and type of events occurred related to the Amazon
     * Braket hybrid job.</p>
     */
    inline const Aws::Vector<JobEventDetails>& GetEvents() const { return m_events; }
    template<typename EventsT = Aws::Vector<JobEventDetails>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<JobEventDetails>>
    GetJobResult& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = JobEventDetails>
    GetJobResult& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with this hybrid job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Queue information for the requested hybrid job. Only returned if
     * <code>QueueInfo</code> is specified in the
     * <code>additionalAttributeNames"</code> field in the <code>GetJob</code> API
     * request.</p>
     */
    inline const HybridJobQueueInfo& GetQueueInfo() const { return m_queueInfo; }
    template<typename QueueInfoT = HybridJobQueueInfo>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = HybridJobQueueInfo>
    GetJobResult& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the hybrid job.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = Aws::Vector<Association>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<Association>>
    GetJobResult& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = Association>
    GetJobResult& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobPrimaryStatus m_status{JobPrimaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    Aws::Vector<InputFileConfig> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    JobOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    JobStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    JobCheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    InstanceConfig m_instanceConfig;
    bool m_instanceConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    int m_billableDuration{0};
    bool m_billableDurationHasBeenSet = false;

    DeviceConfig m_deviceConfig;
    bool m_deviceConfigHasBeenSet = false;

    Aws::Vector<JobEventDetails> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    HybridJobQueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    Aws::Vector<Association> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
