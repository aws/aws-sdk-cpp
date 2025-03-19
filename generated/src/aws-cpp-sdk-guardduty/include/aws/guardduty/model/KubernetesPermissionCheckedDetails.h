/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the Kubernetes API for which you check if you have
   * permission to call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesPermissionCheckedDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesPermissionCheckedDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails() = default;
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline const Aws::String& GetVerb() const { return m_verb; }
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }
    template<typename VerbT = Aws::String>
    void SetVerb(VerbT&& value) { m_verbHasBeenSet = true; m_verb = std::forward<VerbT>(value); }
    template<typename VerbT = Aws::String>
    KubernetesPermissionCheckedDetails& WithVerb(VerbT&& value) { SetVerb(std::forward<VerbT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    KubernetesPermissionCheckedDetails& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    KubernetesPermissionCheckedDetails& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information whether the user has the permission to call the Kubernetes
     * API.</p>
     */
    inline bool GetAllowed() const { return m_allowed; }
    inline bool AllowedHasBeenSet() const { return m_allowedHasBeenSet; }
    inline void SetAllowed(bool value) { m_allowedHasBeenSet = true; m_allowed = value; }
    inline KubernetesPermissionCheckedDetails& WithAllowed(bool value) { SetAllowed(value); return *this;}
    ///@}
  private:

    Aws::String m_verb;
    bool m_verbHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    bool m_allowed{false};
    bool m_allowedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
