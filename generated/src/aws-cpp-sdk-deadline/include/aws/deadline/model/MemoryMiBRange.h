﻿/**
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
   * <p>The range of memory in MiB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/MemoryMiBRange">AWS
   * API Reference</a></p>
   */
  class MemoryMiBRange
  {
  public:
    AWS_DEADLINE_API MemoryMiBRange();
    AWS_DEADLINE_API MemoryMiBRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API MemoryMiBRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum amount of memory (in MiB).</p>
     */
    inline int GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline MemoryMiBRange& WithMax(int value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of memory (in MiB).</p>
     */
    inline int GetMin() const{ return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline MemoryMiBRange& WithMin(int value) { SetMin(value); return *this;}
    ///@}
  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
