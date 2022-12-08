/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class UpdateEventActionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API UpdateEventActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventAction"; }

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
    inline UpdateEventActionRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline UpdateEventActionRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline const Aws::String& GetEventActionId() const{ return m_eventActionId; }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline bool EventActionIdHasBeenSet() const { return m_eventActionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetEventActionId(const Aws::String& value) { m_eventActionIdHasBeenSet = true; m_eventActionId = value; }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetEventActionId(Aws::String&& value) { m_eventActionIdHasBeenSet = true; m_eventActionId = std::move(value); }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetEventActionId(const char* value) { m_eventActionIdHasBeenSet = true; m_eventActionId.assign(value); }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline UpdateEventActionRequest& WithEventActionId(const Aws::String& value) { SetEventActionId(value); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline UpdateEventActionRequest& WithEventActionId(Aws::String&& value) { SetEventActionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline UpdateEventActionRequest& WithEventActionId(const char* value) { SetEventActionId(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_eventActionId;
    bool m_eventActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
