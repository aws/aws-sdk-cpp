/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Represents an event to be submitted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEventsRequestEntry">AWS
   * API Reference</a></p>
   */
  class PutEventsRequestEntry
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PutEventsRequestEntry() = default;
    AWS_CLOUDWATCHEVENTS_API PutEventsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API PutEventsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Utils::DateTime>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Utils::DateTime>
    PutEventsRequestEntry& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    PutEventsRequestEntry& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    PutEventsRequestEntry& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    PutEventsRequestEntry& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline const Aws::String& GetDetailType() const { return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    template<typename DetailTypeT = Aws::String>
    void SetDetailType(DetailTypeT&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::forward<DetailTypeT>(value); }
    template<typename DetailTypeT = Aws::String>
    PutEventsRequestEntry& WithDetailType(DetailTypeT&& value) { SetDetailType(std::forward<DetailTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline const Aws::String& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = Aws::String>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = Aws::String>
    PutEventsRequestEntry& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const { return m_eventBusName; }
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }
    template<typename EventBusNameT = Aws::String>
    void SetEventBusName(EventBusNameT&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::forward<EventBusNameT>(value); }
    template<typename EventBusNameT = Aws::String>
    PutEventsRequestEntry& WithEventBusName(EventBusNameT&& value) { SetEventBusName(std::forward<EventBusNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the X-Ray Developer Guide.</p>
     */
    inline const Aws::String& GetTraceHeader() const { return m_traceHeader; }
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }
    template<typename TraceHeaderT = Aws::String>
    void SetTraceHeader(TraceHeaderT&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::forward<TraceHeaderT>(value); }
    template<typename TraceHeaderT = Aws::String>
    PutEventsRequestEntry& WithTraceHeader(TraceHeaderT&& value) { SetTraceHeader(std::forward<TraceHeaderT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_time{};
    bool m_timeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
