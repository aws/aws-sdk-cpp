/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorState.h>
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
  class DeleteConnectorResult
  {
  public:
    AWS_KAFKACONNECT_API DeleteConnectorResult();
    AWS_KAFKACONNECT_API DeleteConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DeleteConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you requested to
     * delete.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }
    inline DeleteConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline DeleteConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline DeleteConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector that you requested to delete.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }
    inline void SetConnectorState(const ConnectorState& value) { m_connectorState = value; }
    inline void SetConnectorState(ConnectorState&& value) { m_connectorState = std::move(value); }
    inline DeleteConnectorResult& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}
    inline DeleteConnectorResult& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;

    ConnectorState m_connectorState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
