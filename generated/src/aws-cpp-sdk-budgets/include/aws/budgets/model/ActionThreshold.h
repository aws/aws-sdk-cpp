/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/ThresholdType.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The trigger threshold of the action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ActionThreshold">AWS
   * API Reference</a></p>
   */
  class ActionThreshold
  {
  public:
    AWS_BUDGETS_API ActionThreshold();
    AWS_BUDGETS_API ActionThreshold(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ActionThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline double GetActionThresholdValue() const{ return m_actionThresholdValue; }

    
    inline bool ActionThresholdValueHasBeenSet() const { return m_actionThresholdValueHasBeenSet; }

    
    inline void SetActionThresholdValue(double value) { m_actionThresholdValueHasBeenSet = true; m_actionThresholdValue = value; }

    
    inline ActionThreshold& WithActionThresholdValue(double value) { SetActionThresholdValue(value); return *this;}


    
    inline const ThresholdType& GetActionThresholdType() const{ return m_actionThresholdType; }

    
    inline bool ActionThresholdTypeHasBeenSet() const { return m_actionThresholdTypeHasBeenSet; }

    
    inline void SetActionThresholdType(const ThresholdType& value) { m_actionThresholdTypeHasBeenSet = true; m_actionThresholdType = value; }

    
    inline void SetActionThresholdType(ThresholdType&& value) { m_actionThresholdTypeHasBeenSet = true; m_actionThresholdType = std::move(value); }

    
    inline ActionThreshold& WithActionThresholdType(const ThresholdType& value) { SetActionThresholdType(value); return *this;}

    
    inline ActionThreshold& WithActionThresholdType(ThresholdType&& value) { SetActionThresholdType(std::move(value)); return *this;}

  private:

    double m_actionThresholdValue;
    bool m_actionThresholdValueHasBeenSet = false;

    ThresholdType m_actionThresholdType;
    bool m_actionThresholdTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
