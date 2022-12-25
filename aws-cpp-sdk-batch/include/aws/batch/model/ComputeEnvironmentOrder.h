/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The order that compute environments are tried in for job placement within a
   * queue. Compute environments are tried in ascending order. For example, if two
   * compute environments are associated with a job queue, the compute environment
   * with a lower order integer value is tried for job placement first. Compute
   * environments must be in the <code>VALID</code> state before you can associate
   * them with a job queue. All of the compute environments must be either EC2
   * (<code>EC2</code> or <code>SPOT</code>) or Fargate (<code>FARGATE</code> or
   * <code>FARGATE_SPOT</code>); EC2 and Fargate compute environments can't be
   * mixed.</p>  <p>All compute environments that are associated with a job
   * queue must share the same architecture. Batch doesn't support mixing compute
   * environment architecture types in a single job queue.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeEnvironmentOrder">AWS
   * API Reference</a></p>
   */
  class ComputeEnvironmentOrder
  {
  public:
    AWS_BATCH_API ComputeEnvironmentOrder();
    AWS_BATCH_API ComputeEnvironmentOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ComputeEnvironmentOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The order of the compute environment. Compute environments are tried in
     * ascending order. For example, if two compute environments are associated with a
     * job queue, the compute environment with a lower <code>order</code> integer value
     * is tried for job placement first.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>The order of the compute environment. Compute environments are tried in
     * ascending order. For example, if two compute environments are associated with a
     * job queue, the compute environment with a lower <code>order</code> integer value
     * is tried for job placement first.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order of the compute environment. Compute environments are tried in
     * ascending order. For example, if two compute environments are associated with a
     * job queue, the compute environment with a lower <code>order</code> integer value
     * is tried for job placement first.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order of the compute environment. Compute environments are tried in
     * ascending order. For example, if two compute environments are associated with a
     * job queue, the compute environment with a lower <code>order</code> integer value
     * is tried for job placement first.</p>
     */
    inline ComputeEnvironmentOrder& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironment() const{ return m_computeEnvironment; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironment(const char* value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(const Aws::String& value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentOrder& WithComputeEnvironment(const char* value) { SetComputeEnvironment(value); return *this;}

  private:

    int m_order;
    bool m_orderHasBeenSet = false;

    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
