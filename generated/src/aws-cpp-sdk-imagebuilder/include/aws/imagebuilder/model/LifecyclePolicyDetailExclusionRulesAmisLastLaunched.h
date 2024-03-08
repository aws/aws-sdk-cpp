/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicyTimeUnit.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Defines criteria to exclude AMIs from lifecycle actions based on the last
   * time they were used to launch an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailExclusionRulesAmisLastLaunched">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailExclusionRulesAmisLastLaunched
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The integer number of units for the time period. For example <code>6</code>
     * (months).</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The integer number of units for the time period. For example <code>6</code>
     * (months).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The integer number of units for the time period. For example <code>6</code>
     * (months).</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The integer number of units for the time period. For example <code>6</code>
     * (months).</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmisLastLaunched& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline const LifecyclePolicyTimeUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline void SetUnit(const LifecyclePolicyTimeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline void SetUnit(LifecyclePolicyTimeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmisLastLaunched& WithUnit(const LifecyclePolicyTimeUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmisLastLaunched& WithUnit(LifecyclePolicyTimeUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;

    LifecyclePolicyTimeUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
