/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about an action (operation) called by a node in an
   * Amazon Bedrock flow. The service generates action events for calls made by
   * prompt nodes, agent nodes, and Amazon Web Services Lambda nodes. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeActionEvent">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeActionEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeActionEvent() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeActionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeActionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node that called the operation.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    FlowTraceNodeActionEvent& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the operation was called.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    FlowTraceNodeActionEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the request that the node made to the operation.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    FlowTraceNodeActionEvent& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that the node called.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    FlowTraceNodeActionEvent& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operation that the node called.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    FlowTraceNodeActionEvent& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request payload sent to the downstream service.</p>
     */
    inline Aws::Utils::DocumentView GetOperationRequest() const { return m_operationRequest; }
    inline bool OperationRequestHasBeenSet() const { return m_operationRequestHasBeenSet; }
    template<typename OperationRequestT = Aws::Utils::Document>
    void SetOperationRequest(OperationRequestT&& value) { m_operationRequestHasBeenSet = true; m_operationRequest = std::forward<OperationRequestT>(value); }
    template<typename OperationRequestT = Aws::Utils::Document>
    FlowTraceNodeActionEvent& WithOperationRequest(OperationRequestT&& value) { SetOperationRequest(std::forward<OperationRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response payload received from the downstream service.</p>
     */
    inline Aws::Utils::DocumentView GetOperationResponse() const { return m_operationResponse; }
    inline bool OperationResponseHasBeenSet() const { return m_operationResponseHasBeenSet; }
    template<typename OperationResponseT = Aws::Utils::Document>
    void SetOperationResponse(OperationResponseT&& value) { m_operationResponseHasBeenSet = true; m_operationResponse = std::forward<OperationResponseT>(value); }
    template<typename OperationResponseT = Aws::Utils::Document>
    FlowTraceNodeActionEvent& WithOperationResponse(OperationResponseT&& value) { SetOperationResponse(std::forward<OperationResponseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Utils::Document m_operationRequest;
    bool m_operationRequestHasBeenSet = false;

    Aws::Utils::Document m_operationResponse;
    bool m_operationResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
