﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ResolveConflicts.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AWS_EKS_API UpdateAddonRequest : public EKSRequest
  {
  public:
    UpdateAddonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAddon"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline UpdateAddonRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline UpdateAddonRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline UpdateAddonRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline UpdateAddonRequest& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline const Aws::String& GetServiceAccountRoleArn() const{ return m_serviceAccountRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline void SetServiceAccountRoleArn(const Aws::String& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline void SetServiceAccountRoleArn(Aws::String&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline void SetServiceAccountRoleArn(const char* value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline UpdateAddonRequest& WithServiceAccountRoleArn(const Aws::String& value) { SetServiceAccountRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline UpdateAddonRequest& WithServiceAccountRoleArn(Aws::String&& value) { SetServiceAccountRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline UpdateAddonRequest& WithServiceAccountRoleArn(const char* value) { SetServiceAccountRoleArn(value); return *this;}


    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline const ResolveConflicts& GetResolveConflicts() const{ return m_resolveConflicts; }

    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline bool ResolveConflictsHasBeenSet() const { return m_resolveConflictsHasBeenSet; }

    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline void SetResolveConflicts(const ResolveConflicts& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = value; }

    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline void SetResolveConflicts(ResolveConflicts&& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = std::move(value); }

    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline UpdateAddonRequest& WithResolveConflicts(const ResolveConflicts& value) { SetResolveConflicts(value); return *this;}

    /**
     * <p>How to resolve parameter value conflicts when applying the new version of the
     * add-on to the cluster.</p>
     */
    inline UpdateAddonRequest& WithResolveConflicts(ResolveConflicts&& value) { SetResolveConflicts(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateAddonRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateAddonRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateAddonRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet;

    ResolveConflicts m_resolveConflicts;
    bool m_resolveConflictsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
