/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/GatewayStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class DeleteGatewayResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API DeleteGatewayResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API DeleteGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API DeleteGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    DeleteGatewayResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the gateway deletion.</p>
     */
    inline GatewayStatus GetStatus() const { return m_status; }
    inline void SetStatus(GatewayStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteGatewayResult& WithStatus(GatewayStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the current status of the gateway deletion.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    DeleteGatewayResult& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = Aws::String>
    DeleteGatewayResult& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    GatewayStatus m_status{GatewayStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
