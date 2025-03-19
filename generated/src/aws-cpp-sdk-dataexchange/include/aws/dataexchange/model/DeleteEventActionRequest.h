/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
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
  class DeleteEventActionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API DeleteEventActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEventAction"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline const Aws::String& GetEventActionId() const { return m_eventActionId; }
    inline bool EventActionIdHasBeenSet() const { return m_eventActionIdHasBeenSet; }
    template<typename EventActionIdT = Aws::String>
    void SetEventActionId(EventActionIdT&& value) { m_eventActionIdHasBeenSet = true; m_eventActionId = std::forward<EventActionIdT>(value); }
    template<typename EventActionIdT = Aws::String>
    DeleteEventActionRequest& WithEventActionId(EventActionIdT&& value) { SetEventActionId(std::forward<EventActionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventActionId;
    bool m_eventActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
