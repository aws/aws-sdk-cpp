/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ResolveConflicts.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonPodIdentityAssociations.h>
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
  class CreateAddonRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateAddonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddon"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateAddonRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateAddonRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateAddonRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by
     * <code>DescribeAddonVersions</code>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline CreateAddonRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline CreateAddonRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline CreateAddonRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }
    inline CreateAddonRequest& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline CreateAddonRequest& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline CreateAddonRequest& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}

    ///@{
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
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }
    inline void SetServiceAccountRoleArn(const Aws::String& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = value; }
    inline void SetServiceAccountRoleArn(Aws::String&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::move(value); }
    inline void SetServiceAccountRoleArn(const char* value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn.assign(value); }
    inline CreateAddonRequest& WithServiceAccountRoleArn(const Aws::String& value) { SetServiceAccountRoleArn(value); return *this;}
    inline CreateAddonRequest& WithServiceAccountRoleArn(Aws::String&& value) { SetServiceAccountRoleArn(std::move(value)); return *this;}
    inline CreateAddonRequest& WithServiceAccountRoleArn(const char* value) { SetServiceAccountRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to resolve field value conflicts for an Amazon EKS add-on. Conflicts are
     * handled based on the value you choose:</p> <ul> <li> <p> <b>None</b> – If the
     * self-managed version of the add-on is installed on your cluster, Amazon EKS
     * doesn't change the value. Creation of the add-on might fail.</p> </li> <li> <p>
     * <b>Overwrite</b> – If the self-managed version of the add-on is installed on
     * your cluster and the Amazon EKS default value is different than the existing
     * value, Amazon EKS changes the value to the Amazon EKS default value.</p> </li>
     * <li> <p> <b>Preserve</b> – This is similar to the NONE option. If the
     * self-managed version of the add-on is installed on your cluster Amazon EKS
     * doesn't change the add-on resource properties. Creation of the add-on might fail
     * if conflicts are detected. This option works differently during the update
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_UpdateAddon.html">UpdateAddon</a>.</p>
     * </li> </ul> <p>If you don't currently have the self-managed version of the
     * add-on installed on your cluster, the Amazon EKS add-on is installed. Amazon EKS
     * sets all values to default values, regardless of the option that you
     * specify.</p>
     */
    inline const ResolveConflicts& GetResolveConflicts() const{ return m_resolveConflicts; }
    inline bool ResolveConflictsHasBeenSet() const { return m_resolveConflictsHasBeenSet; }
    inline void SetResolveConflicts(const ResolveConflicts& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = value; }
    inline void SetResolveConflicts(ResolveConflicts&& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = std::move(value); }
    inline CreateAddonRequest& WithResolveConflicts(const ResolveConflicts& value) { SetResolveConflicts(value); return *this;}
    inline CreateAddonRequest& WithResolveConflicts(ResolveConflicts&& value) { SetResolveConflicts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateAddonRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateAddonRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateAddonRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAddonRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAddonRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAddonRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAddonRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAddonRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAddonRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAddonRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAddonRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAddonRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of configuration values for the add-on that's created. The values
     * that you provide are validated against the schema returned by
     * <code>DescribeAddonConfiguration</code>.</p>
     */
    inline const Aws::String& GetConfigurationValues() const{ return m_configurationValues; }
    inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
    inline void SetConfigurationValues(const Aws::String& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = value; }
    inline void SetConfigurationValues(Aws::String&& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = std::move(value); }
    inline void SetConfigurationValues(const char* value) { m_configurationValuesHasBeenSet = true; m_configurationValues.assign(value); }
    inline CreateAddonRequest& WithConfigurationValues(const Aws::String& value) { SetConfigurationValues(value); return *this;}
    inline CreateAddonRequest& WithConfigurationValues(Aws::String&& value) { SetConfigurationValues(std::move(value)); return *this;}
    inline CreateAddonRequest& WithConfigurationValues(const char* value) { SetConfigurationValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Pod Identity Assocations to be created. Each EKS Pod Identity
     * association maps a Kubernetes service account to an IAM Role.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
     * an IAM Role to an Amazon EKS add-on using Pod Identity</a> in the EKS User
     * Guide.</p>
     */
    inline const Aws::Vector<AddonPodIdentityAssociations>& GetPodIdentityAssociations() const{ return m_podIdentityAssociations; }
    inline bool PodIdentityAssociationsHasBeenSet() const { return m_podIdentityAssociationsHasBeenSet; }
    inline void SetPodIdentityAssociations(const Aws::Vector<AddonPodIdentityAssociations>& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = value; }
    inline void SetPodIdentityAssociations(Aws::Vector<AddonPodIdentityAssociations>&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = std::move(value); }
    inline CreateAddonRequest& WithPodIdentityAssociations(const Aws::Vector<AddonPodIdentityAssociations>& value) { SetPodIdentityAssociations(value); return *this;}
    inline CreateAddonRequest& WithPodIdentityAssociations(Aws::Vector<AddonPodIdentityAssociations>&& value) { SetPodIdentityAssociations(std::move(value)); return *this;}
    inline CreateAddonRequest& AddPodIdentityAssociations(const AddonPodIdentityAssociations& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.push_back(value); return *this; }
    inline CreateAddonRequest& AddPodIdentityAssociations(AddonPodIdentityAssociations&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet = false;

    ResolveConflicts m_resolveConflicts;
    bool m_resolveConflictsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_configurationValues;
    bool m_configurationValuesHasBeenSet = false;

    Aws::Vector<AddonPodIdentityAssociations> m_podIdentityAssociations;
    bool m_podIdentityAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
