/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EventBridgeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetCaseEventConfigurationResult
  {
  public:
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult() = default;
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridge() const { return m_eventBridge; }
    template<typename EventBridgeT = EventBridgeConfiguration>
    void SetEventBridge(EventBridgeT&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::forward<EventBridgeT>(value); }
    template<typename EventBridgeT = EventBridgeConfiguration>
    GetCaseEventConfigurationResult& WithEventBridge(EventBridgeT&& value) { SetEventBridge(std::forward<EventBridgeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCaseEventConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventBridgeConfiguration m_eventBridge;
    bool m_eventBridgeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
