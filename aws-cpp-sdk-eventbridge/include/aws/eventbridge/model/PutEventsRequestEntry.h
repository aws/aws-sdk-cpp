/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Represents an event to be submitted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PutEventsRequestEntry">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API PutEventsRequestEntry
  {
  public:
    PutEventsRequestEntry();
    PutEventsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    PutEventsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline PutEventsRequestEntry& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a>PutEvents</a> call is used.</p>
     */
    inline PutEventsRequestEntry& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the event.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline PutEventsRequestEntry& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline PutEventsRequestEntry& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline PutEventsRequestEntry& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline PutEventsRequestEntry& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline PutEventsRequestEntry& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline PutEventsRequestEntry& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline PutEventsRequestEntry& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>AWS resources, identified by Amazon Resource Name (ARN), which the event
     * primarily concerns. Any number, including zero, may be present.</p>
     */
    inline PutEventsRequestEntry& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline PutEventsRequestEntry& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline PutEventsRequestEntry& WithDetailType(Aws::String&& value) { SetDetailType(std::move(value)); return *this;}

    /**
     * <p>Free-form string used to decide what fields to expect in the event
     * detail.</p>
     */
    inline PutEventsRequestEntry& WithDetailType(const char* value) { SetDetailType(value); return *this;}


    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline PutEventsRequestEntry& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline PutEventsRequestEntry& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>A valid JSON string. There is no other schema imposed. The JSON string may
     * contain fields and nested subobjects.</p>
     */
    inline PutEventsRequestEntry& WithDetail(const char* value) { SetDetail(value); return *this;}


    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutEventsRequestEntry& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutEventsRequestEntry& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the event bus to receive the event. Only the rules that
     * are associated with this event bus are used to match the event. If you omit
     * this, the default event bus is used.</p>
     */
    inline PutEventsRequestEntry& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}


    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline const Aws::String& GetTraceHeader() const{ return m_traceHeader; }

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline void SetTraceHeader(const Aws::String& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = value; }

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline void SetTraceHeader(Aws::String&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::move(value); }

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline void SetTraceHeader(const char* value) { m_traceHeaderHasBeenSet = true; m_traceHeader.assign(value); }

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline PutEventsRequestEntry& WithTraceHeader(const Aws::String& value) { SetTraceHeader(value); return *this;}

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline PutEventsRequestEntry& WithTraceHeader(Aws::String&& value) { SetTraceHeader(std::move(value)); return *this;}

    /**
     * <p>An AWS X-Ray trade header, which is an http header (X-Amzn-Trace-Id) that
     * contains the trace-id associated with the event.</p> <p>To learn more about
     * X-Ray trace headers, see <a
     * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-concepts.html#xray-concepts-tracingheader">Tracing
     * header</a> in the AWS X-Ray Developer Guide.</p>
     */
    inline PutEventsRequestEntry& WithTraceHeader(const char* value) { SetTraceHeader(value); return *this;}

  private:

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet;

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet;

    Aws::String m_detail;
    bool m_detailHasBeenSet;

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
