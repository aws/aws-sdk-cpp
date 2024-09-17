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
    AWS_CUSTOMERPROFILES_API EventStreamSummary();
    AWS_CUSTOMERPROFILES_API EventStreamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventStreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline EventStreamSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline EventStreamSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline EventStreamSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event stream.</p>
     */
    inline const Aws::String& GetEventStreamName() const{ return m_eventStreamName; }
    inline bool EventStreamNameHasBeenSet() const { return m_eventStreamNameHasBeenSet; }
    inline void SetEventStreamName(const Aws::String& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = value; }
    inline void SetEventStreamName(Aws::String&& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = std::move(value); }
    inline void SetEventStreamName(const char* value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName.assign(value); }
    inline EventStreamSummary& WithEventStreamName(const Aws::String& value) { SetEventStreamName(value); return *this;}
    inline EventStreamSummary& WithEventStreamName(Aws::String&& value) { SetEventStreamName(std::move(value)); return *this;}
    inline EventStreamSummary& WithEventStreamName(const char* value) { SetEventStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const{ return m_eventStreamArn; }
    inline bool EventStreamArnHasBeenSet() const { return m_eventStreamArnHasBeenSet; }
    inline void SetEventStreamArn(const Aws::String& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = value; }
    inline void SetEventStreamArn(Aws::String&& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = std::move(value); }
    inline void SetEventStreamArn(const char* value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn.assign(value); }
    inline EventStreamSummary& WithEventStreamArn(const Aws::String& value) { SetEventStreamArn(value); return *this;}
    inline EventStreamSummary& WithEventStreamArn(Aws::String&& value) { SetEventStreamArn(std::move(value)); return *this;}
    inline EventStreamSummary& WithEventStreamArn(const char* value) { SetEventStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline const EventStreamState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EventStreamState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EventStreamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline EventStreamSummary& WithState(const EventStreamState& value) { SetState(value); return *this;}
    inline EventStreamSummary& WithState(EventStreamState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedSince() const{ return m_stoppedSince; }
    inline bool StoppedSinceHasBeenSet() const { return m_stoppedSinceHasBeenSet; }
    inline void SetStoppedSince(const Aws::Utils::DateTime& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = value; }
    inline void SetStoppedSince(Aws::Utils::DateTime&& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = std::move(value); }
    inline EventStreamSummary& WithStoppedSince(const Aws::Utils::DateTime& value) { SetStoppedSince(value); return *this;}
    inline EventStreamSummary& WithStoppedSince(Aws::Utils::DateTime&& value) { SetStoppedSince(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline const DestinationSummary& GetDestinationSummary() const{ return m_destinationSummary; }
    inline bool DestinationSummaryHasBeenSet() const { return m_destinationSummaryHasBeenSet; }
    inline void SetDestinationSummary(const DestinationSummary& value) { m_destinationSummaryHasBeenSet = true; m_destinationSummary = value; }
    inline void SetDestinationSummary(DestinationSummary&& value) { m_destinationSummaryHasBeenSet = true; m_destinationSummary = std::move(value); }
    inline EventStreamSummary& WithDestinationSummary(const DestinationSummary& value) { SetDestinationSummary(value); return *this;}
    inline EventStreamSummary& WithDestinationSummary(DestinationSummary&& value) { SetDestinationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EventStreamSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EventStreamSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EventStreamSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EventStreamSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EventStreamSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EventStreamSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EventStreamSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EventStreamSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EventStreamSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eventStreamName;
    bool m_eventStreamNameHasBeenSet = false;

    Aws::String m_eventStreamArn;
    bool m_eventStreamArnHasBeenSet = false;

    EventStreamState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedSince;
    bool m_stoppedSinceHasBeenSet = false;

    DestinationSummary m_destinationSummary;
    bool m_destinationSummaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
