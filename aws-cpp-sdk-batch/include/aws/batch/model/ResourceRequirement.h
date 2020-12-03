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
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline ResourceRequirement& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
     */
    inline ResourceRequirement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. The number of GPUs reserved for all containers in a job shouldn't
     * exceed the number of available GPUs on the compute resource that the job is
     * launched on.</p>  <p>GPUs are not available for jobs running on Fargate
     * resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd> <p>For jobs running on
     * EC2 resources, the hard limit (in MiB) of memory to present to the container. If
     * your container attempts to exceed the memory specified here, the container is
     * killed. This parameter maps to <code>Memory</code> in the <a
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p>  <p>If you're trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p>  <p>For jobs
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * GiB), represented in decimal form, and must match one of the supported values
     * (0.5 and whole numbers between 1 and 30, inclusive) and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 0.5</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value = 2</dt>
     * <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value = 3</dt> <dd>
     * <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4</dt> <dd> <p>
     * <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5, 6, or 7</dt> <dd> <p>
     * <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8</dt> <dd> <p>
     * <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9, 10, 11, 12, 13, 14, 15,
     * or 16</dt> <dd> <p> <code>VCPU</code> = 2 or 4</p> </dd> <dt>value = 17, 18, 19,
     * 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or 30</dt> <dd> <p> <code>VCPU</code> =
     * 4</p> </dd> </dl> </dd> <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs
     * reserved for the container. This parameter maps to <code>CpuShares</code> in the
     * <a href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU. This is
     * required but can be specified in several places; it must be specified for each
     * node at least once.</p> <p>For jobs running on Fargate resources, then
     * <code>value</code> must match one of the supported values and the
     * <code>MEMORY</code> values must be one of the values supported for that VCPU
     * value. The supported values are 0.25, 0.5, 1, 2, and 4</p> <dl> <dt>value =
     * 0.25</dt> <dd> <p> <code>MEMORY</code> = 0.5, 1, or 2</p> </dd> <dt>value =
     * 0.5</dt> <dd> <p> <code>MEMORY</code> = 1, 2, 3, or 4</p> </dd> <dt>value =
     * 1</dt> <dd> <p> <code>MEMORY</code> = 2, 3, 4, 5, 6, 7, or 8</p> </dd> <dt>value
     * = 2</dt> <dd> <p> <code>MEMORY</code> = 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
     * 15, or 16</p> </dd> <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8, 9, 10,
     * 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, or
     * 30</p> </dd> </dl> </dd> </dl>
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
