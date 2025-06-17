/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/KubernetesResourcesTypes.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about Kubernetes workloads involved in a GuardDuty
   * finding, including pods, deployments, and other Kubernetes
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesWorkload">AWS
   * API Reference</a></p>
   */
  class KubernetesWorkload
  {
  public:
    AWS_GUARDDUTY_API KubernetesWorkload() = default;
    AWS_GUARDDUTY_API KubernetesWorkload(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesWorkload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of unique identifiers for the containers that are part of the
     * Kubernetes workload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerUids() const { return m_containerUids; }
    inline bool ContainerUidsHasBeenSet() const { return m_containerUidsHasBeenSet; }
    template<typename ContainerUidsT = Aws::Vector<Aws::String>>
    void SetContainerUids(ContainerUidsT&& value) { m_containerUidsHasBeenSet = true; m_containerUids = std::forward<ContainerUidsT>(value); }
    template<typename ContainerUidsT = Aws::Vector<Aws::String>>
    KubernetesWorkload& WithContainerUids(ContainerUidsT&& value) { SetContainerUids(std::forward<ContainerUidsT>(value)); return *this;}
    template<typename ContainerUidsT = Aws::String>
    KubernetesWorkload& AddContainerUids(ContainerUidsT&& value) { m_containerUidsHasBeenSet = true; m_containerUids.emplace_back(std::forward<ContainerUidsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes namespace in which the workload is running, providing logical
     * isolation within the cluster.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    KubernetesWorkload& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of Kubernetes resources involved in the workload.</p>
     */
    inline KubernetesResourcesTypes GetKubernetesResourcesTypes() const { return m_kubernetesResourcesTypes; }
    inline bool KubernetesResourcesTypesHasBeenSet() const { return m_kubernetesResourcesTypesHasBeenSet; }
    inline void SetKubernetesResourcesTypes(KubernetesResourcesTypes value) { m_kubernetesResourcesTypesHasBeenSet = true; m_kubernetesResourcesTypes = value; }
    inline KubernetesWorkload& WithKubernetesResourcesTypes(KubernetesResourcesTypes value) { SetKubernetesResourcesTypes(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_containerUids;
    bool m_containerUidsHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    KubernetesResourcesTypes m_kubernetesResourcesTypes{KubernetesResourcesTypes::NOT_SET};
    bool m_kubernetesResourcesTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
