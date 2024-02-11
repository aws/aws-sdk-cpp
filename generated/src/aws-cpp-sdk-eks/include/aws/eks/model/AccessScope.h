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
    AWS_EKS_API AccessScope();
    AWS_EKS_API AccessScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The scope type of an access policy.</p>
     */
    inline const AccessScopeType& GetType() const{ return m_type; }

    /**
     * <p>The scope type of an access policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The scope type of an access policy.</p>
     */
    inline void SetType(const AccessScopeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The scope type of an access policy.</p>
     */
    inline void SetType(AccessScopeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The scope type of an access policy.</p>
     */
    inline AccessScope& WithType(const AccessScopeType& value) { SetType(value); return *this;}

    /**
     * <p>The scope type of an access policy.</p>
     */
    inline AccessScope& WithType(AccessScopeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline void SetNamespaces(const Aws::Vector<Aws::String>& value) { m_namespacesHasBeenSet = true; m_namespaces = value; }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline void SetNamespaces(Aws::Vector<Aws::String>&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::move(value); }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline AccessScope& WithNamespaces(const Aws::Vector<Aws::String>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline AccessScope& WithNamespaces(Aws::Vector<Aws::String>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline AccessScope& AddNamespaces(const Aws::String& value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(value); return *this; }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline AccessScope& AddNamespaces(Aws::String&& value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(std::move(value)); return *this; }

    /**
     * <p>A Kubernetes <code>namespace</code> that an access policy is scoped to. A
     * value is required if you specified <code>namespace</code> for
     * <code>Type</code>.</p>
     */
    inline AccessScope& AddNamespaces(const char* value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(value); return *this; }

  private:

    AccessScopeType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespaces;
    bool m_namespacesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
