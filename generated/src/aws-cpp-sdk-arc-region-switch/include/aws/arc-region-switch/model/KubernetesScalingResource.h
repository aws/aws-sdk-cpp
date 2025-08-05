/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Defines a Kubernetes resource to scale in an Amazon EKS
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/KubernetesScalingResource">AWS
   * API Reference</a></p>
   */
  class KubernetesScalingResource
  {
  public:
    AWS_ARCREGIONSWITCH_API KubernetesScalingResource() = default;
    AWS_ARCREGIONSWITCH_API KubernetesScalingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API KubernetesScalingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace for the Kubernetes resource.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    KubernetesScalingResource& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the Kubernetes resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KubernetesScalingResource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hpaname for the Kubernetes resource.</p>
     */
    inline const Aws::String& GetHpaName() const { return m_hpaName; }
    inline bool HpaNameHasBeenSet() const { return m_hpaNameHasBeenSet; }
    template<typename HpaNameT = Aws::String>
    void SetHpaName(HpaNameT&& value) { m_hpaNameHasBeenSet = true; m_hpaName = std::forward<HpaNameT>(value); }
    template<typename HpaNameT = Aws::String>
    KubernetesScalingResource& WithHpaName(HpaNameT&& value) { SetHpaName(std::forward<HpaNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_hpaName;
    bool m_hpaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
