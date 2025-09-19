/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The information about the Amazon EKS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/EksInfo">AWS
   * API Reference</a></p>
   */
  class EksInfo
  {
  public:
    AWS_EMRCONTAINERS_API EksInfo() = default;
    AWS_EMRCONTAINERS_API EksInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API EksInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespaces of the Amazon EKS cluster.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    EksInfo& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodeLabel of the nodes where the resources of this virtual cluster can
     * get scheduled. It requires relevant scaling and policy engine addons.</p>
     */
    inline const Aws::String& GetNodeLabel() const { return m_nodeLabel; }
    inline bool NodeLabelHasBeenSet() const { return m_nodeLabelHasBeenSet; }
    template<typename NodeLabelT = Aws::String>
    void SetNodeLabel(NodeLabelT&& value) { m_nodeLabelHasBeenSet = true; m_nodeLabel = std::forward<NodeLabelT>(value); }
    template<typename NodeLabelT = Aws::String>
    EksInfo& WithNodeLabel(NodeLabelT&& value) { SetNodeLabel(std::forward<NodeLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_nodeLabel;
    bool m_nodeLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
