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
   * <p>Describes and uniquely identifies Kubernetes resources. For example, the
   * compute environment that a pod runs in or the <code>jobID</code> for a job
   * running in the pod. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">
   * Understanding Kubernetes Objects</a> in the <i>Kubernetes
   * documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksMetadata">AWS
   * API Reference</a></p>
   */
  class EksMetadata
  {
  public:
    AWS_BATCH_API EksMetadata() = default;
    AWS_BATCH_API EksMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    EksMetadata& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    EksMetadata& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs used to attach arbitrary, non-identifying metadata to
     * Kubernetes objects. Valid annotation keys have two segments: an optional prefix
     * and a name, separated by a slash (/). </p> <ul> <li> <p>The prefix is optional
     * and must be 253 characters or less. If specified, the prefix must be a DNS
     * subdomain− a series of DNS labels separated by dots (.), and it must end with a
     * slash (/).</p> </li> <li> <p>The name segment is required and must be 63
     * characters or less. It can include alphanumeric characters ([a-z0-9A-Z]), dashes
     * (-), underscores (_), and dots (.), but must begin and end with an alphanumeric
     * character.</p> </li> </ul>  <p>Annotation values must be 255 characters or
     * less.</p>  <p>Annotations can be added or modified at any time. Each
     * resource can have multiple annotations. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAnnotations() const { return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    template<typename AnnotationsT = Aws::Map<Aws::String, Aws::String>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Map<Aws::String, Aws::String>>
    EksMetadata& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsKeyT = Aws::String, typename AnnotationsValueT = Aws::String>
    EksMetadata& AddAnnotations(AnnotationsKeyT&& key, AnnotationsValueT&& value) {
      m_annotationsHasBeenSet = true; m_annotations.emplace(std::forward<AnnotationsKeyT>(key), std::forward<AnnotationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon EKS cluster. In Kubernetes, namespaces provide a
     * mechanism for isolating groups of resources within a single cluster. Names of
     * resources need to be unique within a namespace, but not across namespaces. Batch
     * places Batch Job pods in this namespace. If this field is provided, the value
     * can't be empty or null. It must meet the following requirements:</p> <ul> <li>
     * <p>1-63 characters long</p> </li> <li> <p>Can't be set to default</p> </li> <li>
     * <p>Can't start with <code>kube</code> </p> </li> <li> <p>Must match the
     * following regular expression: <code>^[a-z0-9]([-a-z0-9]*[a-z0-9])?$</code> </p>
     * </li> </ul> <p> For more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/namespaces/">Namespaces</a>
     * in the <i>Kubernetes documentation</i>. This namespace can be different from the
     * <code>kubernetesNamespace</code> set in the compute environment's
     * <code>EksConfiguration</code>, but must have identical role-based access control
     * (RBAC) roles as the compute environment's <code>kubernetesNamespace</code>. For
     * multi-node parallel jobs, the same value must be provided across all the node
     * ranges.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    EksMetadata& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_annotations;
    bool m_annotationsHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
