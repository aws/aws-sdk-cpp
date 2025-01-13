/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorOperationState.h>
#include <aws/kafkaconnect/model/ConnectorOperationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerSetting.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafkaconnect/model/StateDescription.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafkaconnect/model/ConnectorOperationStep.h>
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
  class DescribeConnectorOperationResult
  {
  public:
    AWS_KAFKACONNECT_API DescribeConnectorOperationResult();
    AWS_KAFKACONNECT_API DescribeConnectorOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DescribeConnectorOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }
    inline DescribeConnectorOperationResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const{ return m_connectorOperationArn; }
    inline void SetConnectorOperationArn(const Aws::String& value) { m_connectorOperationArn = value; }
    inline void SetConnectorOperationArn(Aws::String&& value) { m_connectorOperationArn = std::move(value); }
    inline void SetConnectorOperationArn(const char* value) { m_connectorOperationArn.assign(value); }
    inline DescribeConnectorOperationResult& WithConnectorOperationArn(const Aws::String& value) { SetConnectorOperationArn(value); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorOperationArn(Aws::String&& value) { SetConnectorOperationArn(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorOperationArn(const char* value) { SetConnectorOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector operation.</p>
     */
    inline const ConnectorOperationState& GetConnectorOperationState() const{ return m_connectorOperationState; }
    inline void SetConnectorOperationState(const ConnectorOperationState& value) { m_connectorOperationState = value; }
    inline void SetConnectorOperationState(ConnectorOperationState&& value) { m_connectorOperationState = std::move(value); }
    inline DescribeConnectorOperationResult& WithConnectorOperationState(const ConnectorOperationState& value) { SetConnectorOperationState(value); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorOperationState(ConnectorOperationState&& value) { SetConnectorOperationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connector operation performed.</p>
     */
    inline const ConnectorOperationType& GetConnectorOperationType() const{ return m_connectorOperationType; }
    inline void SetConnectorOperationType(const ConnectorOperationType& value) { m_connectorOperationType = value; }
    inline void SetConnectorOperationType(ConnectorOperationType&& value) { m_connectorOperationType = std::move(value); }
    inline DescribeConnectorOperationResult& WithConnectorOperationType(const ConnectorOperationType& value) { SetConnectorOperationType(value); return *this;}
    inline DescribeConnectorOperationResult& WithConnectorOperationType(ConnectorOperationType&& value) { SetConnectorOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of operation steps taken.</p>
     */
    inline const Aws::Vector<ConnectorOperationStep>& GetOperationSteps() const{ return m_operationSteps; }
    inline void SetOperationSteps(const Aws::Vector<ConnectorOperationStep>& value) { m_operationSteps = value; }
    inline void SetOperationSteps(Aws::Vector<ConnectorOperationStep>&& value) { m_operationSteps = std::move(value); }
    inline DescribeConnectorOperationResult& WithOperationSteps(const Aws::Vector<ConnectorOperationStep>& value) { SetOperationSteps(value); return *this;}
    inline DescribeConnectorOperationResult& WithOperationSteps(Aws::Vector<ConnectorOperationStep>&& value) { SetOperationSteps(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& AddOperationSteps(const ConnectorOperationStep& value) { m_operationSteps.push_back(value); return *this; }
    inline DescribeConnectorOperationResult& AddOperationSteps(ConnectorOperationStep&& value) { m_operationSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The origin worker setting.</p>
     */
    inline const WorkerSetting& GetOriginWorkerSetting() const{ return m_originWorkerSetting; }
    inline void SetOriginWorkerSetting(const WorkerSetting& value) { m_originWorkerSetting = value; }
    inline void SetOriginWorkerSetting(WorkerSetting&& value) { m_originWorkerSetting = std::move(value); }
    inline DescribeConnectorOperationResult& WithOriginWorkerSetting(const WorkerSetting& value) { SetOriginWorkerSetting(value); return *this;}
    inline DescribeConnectorOperationResult& WithOriginWorkerSetting(WorkerSetting&& value) { SetOriginWorkerSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin connector configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOriginConnectorConfiguration() const{ return m_originConnectorConfiguration; }
    inline void SetOriginConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_originConnectorConfiguration = value; }
    inline void SetOriginConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_originConnectorConfiguration = std::move(value); }
    inline DescribeConnectorOperationResult& WithOriginConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetOriginConnectorConfiguration(value); return *this;}
    inline DescribeConnectorOperationResult& WithOriginConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetOriginConnectorConfiguration(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(const Aws::String& key, const Aws::String& value) { m_originConnectorConfiguration.emplace(key, value); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(Aws::String&& key, const Aws::String& value) { m_originConnectorConfiguration.emplace(std::move(key), value); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(const Aws::String& key, Aws::String&& value) { m_originConnectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(Aws::String&& key, Aws::String&& value) { m_originConnectorConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(const char* key, Aws::String&& value) { m_originConnectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(Aws::String&& key, const char* value) { m_originConnectorConfiguration.emplace(std::move(key), value); return *this; }
    inline DescribeConnectorOperationResult& AddOriginConnectorConfiguration(const char* key, const char* value) { m_originConnectorConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target worker setting.</p>
     */
    inline const WorkerSetting& GetTargetWorkerSetting() const{ return m_targetWorkerSetting; }
    inline void SetTargetWorkerSetting(const WorkerSetting& value) { m_targetWorkerSetting = value; }
    inline void SetTargetWorkerSetting(WorkerSetting&& value) { m_targetWorkerSetting = std::move(value); }
    inline DescribeConnectorOperationResult& WithTargetWorkerSetting(const WorkerSetting& value) { SetTargetWorkerSetting(value); return *this;}
    inline DescribeConnectorOperationResult& WithTargetWorkerSetting(WorkerSetting&& value) { SetTargetWorkerSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target connector configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargetConnectorConfiguration() const{ return m_targetConnectorConfiguration; }
    inline void SetTargetConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_targetConnectorConfiguration = value; }
    inline void SetTargetConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_targetConnectorConfiguration = std::move(value); }
    inline DescribeConnectorOperationResult& WithTargetConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetTargetConnectorConfiguration(value); return *this;}
    inline DescribeConnectorOperationResult& WithTargetConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetTargetConnectorConfiguration(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(const Aws::String& key, const Aws::String& value) { m_targetConnectorConfiguration.emplace(key, value); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(Aws::String&& key, const Aws::String& value) { m_targetConnectorConfiguration.emplace(std::move(key), value); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(const Aws::String& key, Aws::String&& value) { m_targetConnectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(Aws::String&& key, Aws::String&& value) { m_targetConnectorConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(const char* key, Aws::String&& value) { m_targetConnectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(Aws::String&& key, const char* value) { m_targetConnectorConfiguration.emplace(std::move(key), value); return *this; }
    inline DescribeConnectorOperationResult& AddTargetConnectorConfiguration(const char* key, const char* value) { m_targetConnectorConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const StateDescription& GetErrorInfo() const{ return m_errorInfo; }
    inline void SetErrorInfo(const StateDescription& value) { m_errorInfo = value; }
    inline void SetErrorInfo(StateDescription&& value) { m_errorInfo = std::move(value); }
    inline DescribeConnectorOperationResult& WithErrorInfo(const StateDescription& value) { SetErrorInfo(value); return *this;}
    inline DescribeConnectorOperationResult& WithErrorInfo(StateDescription&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the operation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeConnectorOperationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeConnectorOperationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the operation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeConnectorOperationResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeConnectorOperationResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectorOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectorOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectorOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;

    Aws::String m_connectorOperationArn;

    ConnectorOperationState m_connectorOperationState;

    ConnectorOperationType m_connectorOperationType;

    Aws::Vector<ConnectorOperationStep> m_operationSteps;

    WorkerSetting m_originWorkerSetting;

    Aws::Map<Aws::String, Aws::String> m_originConnectorConfiguration;

    WorkerSetting m_targetWorkerSetting;

    Aws::Map<Aws::String, Aws::String> m_targetConnectorConfiguration;

    StateDescription m_errorInfo;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
