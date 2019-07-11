/*
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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the parameters needed for you to provide custom input to a target
   * based on one or more pieces of data extracted from the event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/InputTransformer">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API InputTransformer
  {
  public:
    InputTransformer();
    InputTransformer(Aws::Utils::Json::JsonView jsonValue);
    InputTransformer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputPathsMap() const{ return m_inputPathsMap; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline bool InputPathsMapHasBeenSet() const { return m_inputPathsMapHasBeenSet; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline void SetInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = value; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline void SetInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = std::move(value); }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& WithInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetInputPathsMap(value); return *this;}

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& WithInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetInputPathsMap(std::move(value)); return *this;}

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output to be sent
     * to the target.</p> <p> <code>InputPathsMap</code> is an array key-value pairs,
     * where each value is a valid JSON path. You can have as many as 10 key-value
     * pairs. You must use JSON dot notation, not bracket notation.</p> <p>The keys
     * can't start with <code>"AWS"</code>.</p>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, value); return *this; }


    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline const Aws::String& GetInputTemplate() const{ return m_inputTemplate; }

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline bool InputTemplateHasBeenSet() const { return m_inputTemplateHasBeenSet; }

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline void SetInputTemplate(const Aws::String& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline void SetInputTemplate(Aws::String&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::move(value); }

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline void SetInputTemplate(const char* value) { m_inputTemplateHasBeenSet = true; m_inputTemplate.assign(value); }

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline InputTransformer& WithInputTemplate(const Aws::String& value) { SetInputTemplate(value); return *this;}

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline InputTransformer& WithInputTemplate(Aws::String&& value) { SetInputTemplate(std::move(value)); return *this;}

    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt;. The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder can't be used as
     * an object key</p> </li> <li> <p>Object values can't include quote marks</p>
     * </li> </ul> <p>The following example shows the syntax for using
     * <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p>
     */
    inline InputTransformer& WithInputTemplate(const char* value) { SetInputTemplate(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_inputPathsMap;
    bool m_inputPathsMapHasBeenSet;

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
