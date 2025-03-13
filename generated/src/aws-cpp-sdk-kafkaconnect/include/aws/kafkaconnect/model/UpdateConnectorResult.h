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
    AWS_KAFKACONNECT_API UpdateConnectorResult() = default;
    AWS_KAFKACONNECT_API UpdateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API UpdateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    UpdateConnectorResult& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline ConnectorState GetConnectorState() const { return m_connectorState; }
    inline void SetConnectorState(ConnectorState value) { m_connectorStateHasBeenSet = true; m_connectorState = value; }
    inline UpdateConnectorResult& WithConnectorState(ConnectorState value) { SetConnectorState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const { return m_connectorOperationArn; }
    template<typename ConnectorOperationArnT = Aws::String>
    void SetConnectorOperationArn(ConnectorOperationArnT&& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = std::forward<ConnectorOperationArnT>(value); }
    template<typename ConnectorOperationArnT = Aws::String>
    UpdateConnectorResult& WithConnectorOperationArn(ConnectorOperationArnT&& value) { SetConnectorOperationArn(std::forward<ConnectorOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    ConnectorState m_connectorState{ConnectorState::NOT_SET};
    bool m_connectorStateHasBeenSet = false;

    Aws::String m_connectorOperationArn;
    bool m_connectorOperationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
