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
   * <p>The range for the GPU fleet acceleration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AcceleratorCountRange">AWS
   * API Reference</a></p>
   */
  class AcceleratorCountRange
  {
  public:
    AWS_DEADLINE_API AcceleratorCountRange();
    AWS_DEADLINE_API AcceleratorCountRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AcceleratorCountRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum GPU for the accelerator.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The maximum GPU for the accelerator.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum GPU for the accelerator.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum GPU for the accelerator.</p>
     */
    inline AcceleratorCountRange& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p>The minimum GPU for the accelerator.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The minimum GPU for the accelerator.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum GPU for the accelerator.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum GPU for the accelerator.</p>
     */
    inline AcceleratorCountRange& WithMin(int value) { SetMin(value); return *this;}

  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
