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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ScaleUnit.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>A floating-point percentage of the desired number of tasks to place and keep
   * running in the task set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Scale">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Scale
  {
  public:
    Scale();
    Scale(Aws::Utils::Json::JsonView jsonValue);
    Scale& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value, specified as a percent total of a service's
     * <code>desiredCount</code>, to scale the task set. Accepted values are numbers
     * between 0 and 100.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value, specified as a percent total of a service's
     * <code>desiredCount</code>, to scale the task set. Accepted values are numbers
     * between 0 and 100.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value, specified as a percent total of a service's
     * <code>desiredCount</code>, to scale the task set. Accepted values are numbers
     * between 0 and 100.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value, specified as a percent total of a service's
     * <code>desiredCount</code>, to scale the task set. Accepted values are numbers
     * between 0 and 100.</p>
     */
    inline Scale& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline const ScaleUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline void SetUnit(const ScaleUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline void SetUnit(ScaleUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline Scale& WithUnit(const ScaleUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measure for the scale value.</p>
     */
    inline Scale& WithUnit(ScaleUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    double m_value;
    bool m_valueHasBeenSet;

    ScaleUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
