/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Scale
  {
  public:
    AWS_ECS_API Scale();
    AWS_ECS_API Scale(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Scale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_valueHasBeenSet = false;

    ScaleUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
