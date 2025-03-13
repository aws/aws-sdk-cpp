/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/model/Action.h>
#include <aws/dataexchange/model/Event.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class CreateEventActionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API CreateEventActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventAction"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>What occurs after a certain event.</p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    CreateEventActionRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What occurs to start an action.</p>
     */
    inline const Event& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = Event>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = Event>
    CreateEventActionRequest& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Event m_event;
    bool m_eventHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
