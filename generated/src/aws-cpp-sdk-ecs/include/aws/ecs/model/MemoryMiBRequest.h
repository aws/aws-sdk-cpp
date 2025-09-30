/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
   * <p>The minimum and maximum amount of memory in mebibytes (MiB) for instance type
   * selection. This ensures that selected instance types have adequate memory for
   * your workloads.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/MemoryMiBRequest">AWS
   * API Reference</a></p>
   */
  class MemoryMiBRequest
  {
  public:
    AWS_ECS_API MemoryMiBRequest() = default;
    AWS_ECS_API MemoryMiBRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API MemoryMiBRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum amount of memory in MiB. Instance types with less memory than
     * this value are excluded from selection.</p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline MemoryMiBRequest& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory in MiB. Instance types with more memory than
     * this value are excluded from selection.</p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline MemoryMiBRequest& WithMax(int value) { SetMax(value); return *this;}
    ///@}
  private:

    int m_min{0};
    bool m_minHasBeenSet = false;

    int m_max{0};
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
