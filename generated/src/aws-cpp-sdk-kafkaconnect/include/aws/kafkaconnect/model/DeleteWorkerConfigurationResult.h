/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
  class DeleteWorkerConfigurationResult
  {
  public:
    AWS_KAFKACONNECT_API DeleteWorkerConfigurationResult();
    AWS_KAFKACONNECT_API DeleteWorkerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DeleteWorkerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const{ return m_workerConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline void SetWorkerConfigurationArn(const Aws::String& value) { m_workerConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline void SetWorkerConfigurationArn(Aws::String&& value) { m_workerConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline void SetWorkerConfigurationArn(const char* value) { m_workerConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline DeleteWorkerConfigurationResult& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline DeleteWorkerConfigurationResult& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you requested
     * to delete.</p>
     */
    inline DeleteWorkerConfigurationResult& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}


    /**
     * <p>The state of the worker configuration.</p>
     */
    inline const WorkerConfigurationState& GetWorkerConfigurationState() const{ return m_workerConfigurationState; }

    /**
     * <p>The state of the worker configuration.</p>
     */
    inline void SetWorkerConfigurationState(const WorkerConfigurationState& value) { m_workerConfigurationState = value; }

    /**
     * <p>The state of the worker configuration.</p>
     */
    inline void SetWorkerConfigurationState(WorkerConfigurationState&& value) { m_workerConfigurationState = std::move(value); }

    /**
     * <p>The state of the worker configuration.</p>
     */
    inline DeleteWorkerConfigurationResult& WithWorkerConfigurationState(const WorkerConfigurationState& value) { SetWorkerConfigurationState(value); return *this;}

    /**
     * <p>The state of the worker configuration.</p>
     */
    inline DeleteWorkerConfigurationResult& WithWorkerConfigurationState(WorkerConfigurationState&& value) { SetWorkerConfigurationState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteWorkerConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteWorkerConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteWorkerConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_workerConfigurationArn;

    WorkerConfigurationState m_workerConfigurationState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
