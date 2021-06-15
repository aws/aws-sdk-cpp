/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ResourceType.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The type and amount of a resource to assign to a container. The supported
   * resources include <code>GPU</code>, <code>MEMORY</code>, and
   * <code>VCPU</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ResourceRequirement">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ResourceRequirement
  {
  public:
    ResourceRequirement();
    ResourceRequirement(Aws::Utils::Json::JsonView jsonValue);
    ResourceRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline ResourceRequirement& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline ResourceRequirement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>The memory hard
     * limit (in MiB) present to the container. This parameter is supported for jobs
     * running on EC2 resources. If your container attempts to exceed the memory
     * specified, the container is terminated. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, 15360, or 16384</dt> <dd> <p> <code>VCPU</code> = 2
     * or 4</p> </dd> <dt>value = 17408, 18432, 19456, 20480, 21504, 22528, 23552,
     * 24576, 25600, 26624, 27648, 28672, 29696, or 30720</dt> <dd> <p>
     * <code>VCPU</code> = 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The
     * number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For EC2 resources, you must specify at least
     * one vCPU. This is required but can be specified in several places; it must be
     * specified for each node at least once.</p> <p>For jobs running on Fargate
     * resources, then <code>value</code> must match one of the supported values and
     * the <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value
     * = 0.5</dt> <dd> <p> <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd>
     * <dt>value = 1</dt> <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144,
     * 7168, or 8192</p> </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096,
     * 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or
     * 16384</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216,
     * 10240, 11264, 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480,
     * 21504, 22528, 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p>
     * </dd> </dl> </dd> </dl>
     */
    inline ResourceRequirement& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ResourceRequirement& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ResourceRequirement& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ResourceType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
