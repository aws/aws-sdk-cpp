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
    AWS_DATAEXCHANGE_API CreateEventActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventAction"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    /**
     * <p>What occurs after a certain event.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline CreateEventActionRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline CreateEventActionRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>What occurs to start an action.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline void SetEvent(const Event& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline void SetEvent(Event&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline CreateEventActionRequest& WithEvent(const Event& value) { SetEvent(value); return *this;}

    /**
     * <p>What occurs to start an action.</p>
     */
    inline CreateEventActionRequest& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Event m_event;
    bool m_eventHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
