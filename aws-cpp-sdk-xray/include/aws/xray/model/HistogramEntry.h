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
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>An entry in a histogram for a statistic. A histogram maps the range of
   * observed values on the X axis, and the prevalence of each value on the Y
   * axis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/HistogramEntry">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API HistogramEntry
  {
  public:
    HistogramEntry();
    HistogramEntry(Aws::Utils::Json::JsonView jsonValue);
    HistogramEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the entry.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the entry.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the entry.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the entry.</p>
     */
    inline HistogramEntry& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The prevalence of the entry.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The prevalence of the entry.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The prevalence of the entry.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The prevalence of the entry.</p>
     */
    inline HistogramEntry& WithCount(int value) { SetCount(value); return *this;}

  private:

    double m_value;
    bool m_valueHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
