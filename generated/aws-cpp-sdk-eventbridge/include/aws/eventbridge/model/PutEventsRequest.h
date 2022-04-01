﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/PutEventsRequestEntry.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class AWS_EVENTBRIDGE_API PutEventsRequest : public EventBridgeRequest
  {
  public:
    PutEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline const Aws::Vector<PutEventsRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline void SetEntries(const Aws::Vector<PutEventsRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline void SetEntries(Aws::Vector<PutEventsRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline PutEventsRequest& WithEntries(const Aws::Vector<PutEventsRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline PutEventsRequest& WithEntries(Aws::Vector<PutEventsRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline PutEventsRequest& AddEntries(const PutEventsRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The entry that defines an event in your system. You can specify several
     * parameters for the entry such as the source and type of the event, resources
     * associated with the event, and so on.</p>
     */
    inline PutEventsRequest& AddEntries(PutEventsRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PutEventsRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
