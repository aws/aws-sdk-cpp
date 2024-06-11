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
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult();
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API CreateWorkerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateWorkerConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateWorkerConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest revision of the worker configuration.</p>
     */
    inline const WorkerConfigurationRevisionSummary& GetLatestRevision() const{ return m_latestRevision; }
    inline void SetLatestRevision(const WorkerConfigurationRevisionSummary& value) { m_latestRevision = value; }
    inline void SetLatestRevision(WorkerConfigurationRevisionSummary&& value) { m_latestRevision = std::move(value); }
    inline CreateWorkerConfigurationResult& WithLatestRevision(const WorkerConfigurationRevisionSummary& value) { SetLatestRevision(value); return *this;}
    inline CreateWorkerConfigurationResult& WithLatestRevision(WorkerConfigurationRevisionSummary&& value) { SetLatestRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateWorkerConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkerConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkerConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the worker
     * configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const{ return m_workerConfigurationArn; }
    inline void SetWorkerConfigurationArn(const Aws::String& value) { m_workerConfigurationArn = value; }
    inline void SetWorkerConfigurationArn(Aws::String&& value) { m_workerConfigurationArn = std::move(value); }
    inline void SetWorkerConfigurationArn(const char* value) { m_workerConfigurationArn.assign(value); }
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the worker configuration.</p>
     */
    inline const WorkerConfigurationState& GetWorkerConfigurationState() const{ return m_workerConfigurationState; }
    inline void SetWorkerConfigurationState(const WorkerConfigurationState& value) { m_workerConfigurationState = value; }
    inline void SetWorkerConfigurationState(WorkerConfigurationState&& value) { m_workerConfigurationState = std::move(value); }
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationState(const WorkerConfigurationState& value) { SetWorkerConfigurationState(value); return *this;}
    inline CreateWorkerConfigurationResult& WithWorkerConfigurationState(WorkerConfigurationState&& value) { SetWorkerConfigurationState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkerConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkerConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkerConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    WorkerConfigurationRevisionSummary m_latestRevision;

    Aws::String m_name;

    Aws::String m_workerConfigurationArn;

    WorkerConfigurationState m_workerConfigurationState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
