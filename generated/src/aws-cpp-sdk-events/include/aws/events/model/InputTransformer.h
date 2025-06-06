﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains the parameters needed for you to provide custom input to a target
   * based on one or more pieces of data extracted from the event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/InputTransformer">AWS
   * API Reference</a></p>
   */
  class InputTransformer
  {
  public:
    AWS_CLOUDWATCHEVENTS_API InputTransformer() = default;
    AWS_CLOUDWATCHEVENTS_API InputTransformer(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API InputTransformer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Map of JSON paths to be extracted from the event. You can then insert these
     * in the template in <code>InputTemplate</code> to produce the output you want to
     * be sent to the target.</p> <p> <code>InputPathsMap</code> is an array key-value
     * pairs, where each value is a valid JSON path. You can have as many as 100
     * key-value pairs. You must use JSON dot notation, not bracket notation.</p>
     * <p>The keys cannot start with "Amazon Web Services." </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputPathsMap() const { return m_inputPathsMap; }
    inline bool InputPathsMapHasBeenSet() const { return m_inputPathsMapHasBeenSet; }
    template<typename InputPathsMapT = Aws::Map<Aws::String, Aws::String>>
    void SetInputPathsMap(InputPathsMapT&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = std::forward<InputPathsMapT>(value); }
    template<typename InputPathsMapT = Aws::Map<Aws::String, Aws::String>>
    InputTransformer& WithInputPathsMap(InputPathsMapT&& value) { SetInputPathsMap(std::forward<InputPathsMapT>(value)); return *this;}
    template<typename InputPathsMapKeyT = Aws::String, typename InputPathsMapValueT = Aws::String>
    InputTransformer& AddInputPathsMap(InputPathsMapKeyT&& key, InputPathsMapValueT&& value) {
      m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::forward<InputPathsMapKeyT>(key), std::forward<InputPathsMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Input template where you specify placeholders that will be filled with the
     * values of the keys from <code>InputPathsMap</code> to customize the data sent to
     * the target. Enclose each <code>InputPathsMaps</code> value in brackets:
     * &lt;<i>value</i>&gt; The InputTemplate must be valid JSON.</p> <p>If
     * <code>InputTemplate</code> is a JSON object (surrounded by curly braces), the
     * following restrictions apply:</p> <ul> <li> <p>The placeholder cannot be used as
     * an object key.</p> </li> </ul> <p>The following example shows the syntax for
     * using <code>InputPathsMap</code> and <code>InputTemplate</code>.</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state &lt;status&gt;"</code> </p> <p> <code>}</code> </p> <p>To have the
     * <code>InputTemplate</code> include quote marks within a JSON string, escape each
     * quote marks with a slash, as in the following example:</p> <p> <code>
     * "InputTransformer":</code> </p> <p> <code>{</code> </p> <p>
     * <code>"InputPathsMap": {"instance": "$.detail.instance","status":
     * "$.detail.status"},</code> </p> <p> <code>"InputTemplate": "&lt;instance&gt; is
     * in state \"&lt;status&gt;\""</code> </p> <p> <code>}</code> </p> <p>The
     * <code>InputTemplate</code> can also be valid JSON with varibles in quotes or
     * out, as in the following example:</p> <p> <code> "InputTransformer":</code> </p>
     * <p> <code>{</code> </p> <p> <code>"InputPathsMap": {"instance":
     * "$.detail.instance","status": "$.detail.status"},</code> </p> <p>
     * <code>"InputTemplate": '{"myInstance": &lt;instance&gt;,"myStatus":
     * "&lt;instance&gt; is in state \"&lt;status&gt;\""}'</code> </p> <p>
     * <code>}</code> </p>
     */
    inline const Aws::String& GetInputTemplate() const { return m_inputTemplate; }
    inline bool InputTemplateHasBeenSet() const { return m_inputTemplateHasBeenSet; }
    template<typename InputTemplateT = Aws::String>
    void SetInputTemplate(InputTemplateT&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::forward<InputTemplateT>(value); }
    template<typename InputTemplateT = Aws::String>
    InputTransformer& WithInputTemplate(InputTemplateT&& value) { SetInputTemplate(std::forward<InputTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_inputPathsMap;
    bool m_inputPathsMapHasBeenSet = false;

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
