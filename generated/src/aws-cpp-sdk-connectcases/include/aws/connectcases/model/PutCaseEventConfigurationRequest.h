/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/EventBridgeConfiguration.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class PutCaseEventConfigurationRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API PutCaseEventConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCaseEventConfiguration"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    PutCaseEventConfigurationRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridge() const { return m_eventBridge; }
    inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }
    template<typename EventBridgeT = EventBridgeConfiguration>
    void SetEventBridge(EventBridgeT&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::forward<EventBridgeT>(value); }
    template<typename EventBridgeT = EventBridgeConfiguration>
    PutCaseEventConfigurationRequest& WithEventBridge(EventBridgeT&& value) { SetEventBridge(std::forward<EventBridgeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EventBridgeConfiguration m_eventBridge;
    bool m_eventBridgeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
