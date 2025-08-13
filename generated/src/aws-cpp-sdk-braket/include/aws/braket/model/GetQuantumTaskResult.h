/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QuantumTaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/braket/model/QuantumTaskQueueInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/ActionMetadata.h>
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
  class GetQuantumTaskResult
  {
  public:
    AWS_BRAKET_API GetQuantumTaskResult() = default;
    AWS_BRAKET_API GetQuantumTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API GetQuantumTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the quantum task.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const { return m_quantumTaskArn; }
    template<typename QuantumTaskArnT = Aws::String>
    void SetQuantumTaskArn(QuantumTaskArnT&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::forward<QuantumTaskArnT>(value); }
    template<typename QuantumTaskArnT = Aws::String>
    GetQuantumTaskResult& WithQuantumTaskArn(QuantumTaskArnT&& value) { SetQuantumTaskArn(std::forward<QuantumTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the quantum task.</p>
     */
    inline QuantumTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(QuantumTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQuantumTaskResult& WithStatus(QuantumTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that a quantum task failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GetQuantumTaskResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device the quantum task was run on.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    GetQuantumTaskResult& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the device on which the quantum task ran.</p>
     */
    inline const Aws::String& GetDeviceParameters() const { return m_deviceParameters; }
    template<typename DeviceParametersT = Aws::String>
    void SetDeviceParameters(DeviceParametersT&& value) { m_deviceParametersHasBeenSet = true; m_deviceParameters = std::forward<DeviceParametersT>(value); }
    template<typename DeviceParametersT = Aws::String>
    GetQuantumTaskResult& WithDeviceParameters(DeviceParametersT&& value) { SetDeviceParameters(std::forward<DeviceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shots used in the quantum task.</p>
     */
    inline long long GetShots() const { return m_shots; }
    inline void SetShots(long long value) { m_shotsHasBeenSet = true; m_shots = value; }
    inline GetQuantumTaskResult& WithShots(long long value) { SetShots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where quantum task results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const { return m_outputS3Bucket; }
    template<typename OutputS3BucketT = Aws::String>
    void SetOutputS3Bucket(OutputS3BucketT&& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = std::forward<OutputS3BucketT>(value); }
    template<typename OutputS3BucketT = Aws::String>
    GetQuantumTaskResult& WithOutputS3Bucket(OutputS3BucketT&& value) { SetOutputS3Bucket(std::forward<OutputS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder in the S3 bucket where quantum task results are stored.</p>
     */
    inline const Aws::String& GetOutputS3Directory() const { return m_outputS3Directory; }
    template<typename OutputS3DirectoryT = Aws::String>
    void SetOutputS3Directory(OutputS3DirectoryT&& value) { m_outputS3DirectoryHasBeenSet = true; m_outputS3Directory = std::forward<OutputS3DirectoryT>(value); }
    template<typename OutputS3DirectoryT = Aws::String>
    GetQuantumTaskResult& WithOutputS3Directory(OutputS3DirectoryT&& value) { SetOutputS3Directory(std::forward<OutputS3DirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the quantum task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetQuantumTaskResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the quantum task ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetQuantumTaskResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that belong to this quantum task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetQuantumTaskResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetQuantumTaskResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Braket job associated with the quantum task.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetQuantumTaskResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Queue information for the requested quantum task. Only returned if
     * <code>QueueInfo</code> is specified in the
     * <code>additionalAttributeNames"</code> field in the <code>GetQuantumTask</code>
     * API request.</p>
     */
    inline const QuantumTaskQueueInfo& GetQueueInfo() const { return m_queueInfo; }
    template<typename QueueInfoT = QuantumTaskQueueInfo>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = QuantumTaskQueueInfo>
    GetQuantumTaskResult& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the quantum task.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = Aws::Vector<Association>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<Association>>
    GetQuantumTaskResult& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = Association>
    GetQuantumTaskResult& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of successful shots for the quantum task. This is available after
     * a successfully completed quantum task.</p>
     */
    inline long long GetNumSuccessfulShots() const { return m_numSuccessfulShots; }
    inline void SetNumSuccessfulShots(long long value) { m_numSuccessfulShotsHasBeenSet = true; m_numSuccessfulShots = value; }
    inline GetQuantumTaskResult& WithNumSuccessfulShots(long long value) { SetNumSuccessfulShots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the action performed by the quantum task, including
     * information about the type of action and program counts.</p>
     */
    inline const ActionMetadata& GetActionMetadata() const { return m_actionMetadata; }
    template<typename ActionMetadataT = ActionMetadata>
    void SetActionMetadata(ActionMetadataT&& value) { m_actionMetadataHasBeenSet = true; m_actionMetadata = std::forward<ActionMetadataT>(value); }
    template<typename ActionMetadataT = ActionMetadata>
    GetQuantumTaskResult& WithActionMetadata(ActionMetadataT&& value) { SetActionMetadata(std::forward<ActionMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQuantumTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    QuantumTaskStatus m_status{QuantumTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceParameters;
    bool m_deviceParametersHasBeenSet = false;

    long long m_shots{0};
    bool m_shotsHasBeenSet = false;

    Aws::String m_outputS3Bucket;
    bool m_outputS3BucketHasBeenSet = false;

    Aws::String m_outputS3Directory;
    bool m_outputS3DirectoryHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    QuantumTaskQueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    Aws::Vector<Association> m_associations;
    bool m_associationsHasBeenSet = false;

    long long m_numSuccessfulShots{0};
    bool m_numSuccessfulShotsHasBeenSet = false;

    ActionMetadata m_actionMetadata;
    bool m_actionMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
