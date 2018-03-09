﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

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
   * <p>Represents an event to be submitted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEventsRequestEntry">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API PutEventsRequestEntry
  {
  public:
    PutEventsRequestEntry();
    PutEventsRequestEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    PutEventsRequestEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p>
     */
    inline PutEventsRequestEntry& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>The timestamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no timestamp
     * is provided, the timestamp of the <a>PutEvents</a> call is used.</p>
     */
    inline PutEventsRequestEntry& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

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
