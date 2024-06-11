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
   * simplified by removing these fields compared to the full <code>
   * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
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
    AWS_EKS_API PodIdentityAssociationSummary();
    AWS_EKS_API PodIdentityAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API PodIdentityAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster that the association is in.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline PodIdentityAssociationSummary& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline PodIdentityAssociationSummary& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the pods that use the service account
     * must be in this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline PodIdentityAssociationSummary& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PodIdentityAssociationSummary& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline const Aws::String& GetServiceAccount() const{ return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    inline void SetServiceAccount(const Aws::String& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = value; }
    inline void SetServiceAccount(Aws::String&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::move(value); }
    inline void SetServiceAccount(const char* value) { m_serviceAccountHasBeenSet = true; m_serviceAccount.assign(value); }
    inline PodIdentityAssociationSummary& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}
    inline PodIdentityAssociationSummary& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }
    inline PodIdentityAssociationSummary& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}
    inline PodIdentityAssociationSummary& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline PodIdentityAssociationSummary& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline PodIdentityAssociationSummary& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined, the Pod Identity Association is owned by an Amazon EKS Addon.</p>
     */
    inline const Aws::String& GetOwnerArn() const{ return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    inline void SetOwnerArn(const Aws::String& value) { m_ownerArnHasBeenSet = true; m_ownerArn = value; }
    inline void SetOwnerArn(Aws::String&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::move(value); }
    inline void SetOwnerArn(const char* value) { m_ownerArnHasBeenSet = true; m_ownerArn.assign(value); }
    inline PodIdentityAssociationSummary& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}
    inline PodIdentityAssociationSummary& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}
    inline PodIdentityAssociationSummary& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}
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
