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
  class AWS_CLOUDWATCHEVENTS_API InputTransformer
  {
  public:
    InputTransformer();
    InputTransformer(const Aws::Utils::Json::JsonValue& jsonValue);
    InputTransformer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputPathsMap() const{ return m_inputPathsMap; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline void SetInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = value; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline void SetInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = std::move(value); }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& WithInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetInputPathsMap(value); return *this;}

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& WithInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetInputPathsMap(std::move(value)); return *this;}

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path. You must use JSON dot notation, not bracket
     * notation.</p>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap.emplace(key, value); return *this; }


    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline const Aws::String& GetInputTemplate() const{ return m_inputTemplate; }

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline void SetInputTemplate(const Aws::String& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline void SetInputTemplate(Aws::String&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::move(value); }

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline void SetInputTemplate(const char* value) { m_inputTemplateHasBeenSet = true; m_inputTemplate.assign(value); }

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline InputTransformer& WithInputTemplate(const Aws::String& value) { SetInputTemplate(value); return *this;}

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline InputTransformer& WithInputTemplate(Aws::String&& value) { SetInputTemplate(std::move(value)); return *this;}

    /**
     * <p>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</p>
     */
    inline InputTransformer& WithInputTemplate(const char* value) { SetInputTemplate(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_inputPathsMap;
    bool m_inputPathsMapHasBeenSet;

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
