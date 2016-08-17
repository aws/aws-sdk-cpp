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
#include <aws/inspector/Inspector_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>AssessmentsFilter</a> data type.</p>
   */
  class AWS_INSPECTOR_API DurationRange
  {
  public:
    DurationRange();
    DurationRange(const Aws::Utils::Json::JsonValue& jsonValue);
    DurationRange& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline int GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline void SetMinimum(int value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline DurationRange& WithMinimum(int value) { SetMinimum(value); return *this;}

    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline DurationRange& WithMaximum(int value) { SetMaximum(value); return *this;}

  private:
    int m_minimum;
    bool m_minimumHasBeenSet;
    int m_maximum;
    bool m_maximumHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
