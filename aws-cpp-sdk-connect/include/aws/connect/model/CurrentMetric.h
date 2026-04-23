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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CurrentMetricName.h>
#include <aws/connect/model/Unit.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A <code>CurrentMetric</code> object that contains the Name and Unit for the
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetric">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API CurrentMetric
  {
  public:
    CurrentMetric();
    CurrentMetric(Aws::Utils::Json::JsonView jsonValue);
    CurrentMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const CurrentMetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const CurrentMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(CurrentMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline CurrentMetric& WithName(const CurrentMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CurrentMetric& WithName(CurrentMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric.</p>
     */
    inline CurrentMetric& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline CurrentMetric& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    CurrentMetricName m_name;
    bool m_nameHasBeenSet;

    Unit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
