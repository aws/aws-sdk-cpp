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
  class UpdateConnectorResult
  {
  public:
    AWS_KAFKACONNECT_API UpdateConnectorResult();
    AWS_KAFKACONNECT_API UpdateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API UpdateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }
    inline UpdateConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline UpdateConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }
    inline void SetConnectorState(const ConnectorState& value) { m_connectorState = value; }
    inline void SetConnectorState(ConnectorState&& value) { m_connectorState = std::move(value); }
    inline UpdateConnectorResult& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}
    inline UpdateConnectorResult& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const{ return m_connectorOperationArn; }
    inline void SetConnectorOperationArn(const Aws::String& value) { m_connectorOperationArn = value; }
    inline void SetConnectorOperationArn(Aws::String&& value) { m_connectorOperationArn = std::move(value); }
    inline void SetConnectorOperationArn(const char* value) { m_connectorOperationArn.assign(value); }
    inline UpdateConnectorResult& WithConnectorOperationArn(const Aws::String& value) { SetConnectorOperationArn(value); return *this;}
    inline UpdateConnectorResult& WithConnectorOperationArn(Aws::String&& value) { SetConnectorOperationArn(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithConnectorOperationArn(const char* value) { SetConnectorOperationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;

    ConnectorState m_connectorState;

    Aws::String m_connectorOperationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
