﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Amazon EKS Pod Identity associations provide the ability to manage
   * credentials for your applications, similar to the way that Amazon EC2 instance
   * profiles provide credentials to Amazon EC2 instances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PodIdentityAssociation">AWS
   * API Reference</a></p>
   */
  class PodIdentityAssociation
  {
  public:
    AWS_EKS_API PodIdentityAssociation();
    AWS_EKS_API PodIdentityAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API PodIdentityAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PodIdentityAssociation& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline PodIdentityAssociation& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithClusterName(const char* value) { SetClusterName(value); return *this;}
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
    inline PodIdentityAssociation& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PodIdentityAssociation& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithNamespace(const char* value) { SetNamespace(value); return *this;}
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
    inline PodIdentityAssociation& WithServiceAccount(const Aws::String& value) { SetServiceAccount(value); return *this;}
    inline PodIdentityAssociation& WithServiceAccount(Aws::String&& value) { SetServiceAccount(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithServiceAccount(const char* value) { SetServiceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with the service
     * account. The EKS Pod Identity agent manages credentials to assume this role for
     * applications in the containers in the pods that use this service account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline PodIdentityAssociation& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PodIdentityAssociation& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline PodIdentityAssociation& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}
    inline PodIdentityAssociation& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}
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
    inline PodIdentityAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline PodIdentityAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p> <p>The following basic
     * restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per resource
     * – 50</p> </li> <li> <p>For each resource, each tag key must be unique, and each
     * tag key can have only one value.</p> </li> <li> <p>Maximum key length – 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length – 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>If your tagging schema is used across
     * multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PodIdentityAssociation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PodIdentityAssociation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PodIdentityAssociation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PodIdentityAssociation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PodIdentityAssociation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PodIdentityAssociation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PodIdentityAssociation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PodIdentityAssociation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PodIdentityAssociation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp that the association was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PodIdentityAssociation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PodIdentityAssociation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent timestamp that the association was modified at</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline PodIdentityAssociation& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline PodIdentityAssociation& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
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
    inline PodIdentityAssociation& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}
    inline PodIdentityAssociation& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}
    inline PodIdentityAssociation& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
