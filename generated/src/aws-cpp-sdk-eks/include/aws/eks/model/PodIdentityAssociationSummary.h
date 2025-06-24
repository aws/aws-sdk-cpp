/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
   * <p>The summarized description of the association.</p> <p>Each summary is
   * simplified by removing these fields compared to the full <a
   * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_PodIdentityAssociation.html">
   * <code>PodIdentityAssociation</code> </a>:</p> <ul> <li> <p>The IAM role:
   * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
   * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
   * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
   * <p>The tags on the association: <code>tags</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PodIdentityAssociationSummary">AWS
   * API Reference</a></p>
   */
  class PodIdentityAssociationSummary
  {
  public:
    AWS_EKS_API PodIdentityAssociationSummary() = default;
    AWS_EKS_API PodIdentityAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API PodIdentityAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster that the association is in.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    PodIdentityAssociationSummary& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the Pods that use the service account
     * must be in this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PodIdentityAssociationSummary& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline const Aws::String& GetServiceAccount() const { return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    template<typename ServiceAccountT = Aws::String>
    void SetServiceAccount(ServiceAccountT&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::forward<ServiceAccountT>(value); }
    template<typename ServiceAccountT = Aws::String>
    PodIdentityAssociationSummary& WithServiceAccount(ServiceAccountT&& value) { SetServiceAccount(std::forward<ServiceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    PodIdentityAssociationSummary& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    PodIdentityAssociationSummary& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined, the association is owned by an Amazon EKS add-on.</p>
     */
    inline const Aws::String& GetOwnerArn() const { return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    template<typename OwnerArnT = Aws::String>
    void SetOwnerArn(OwnerArnT&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::forward<OwnerArnT>(value); }
    template<typename OwnerArnT = Aws::String>
    PodIdentityAssociationSummary& WithOwnerArn(OwnerArnT&& value) { SetOwnerArn(std::forward<OwnerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
