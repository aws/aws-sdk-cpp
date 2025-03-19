/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EventStreamState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/DestinationSummary.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>An instance of EventStream in a list of EventStreams.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventStreamSummary">AWS
   * API Reference</a></p>
   */
  class EventStreamSummary
  {
  public:
    AWS_CUSTOMERPROFILES_API EventStreamSummary() = default;
    AWS_CUSTOMERPROFILES_API EventStreamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventStreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    EventStreamSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event stream.</p>
     */
    inline const Aws::String& GetEventStreamName() const { return m_eventStreamName; }
    inline bool EventStreamNameHasBeenSet() const { return m_eventStreamNameHasBeenSet; }
    template<typename EventStreamNameT = Aws::String>
    void SetEventStreamName(EventStreamNameT&& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = std::forward<EventStreamNameT>(value); }
    template<typename EventStreamNameT = Aws::String>
    EventStreamSummary& WithEventStreamName(EventStreamNameT&& value) { SetEventStreamName(std::forward<EventStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const { return m_eventStreamArn; }
    inline bool EventStreamArnHasBeenSet() const { return m_eventStreamArnHasBeenSet; }
    template<typename EventStreamArnT = Aws::String>
    void SetEventStreamArn(EventStreamArnT&& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = std::forward<EventStreamArnT>(value); }
    template<typename EventStreamArnT = Aws::String>
    EventStreamSummary& WithEventStreamArn(EventStreamArnT&& value) { SetEventStreamArn(std::forward<EventStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline EventStreamState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(EventStreamState value) { m_stateHasBeenSet = true; m_state = value; }
    inline EventStreamSummary& WithState(EventStreamState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedSince() const { return m_stoppedSince; }
    inline bool StoppedSinceHasBeenSet() const { return m_stoppedSinceHasBeenSet; }
    template<typename StoppedSinceT = Aws::Utils::DateTime>
    void SetStoppedSince(StoppedSinceT&& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = std::forward<StoppedSinceT>(value); }
    template<typename StoppedSinceT = Aws::Utils::DateTime>
    EventStreamSummary& WithStoppedSince(StoppedSinceT&& value) { SetStoppedSince(std::forward<StoppedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline const DestinationSummary& GetDestinationSummary() const { return m_destinationSummary; }
    inline bool DestinationSummaryHasBeenSet() const { return m_destinationSummaryHasBeenSet; }
    template<typename DestinationSummaryT = DestinationSummary>
    void SetDestinationSummary(DestinationSummaryT&& value) { m_destinationSummaryHasBeenSet = true; m_destinationSummary = std::forward<DestinationSummaryT>(value); }
    template<typename DestinationSummaryT = DestinationSummary>
    EventStreamSummary& WithDestinationSummary(DestinationSummaryT&& value) { SetDestinationSummary(std::forward<DestinationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EventStreamSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EventStreamSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eventStreamName;
    bool m_eventStreamNameHasBeenSet = false;

    Aws::String m_eventStreamArn;
    bool m_eventStreamArnHasBeenSet = false;

    EventStreamState m_state{EventStreamState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedSince{};
    bool m_stoppedSinceHasBeenSet = false;

    DestinationSummary m_destinationSummary;
    bool m_destinationSummaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
