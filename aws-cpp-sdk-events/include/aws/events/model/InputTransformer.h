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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <zonbook> <simpara>Contains the parameters needed for you to provide custom
   * input to a target based on one or more pieces of data extracted from the
   * event.</simpara> </zonbook> <xhtml> <p>Contains the parameters needed for you to
   * provide custom input to a target based on one or more pieces of data extracted
   * from the event.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API InputTransformer
  {
  public:
    InputTransformer();
    InputTransformer(const Aws::Utils::Json::JsonValue& jsonValue);
    InputTransformer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputPathsMap() const{ return m_inputPathsMap; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline void SetInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = value; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline void SetInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap = value; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& WithInputPathsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetInputPathsMap(value); return *this;}

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& WithInputPathsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetInputPathsMap(value); return *this;}

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const Aws::String& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(const Aws::String& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, Aws::String&& value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(Aws::String&& key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Map of JSON paths to be extracted from the event. These are
     * key-value pairs, where each value is a JSON path.</simpara> </zonbook> <xhtml>
     * <p>Map of JSON paths to be extracted from the event. These are key-value pairs,
     * where each value is a JSON path.</p> </xhtml>
     */
    inline InputTransformer& AddInputPathsMap(const char* key, const char* value) { m_inputPathsMapHasBeenSet = true; m_inputPathsMap[key] = value; return *this; }

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline const Aws::String& GetInputTemplate() const{ return m_inputTemplate; }

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline void SetInputTemplate(const Aws::String& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline void SetInputTemplate(Aws::String&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline void SetInputTemplate(const char* value) { m_inputTemplateHasBeenSet = true; m_inputTemplate.assign(value); }

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline InputTransformer& WithInputTemplate(const Aws::String& value) { SetInputTemplate(value); return *this;}

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
     */
    inline InputTransformer& WithInputTemplate(Aws::String&& value) { SetInputTemplate(value); return *this;}

    /**
     * <zonbook> <simpara>Input template where you can use the values of the keys from
     * <code>InputPathsMap</code> to customize the data sent to the target.</simpara>
     * </zonbook> <xhtml> <p>Input template where you can use the values of the keys
     * from <code>InputPathsMap</code> to customize the data sent to the target.</p>
     * </xhtml>
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
