﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/HybridJobQueueInfo.h>
#include <aws/braket/model/JobPrimaryStatus.h>
#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/braket/model/Association.h>
#include <aws/braket/model/JobEventDetails.h>
#include <aws/braket/model/InputFileConfig.h>
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
    AWS_BRAKET_API GetJobResult();
    AWS_BRAKET_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Definition of the Amazon Braket job created. Specifies the container image
     * the job uses, information about the Python scripts used for entry and training,
     * and the user-defined metrics used to evaluation the job.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecification = value; }
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecification = std::move(value); }
    inline GetJobResult& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}
    inline GetJobResult& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the hybrid job.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const{ return m_associations; }
    inline void SetAssociations(const Aws::Vector<Association>& value) { m_associations = value; }
    inline void SetAssociations(Aws::Vector<Association>&& value) { m_associations = std::move(value); }
    inline GetJobResult& WithAssociations(const Aws::Vector<Association>& value) { SetAssociations(value); return *this;}
    inline GetJobResult& WithAssociations(Aws::Vector<Association>&& value) { SetAssociations(std::move(value)); return *this;}
    inline GetJobResult& AddAssociations(const Association& value) { m_associations.push_back(value); return *this; }
    inline GetJobResult& AddAssociations(Association&& value) { m_associations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The billable time the Amazon Braket job used to complete.</p>
     */
    inline int GetBillableDuration() const{ return m_billableDuration; }
    inline void SetBillableDuration(int value) { m_billableDuration = value; }
    inline GetJobResult& WithBillableDuration(int value) { SetBillableDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline const JobCheckpointConfig& GetCheckpointConfig() const{ return m_checkpointConfig; }
    inline void SetCheckpointConfig(const JobCheckpointConfig& value) { m_checkpointConfig = value; }
    inline void SetCheckpointConfig(JobCheckpointConfig&& value) { m_checkpointConfig = std::move(value); }
    inline GetJobResult& WithCheckpointConfig(const JobCheckpointConfig& value) { SetCheckpointConfig(value); return *this;}
    inline GetJobResult& WithCheckpointConfig(JobCheckpointConfig&& value) { SetCheckpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Amazon Braket job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantum processing unit (QPU) or simulator used to run the Amazon Braket
     * job.</p>
     */
    inline const DeviceConfig& GetDeviceConfig() const{ return m_deviceConfig; }
    inline void SetDeviceConfig(const DeviceConfig& value) { m_deviceConfig = value; }
    inline void SetDeviceConfig(DeviceConfig&& value) { m_deviceConfig = std::move(value); }
    inline GetJobResult& WithDeviceConfig(const DeviceConfig& value) { SetDeviceConfig(value); return *this;}
    inline GetJobResult& WithDeviceConfig(DeviceConfig&& value) { SetDeviceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Amazon Braket job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetJobResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetJobResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the type and time events occurred related to the Amazon Braket
     * job.</p>
     */
    inline const Aws::Vector<JobEventDetails>& GetEvents() const{ return m_events; }
    inline void SetEvents(const Aws::Vector<JobEventDetails>& value) { m_events = value; }
    inline void SetEvents(Aws::Vector<JobEventDetails>&& value) { m_events = std::move(value); }
    inline GetJobResult& WithEvents(const Aws::Vector<JobEventDetails>& value) { SetEvents(value); return *this;}
    inline GetJobResult& WithEvents(Aws::Vector<JobEventDetails>&& value) { SetEvents(std::move(value)); return *this;}
    inline GetJobResult& AddEvents(const JobEventDetails& value) { m_events.push_back(value); return *this; }
    inline GetJobResult& AddEvents(JobEventDetails&& value) { m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the reason why an Amazon Braket job failed, if it
     * failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the traiing job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParameters = value; }
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParameters = std::move(value); }
    inline GetJobResult& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}
    inline GetJobResult& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}
    inline GetJobResult& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParameters.emplace(key, value); return *this; }
    inline GetJobResult& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline GetJobResult& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline GetJobResult& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetJobResult& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline GetJobResult& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline GetJobResult& AddHyperParameters(const char* key, const char* value) { m_hyperParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline const Aws::Vector<InputFileConfig>& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline void SetInputDataConfig(const Aws::Vector<InputFileConfig>& value) { m_inputDataConfig = value; }
    inline void SetInputDataConfig(Aws::Vector<InputFileConfig>&& value) { m_inputDataConfig = std::move(value); }
    inline GetJobResult& WithInputDataConfig(const Aws::Vector<InputFileConfig>& value) { SetInputDataConfig(value); return *this;}
    inline GetJobResult& WithInputDataConfig(Aws::Vector<InputFileConfig>&& value) { SetInputDataConfig(std::move(value)); return *this;}
    inline GetJobResult& AddInputDataConfig(const InputFileConfig& value) { m_inputDataConfig.push_back(value); return *this; }
    inline GetJobResult& AddInputDataConfig(InputFileConfig&& value) { m_inputDataConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource instances to use while running the hybrid job on Amazon
     * Braket.</p>
     */
    inline const InstanceConfig& GetInstanceConfig() const{ return m_instanceConfig; }
    inline void SetInstanceConfig(const InstanceConfig& value) { m_instanceConfig = value; }
    inline void SetInstanceConfig(InstanceConfig&& value) { m_instanceConfig = std::move(value); }
    inline GetJobResult& WithInstanceConfig(const InstanceConfig& value) { SetInstanceConfig(value); return *this;}
    inline GetJobResult& WithInstanceConfig(InstanceConfig&& value) { SetInstanceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the S3 location where job artifacts are stored and the encryption
     * key used to store them there.</p>
     */
    inline const JobOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const JobOutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(JobOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline GetJobResult& WithOutputDataConfig(const JobOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline GetJobResult& WithOutputDataConfig(JobOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Queue information for the requested job. Only returned if
     * <code>QueueInfo</code> is specified in the
     * <code>additionalAttributeNames"</code> field in the <code>GetJob</code> API
     * request.</p>
     */
    inline const HybridJobQueueInfo& GetQueueInfo() const{ return m_queueInfo; }
    inline void SetQueueInfo(const HybridJobQueueInfo& value) { m_queueInfo = value; }
    inline void SetQueueInfo(HybridJobQueueInfo&& value) { m_queueInfo = std::move(value); }
    inline GetJobResult& WithQueueInfo(const HybridJobQueueInfo& value) { SetQueueInfo(value); return *this;}
    inline GetJobResult& WithQueueInfo(HybridJobQueueInfo&& value) { SetQueueInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the s3
     * buckets of a user.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Amazon Braket job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetJobResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetJobResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Braket job.</p>
     */
    inline const JobPrimaryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const JobPrimaryStatus& value) { m_status = value; }
    inline void SetStatus(JobPrimaryStatus&& value) { m_status = std::move(value); }
    inline GetJobResult& WithStatus(const JobPrimaryStatus& value) { SetStatus(value); return *this;}
    inline GetJobResult& WithStatus(JobPrimaryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined criteria that specifies when to stop a job running.</p>
     */
    inline const JobStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline void SetStoppingCondition(const JobStoppingCondition& value) { m_stoppingCondition = value; }
    inline void SetStoppingCondition(JobStoppingCondition&& value) { m_stoppingCondition = std::move(value); }
    inline GetJobResult& WithStoppingCondition(const JobStoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline GetJobResult& WithStoppingCondition(JobStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AlgorithmSpecification m_algorithmSpecification;

    Aws::Vector<Association> m_associations;

    int m_billableDuration;

    JobCheckpointConfig m_checkpointConfig;

    Aws::Utils::DateTime m_createdAt;

    DeviceConfig m_deviceConfig;

    Aws::Utils::DateTime m_endedAt;

    Aws::Vector<JobEventDetails> m_events;

    Aws::String m_failureReason;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;

    Aws::Vector<InputFileConfig> m_inputDataConfig;

    InstanceConfig m_instanceConfig;

    Aws::String m_jobArn;

    Aws::String m_jobName;

    JobOutputDataConfig m_outputDataConfig;

    HybridJobQueueInfo m_queueInfo;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_startedAt;

    JobPrimaryStatus m_status;

    JobStoppingCondition m_stoppingCondition;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
