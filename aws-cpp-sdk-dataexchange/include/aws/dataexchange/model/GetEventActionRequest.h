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
  class AWS_DATAEXCHANGE_API GetEventActionRequest : public DataExchangeRequest
  {
  public:
    GetEventActionRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetEventActionRequest> Clone() const
    {
      return Aws::MakeUnique<GetEventActionRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventAction"; }

    Aws::String SerializePayload() const override;


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
    inline GetEventActionRequest& WithEventActionId(const Aws::String& value) { SetEventActionId(value); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline GetEventActionRequest& WithEventActionId(Aws::String&& value) { SetEventActionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline GetEventActionRequest& WithEventActionId(const char* value) { SetEventActionId(value); return *this;}

  private:

    Aws::String m_eventActionId;
    bool m_eventActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
