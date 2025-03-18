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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmisLastLaunched& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer number of units for the time period. For example <code>6</code>
     * (months).</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline LifecyclePolicyDetailExclusionRulesAmisLastLaunched& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the unit of time that the lifecycle policy uses to calculate elapsed
     * time since the last instance launched from the AMI. For example: days, weeks,
     * months, or years.</p>
     */
    inline LifecyclePolicyTimeUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(LifecyclePolicyTimeUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline LifecyclePolicyDetailExclusionRulesAmisLastLaunched& WithUnit(LifecyclePolicyTimeUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    int m_value{0};
    bool m_valueHasBeenSet = false;

    LifecyclePolicyTimeUnit m_unit{LifecyclePolicyTimeUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
