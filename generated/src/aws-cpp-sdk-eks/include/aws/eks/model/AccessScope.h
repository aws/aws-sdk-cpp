/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AccessScopeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The scope of an <code>AccessPolicy</code> that's associated to an
   * <code>AccessEntry</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AccessScope">AWS API
   * Reference</a></p>
   */
  class AccessScope
  {
  public:
    AWS_EKS_API AccessScope() = default;
    AWS_EKS_API AccessScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scope type of an access policy.</p>
     */
    inline AccessScopeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AccessScopeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AccessScope& WithType(AccessScopeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
    inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    void SetNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::forward<NamespacesT>(value); }
    template<typename NamespacesT = Aws::Vector<Aws::String>>
    AccessScope& WithNamespaces(NamespacesT&& value) { SetNamespaces(std::forward<NamespacesT>(value)); return *this;}
    template<typename NamespacesT = Aws::String>
    AccessScope& AddNamespaces(NamespacesT&& value) { m_namespacesHasBeenSet = true; m_namespaces.emplace_back(std::forward<NamespacesT>(value)); return *this; }
    ///@}
  private:

    AccessScopeType m_type{AccessScopeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespaces;
    bool m_namespacesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
