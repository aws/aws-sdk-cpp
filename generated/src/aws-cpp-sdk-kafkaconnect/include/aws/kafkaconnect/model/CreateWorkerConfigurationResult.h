/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/WorkerConfigurationState.h>
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
namespace KafkaConnect
{
namespace Model
{
  class CreateWorkerConfigurationResult
  {
  public:
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult() = default;
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateWorkerConfigurationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest revision of the worker configuration.</p>
     */
    inline const WorkerConfigurationRevisionSummary& GetLatestRevision() const { return m_latestRevision; }
    template<typename LatestRevisionT = WorkerConfigurationRevisionSummary>
    void SetLatestRevision(LatestRevisionT&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::forward<LatestRevisionT>(value); }
    template<typename LatestRevisionT = WorkerConfigurationRevisionSummary>
    CreateWorkerConfigurationResult& WithLatestRevision(LatestRevisionT&& value) { SetLatestRevision(std::forward<LatestRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkerConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the worker
     * configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const { return m_workerConfigurationArn; }
    template<typename WorkerConfigurationArnT = Aws::String>
    void SetWorkerConfigurationArn(WorkerConfigurationArnT&& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = std::forward<WorkerConfigurationArnT>(value); }
    template<typename WorkerConfigurationArnT = Aws::String>
    CreateWorkerConfigurationResult& WithWorkerConfigurationArn(WorkerConfigurationArnT&& value) { SetWorkerConfigurationArn(std::forward<WorkerConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the worker configuration.</p>
     */
    inline WorkerConfigurationState GetWorkerConfigurationState() const { return m_workerConfigurationState; }
    inline void SetWorkerConfigurationState(WorkerConfigurationState value) { m_workerConfigurationStateHasBeenSet = true; m_workerConfigurationState = value; }
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationState(WorkerConfigurationState value) { SetWorkerConfigurationState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkerConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    WorkerConfigurationRevisionSummary m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;

    WorkerConfigurationState m_workerConfigurationState{WorkerConfigurationState::NOT_SET};
    bool m_workerConfigurationStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
