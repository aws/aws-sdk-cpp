﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/PutPartnerEventsRequestEntry.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class AWS_EVENTBRIDGE_API PutPartnerEventsRequest : public EventBridgeRequest
  {
  public:
    PutPartnerEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPartnerEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline const Aws::Vector<PutPartnerEventsRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline void SetEntries(const Aws::Vector<PutPartnerEventsRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline void SetEntries(Aws::Vector<PutPartnerEventsRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline PutPartnerEventsRequest& WithEntries(const Aws::Vector<PutPartnerEventsRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline PutPartnerEventsRequest& WithEntries(Aws::Vector<PutPartnerEventsRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline PutPartnerEventsRequest& AddEntries(const PutPartnerEventsRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline PutPartnerEventsRequest& AddEntries(PutPartnerEventsRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PutPartnerEventsRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
