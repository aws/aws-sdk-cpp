/**
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
  class PutPartnerEventsRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API PutPartnerEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPartnerEvents"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of events to write to the event bus.</p>
     */
    inline const Aws::Vector<PutPartnerEventsRequestEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<PutPartnerEventsRequestEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<PutPartnerEventsRequestEntry>>
    PutPartnerEventsRequest& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = PutPartnerEventsRequestEntry>
    PutPartnerEventsRequest& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PutPartnerEventsRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
