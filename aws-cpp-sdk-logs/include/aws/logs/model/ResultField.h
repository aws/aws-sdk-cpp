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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Contains one field from one log event returned by a CloudWatch Logs Insights
   * query, along with the value of that field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ResultField">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API ResultField
  {
  public:
    ResultField();
    ResultField(Aws::Utils::Json::JsonView jsonValue);
    ResultField& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log event field.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The log event field.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The log event field.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The log event field.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The log event field.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The log event field.</p>
     */
    inline ResultField& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The log event field.</p>
     */
    inline ResultField& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The log event field.</p>
     */
    inline ResultField& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The value of this field.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of this field.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of this field.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of this field.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of this field.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of this field.</p>
     */
    inline ResultField& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of this field.</p>
     */
    inline ResultField& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of this field.</p>
     */
    inline ResultField& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
