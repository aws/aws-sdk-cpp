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


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline EventStreamSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline EventStreamSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline EventStreamSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the event stream.</p>
     */
    inline const Aws::String& GetEventStreamName() const{ return m_eventStreamName; }

    /**
     * <p>The name of the event stream.</p>
     */
    inline bool EventStreamNameHasBeenSet() const { return m_eventStreamNameHasBeenSet; }

    /**
     * <p>The name of the event stream.</p>
     */
    inline void SetEventStreamName(const Aws::String& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = value; }

    /**
     * <p>The name of the event stream.</p>
     */
    inline void SetEventStreamName(Aws::String&& value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName = std::move(value); }

    /**
     * <p>The name of the event stream.</p>
     */
    inline void SetEventStreamName(const char* value) { m_eventStreamNameHasBeenSet = true; m_eventStreamName.assign(value); }

    /**
     * <p>The name of the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamName(const Aws::String& value) { SetEventStreamName(value); return *this;}

    /**
     * <p>The name of the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamName(Aws::String&& value) { SetEventStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamName(const char* value) { SetEventStreamName(value); return *this;}


    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const{ return m_eventStreamArn; }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline bool EventStreamArnHasBeenSet() const { return m_eventStreamArnHasBeenSet; }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(const Aws::String& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = value; }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(Aws::String&& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = std::move(value); }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(const char* value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn.assign(value); }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamArn(const Aws::String& value) { SetEventStreamArn(value); return *this;}

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamArn(Aws::String&& value) { SetEventStreamArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline EventStreamSummary& WithEventStreamArn(const char* value) { SetEventStreamArn(value); return *this;}


    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline const EventStreamState& GetState() const{ return m_state; }

    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline void SetState(const EventStreamState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline void SetState(EventStreamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline EventStreamSummary& WithState(const EventStreamState& value) { SetState(value); return *this;}

    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline EventStreamSummary& WithState(EventStreamState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedSince() const{ return m_stoppedSince; }

    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline bool StoppedSinceHasBeenSet() const { return m_stoppedSinceHasBeenSet; }

    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline void SetStoppedSince(const Aws::Utils::DateTime& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = value; }

    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline void SetStoppedSince(Aws::Utils::DateTime&& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = std::move(value); }

    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline EventStreamSummary& WithStoppedSince(const Aws::Utils::DateTime& value) { SetStoppedSince(value); return *this;}

    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline EventStreamSummary& WithStoppedSince(Aws::Utils::DateTime&& value) { SetStoppedSince(std::move(value)); return *this;}


    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline const DestinationSummary& GetDestinationSummary() const{ return m_destinationSummary; }

    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline bool DestinationSummaryHasBeenSet() const { return m_destinationSummaryHasBeenSet; }

    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline void SetDestinationSummary(const DestinationSummary& value) { m_destinationSummaryHasBeenSet = true; m_destinationSummary = value; }

    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline void SetDestinationSummary(DestinationSummary&& value) { m_destinationSummaryHasBeenSet = true; m_destinationSummary = std::move(value); }

    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline EventStreamSummary& WithDestinationSummary(const DestinationSummary& value) { SetDestinationSummary(value); return *this;}

    /**
     * <p>Summary information about the Kinesis data stream.</p>
     */
    inline EventStreamSummary& WithDestinationSummary(DestinationSummary&& value) { SetDestinationSummary(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline EventStreamSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
