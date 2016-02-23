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
   * <p>This data type is used in the <a>AssessmentsFilter</a> and <a>RunsFilter</a>
   * data types.</p>
   */
  class AWS_INSPECTOR_API TimestampRange
  {
  public:
    TimestampRange();
    TimestampRange(const Aws::Utils::Json::JsonValue& jsonValue);
    TimestampRange& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value of the timestamp range.</p>
     */
    inline TimestampRange& WithMinimum(double value) { SetMinimum(value); return *this;}

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value of the timestamp range.</p>
     */
    inline TimestampRange& WithMaximum(double value) { SetMaximum(value); return *this;}

  private:
    double m_minimum;
    bool m_minimumHasBeenSet;
    double m_maximum;
    bool m_maximumHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
