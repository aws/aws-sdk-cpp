/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

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
   * <p>Defines the maximum and minimum number of GPU accelerators required for a
   * worker instance..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AcceleratorCountRange">AWS
   * API Reference</a></p>
   */
  class AcceleratorCountRange
  {
  public:
    AWS_DEADLINE_API AcceleratorCountRange() = default;
    AWS_DEADLINE_API AcceleratorCountRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AcceleratorCountRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of GPU accelerators in the worker host.</p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline AcceleratorCountRange& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of GPU accelerators in the worker host.</p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline AcceleratorCountRange& WithMax(int value) { SetMax(value); return *this;}
    ///@}
  private:

    int m_min{0};
    bool m_minHasBeenSet = false;

    int m_max{0};
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
