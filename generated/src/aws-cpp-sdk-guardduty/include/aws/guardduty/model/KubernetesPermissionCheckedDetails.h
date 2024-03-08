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
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails();
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesPermissionCheckedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline const Aws::String& GetVerb() const{ return m_verb; }

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline void SetVerb(const Aws::String& value) { m_verbHasBeenSet = true; m_verb = value; }

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline void SetVerb(Aws::String&& value) { m_verbHasBeenSet = true; m_verb = std::move(value); }

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline void SetVerb(const char* value) { m_verbHasBeenSet = true; m_verb.assign(value); }

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithVerb(const Aws::String& value) { SetVerb(value); return *this;}

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithVerb(Aws::String&& value) { SetVerb(std::move(value)); return *this;}

    /**
     * <p>The verb component of the Kubernetes API call. For example, when you check
     * whether or not you have the permission to call the <code>CreatePod</code> API,
     * the verb component will be <code>Create</code>.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithVerb(const char* value) { SetVerb(value); return *this;}


    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes resource with which your Kubernetes API call will
     * interact.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace where the Kubernetes API action will take place.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>Information whether the user has the permission to call the Kubernetes
     * API.</p>
     */
    inline bool GetAllowed() const{ return m_allowed; }

    /**
     * <p>Information whether the user has the permission to call the Kubernetes
     * API.</p>
     */
    inline bool AllowedHasBeenSet() const { return m_allowedHasBeenSet; }

    /**
     * <p>Information whether the user has the permission to call the Kubernetes
     * API.</p>
     */
    inline void SetAllowed(bool value) { m_allowedHasBeenSet = true; m_allowed = value; }

    /**
     * <p>Information whether the user has the permission to call the Kubernetes
     * API.</p>
     */
    inline KubernetesPermissionCheckedDetails& WithAllowed(bool value) { SetAllowed(value); return *this;}

  private:

    Aws::String m_verb;
    bool m_verbHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    bool m_allowed;
    bool m_allowedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
