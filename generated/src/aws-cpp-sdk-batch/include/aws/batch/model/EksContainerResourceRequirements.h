/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The type and amount of resources to assign to a container. The supported
   * resources include <code>memory</code>, <code>cpu</code>, and
   * <code>nvidia.com/gpu</code>. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
   * management for pods and containers</a> in the <i>Kubernetes
   * documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainerResourceRequirements">AWS
   * API Reference</a></p>
   */
  class EksContainerResourceRequirements
  {
  public:
    AWS_BATCH_API EksContainerResourceRequirements() = default;
    AWS_BATCH_API EksContainerResourceRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainerResourceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type and quantity of the resources to reserve for the container. The
     * values vary based on the <code>name</code> that's specified. Resources can be
     * requested using either the <code>limits</code> or the <code>requests</code>
     * objects.</p> <dl> <dt>memory</dt> <dd> <p>The memory hard limit (in MiB) for the
     * container, using whole integers, with a "Mi" suffix. If your container attempts
     * to exceed the memory specified, the container is terminated. You must specify at
     * least 4 MiB of memory for a job. <code>memory</code> can be specified in
     * <code>limits</code>, <code>requests</code>, or both. If <code>memory</code> is
     * specified in both places, then the value that's specified in <code>limits</code>
     * must be equal to the value that's specified in <code>requests</code>.</p> 
     * <p>To maximize your resource utilization, provide your jobs with as much memory
     * as possible for the specific instance type that you are using. To learn how, see
     * <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * management</a> in the <i>Batch User Guide</i>.</p>  </dd> <dt>cpu</dt>
     * <dd> <p>The number of CPUs that's reserved for the container. Values must be an
     * even multiple of <code>0.25</code>. <code>cpu</code> can be specified in
     * <code>limits</code>, <code>requests</code>, or both. If <code>cpu</code> is
     * specified in both places, then the value that's specified in <code>limits</code>
     * must be at least as large as the value that's specified in
     * <code>requests</code>.</p> </dd> <dt>nvidia.com/gpu</dt> <dd> <p>The number of
     * GPUs that's reserved for the container. Values must be a whole integer.
     * <code>memory</code> can be specified in <code>limits</code>,
     * <code>requests</code>, or both. If <code>memory</code> is specified in both
     * places, then the value that's specified in <code>limits</code> must be equal to
     * the value that's specified in <code>requests</code>.</p> </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = Aws::Map<Aws::String, Aws::String>>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = Aws::Map<Aws::String, Aws::String>>
    EksContainerResourceRequirements& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    template<typename LimitsKeyT = Aws::String, typename LimitsValueT = Aws::String>
    EksContainerResourceRequirements& AddLimits(LimitsKeyT&& key, LimitsValueT&& value) {
      m_limitsHasBeenSet = true; m_limits.emplace(std::forward<LimitsKeyT>(key), std::forward<LimitsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type and quantity of the resources to request for the container. The
     * values vary based on the <code>name</code> that's specified. Resources can be
     * requested by using either the <code>limits</code> or the <code>requests</code>
     * objects.</p> <dl> <dt>memory</dt> <dd> <p>The memory hard limit (in MiB) for the
     * container, using whole integers, with a "Mi" suffix. If your container attempts
     * to exceed the memory specified, the container is terminated. You must specify at
     * least 4 MiB of memory for a job. <code>memory</code> can be specified in
     * <code>limits</code>, <code>requests</code>, or both. If <code>memory</code> is
     * specified in both, then the value that's specified in <code>limits</code> must
     * be equal to the value that's specified in <code>requests</code>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * management</a> in the <i>Batch User Guide</i>.</p>  </dd> <dt>cpu</dt>
     * <dd> <p>The number of CPUs that are reserved for the container. Values must be
     * an even multiple of <code>0.25</code>. <code>cpu</code> can be specified in
     * <code>limits</code>, <code>requests</code>, or both. If <code>cpu</code> is
     * specified in both, then the value that's specified in <code>limits</code> must
     * be at least as large as the value that's specified in <code>requests</code>.</p>
     * </dd> <dt>nvidia.com/gpu</dt> <dd> <p>The number of GPUs that are reserved for
     * the container. Values must be a whole integer. <code>nvidia.com/gpu</code> can
     * be specified in <code>limits</code>, <code>requests</code>, or both. If
     * <code>nvidia.com/gpu</code> is specified in both, then the value that's
     * specified in <code>limits</code> must be equal to the value that's specified in
     * <code>requests</code>.</p> </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequests() const { return m_requests; }
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
    template<typename RequestsT = Aws::Map<Aws::String, Aws::String>>
    void SetRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests = std::forward<RequestsT>(value); }
    template<typename RequestsT = Aws::Map<Aws::String, Aws::String>>
    EksContainerResourceRequirements& WithRequests(RequestsT&& value) { SetRequests(std::forward<RequestsT>(value)); return *this;}
    template<typename RequestsKeyT = Aws::String, typename RequestsValueT = Aws::String>
    EksContainerResourceRequirements& AddRequests(RequestsKeyT&& key, RequestsValueT&& value) {
      m_requestsHasBeenSet = true; m_requests.emplace(std::forward<RequestsKeyT>(key), std::forward<RequestsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_limits;
    bool m_limitsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
