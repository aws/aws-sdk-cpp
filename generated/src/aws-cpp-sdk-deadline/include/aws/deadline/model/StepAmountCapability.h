﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details outlining the minimum and maximum capability of a
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepAmountCapability">AWS
   * API Reference</a></p>
   */
  class StepAmountCapability
  {
  public:
    AWS_DEADLINE_API StepAmountCapability();
    AWS_DEADLINE_API StepAmountCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepAmountCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum amount.</p>
     */
    inline double GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline StepAmountCapability& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount.</p>
     */
    inline double GetMin() const{ return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline StepAmountCapability& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StepAmountCapability& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StepAmountCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StepAmountCapability& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount value.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline StepAmountCapability& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
