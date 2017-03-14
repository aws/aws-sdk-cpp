/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>Represents an event to be submitted.</simpara> </zonbook>
   * <xhtml> <p>Represents an event to be submitted.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API PutEventsRequestEntry
  {
  public:
    PutEventsRequestEntry();
    PutEventsRequestEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    PutEventsRequestEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The timestamp of the event, per <ulink
     * url="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</ulink>. If no
     * timestamp is provided, the timestamp of the <xref linkend="PutEvents"></xref>
     * call is used.</simpara> </zonbook> <xhtml> <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p> </xhtml>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <zonbook> <simpara>The timestamp of the event, per <ulink
     * url="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</ulink>. If no
     * timestamp is provided, the timestamp of the <xref linkend="PutEvents"></xref>
     * call is used.</simpara> </zonbook> <xhtml> <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p> </xhtml>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <zonbook> <simpara>The timestamp of the event, per <ulink
     * url="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</ulink>. If no
     * timestamp is provided, the timestamp of the <xref linkend="PutEvents"></xref>
     * call is used.</simpara> </zonbook> <xhtml> <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p> </xhtml>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <zonbook> <simpara>The timestamp of the event, per <ulink
     * url="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</ulink>. If no
     * timestamp is provided, the timestamp of the <xref linkend="PutEvents"></xref>
     * call is used.</simpara> </zonbook> <xhtml> <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <zonbook> <simpara>The timestamp of the event, per <ulink
     * url="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</ulink>. If no
     * timestamp is provided, the timestamp of the <xref linkend="PutEvents"></xref>
     * call is used.</simpara> </zonbook> <xhtml> <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithTime(Aws::Utils::DateTime&& value) { SetTime(value); return *this;}

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithSource(Aws::String&& value) { SetSource(value); return *this;}

    /**
     * <zonbook> <simpara>The source of the event.</simpara> </zonbook> <xhtml> <p>The
     * source of the event.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithSource(const char* value) { SetSource(value); return *this;}

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(value); return *this;}

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline PutEventsRequestEntry& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline PutEventsRequestEntry& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>AWS resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</simpara> </zonbook> <xhtml> <p>AWS resources, identified by Amazon
     * Resource Name (ARN), which the event primarily concerns. Any number, including
     * zero, may be present.</p> </xhtml>
     */
    inline PutEventsRequestEntry& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetailType(Aws::String&& value) { SetDetailType(value); return *this;}

    /**
     * <zonbook> <simpara>Free-form string used to decide what fields to expect in the
     * event detail.</simpara> </zonbook> <xhtml> <p>Free-form string used to decide
     * what fields to expect in the event detail.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetailType(const char* value) { SetDetailType(value); return *this;}

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetail(Aws::String&& value) { SetDetail(value); return *this;}

    /**
     * <zonbook> <simpara>In the JSON sense, an object containing fields, which may
     * also contain nested subobjects. No constraints are imposed on its
     * contents.</simpara> </zonbook> <xhtml> <p>In the JSON sense, an object
     * containing fields, which may also contain nested subobjects. No constraints are
     * imposed on its contents.</p> </xhtml>
     */
    inline PutEventsRequestEntry& WithDetail(const char* value) { SetDetail(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
