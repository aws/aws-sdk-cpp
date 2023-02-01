/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>

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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> The memory size configurations of a container. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/MemorySizeConfiguration">AWS
   * API Reference</a></p>
   */
  class MemorySizeConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API MemorySizeConfiguration();
    AWS_COMPUTEOPTIMIZER_API MemorySizeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API MemorySizeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The amount of memory in the container. </p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p> The amount of memory in the container. </p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p> The amount of memory in the container. </p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p> The amount of memory in the container. </p>
     */
    inline MemorySizeConfiguration& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p> The limit of memory reserve for the container. </p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }

    /**
     * <p> The limit of memory reserve for the container. </p>
     */
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }

    /**
     * <p> The limit of memory reserve for the container. </p>
     */
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }

    /**
     * <p> The limit of memory reserve for the container. </p>
     */
    inline MemorySizeConfiguration& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}

  private:

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
