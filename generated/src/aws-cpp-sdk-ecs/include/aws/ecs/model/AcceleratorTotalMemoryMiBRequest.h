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
   * <p>The minimum and maximum total accelerator memory in mebibytes (MiB) for
   * instance type selection. This is important for GPU workloads that require
   * specific amounts of video memory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AcceleratorTotalMemoryMiBRequest">AWS
   * API Reference</a></p>
   */
  class AcceleratorTotalMemoryMiBRequest
  {
  public:
    AWS_ECS_API AcceleratorTotalMemoryMiBRequest() = default;
    AWS_ECS_API AcceleratorTotalMemoryMiBRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AcceleratorTotalMemoryMiBRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum total accelerator memory in MiB. Instance types with less
     * accelerator memory are excluded from selection.</p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline AcceleratorTotalMemoryMiBRequest& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum total accelerator memory in MiB. Instance types with more
     * accelerator memory are excluded from selection.</p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline AcceleratorTotalMemoryMiBRequest& WithMax(int value) { SetMax(value); return *this;}
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
