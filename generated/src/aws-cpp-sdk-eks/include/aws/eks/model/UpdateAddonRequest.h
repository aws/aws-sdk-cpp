/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ResolveConflicts.h>
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
  class UpdateAddonRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateAddonRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAddon"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    UpdateAddonRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    UpdateAddonRequest& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    UpdateAddonRequest& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
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
    inline const Aws::String& GetServiceAccountRoleArn() const { return m_serviceAccountRoleArn; }
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }
    template<typename ServiceAccountRoleArnT = Aws::String>
    void SetServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::forward<ServiceAccountRoleArnT>(value); }
    template<typename ServiceAccountRoleArnT = Aws::String>
    UpdateAddonRequest& WithServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { SetServiceAccountRoleArn(std::forward<ServiceAccountRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to resolve field value conflicts for an Amazon EKS add-on if you've
     * changed a value from the Amazon EKS default value. Conflicts are handled based
     * on the option you choose:</p> <ul> <li> <p> <b>None</b> – Amazon EKS doesn't
     * change the value. The update might fail.</p> </li> <li> <p> <b>Overwrite</b> –
     * Amazon EKS overwrites the changed value back to the Amazon EKS default
     * value.</p> </li> <li> <p> <b>Preserve</b> – Amazon EKS preserves the value. If
     * you choose this option, we recommend that you test any field and value changes
     * on a non-production cluster before updating the add-on on your production
     * cluster.</p> </li> </ul>
     */
    inline ResolveConflicts GetResolveConflicts() const { return m_resolveConflicts; }
    inline bool ResolveConflictsHasBeenSet() const { return m_resolveConflictsHasBeenSet; }
    inline void SetResolveConflicts(ResolveConflicts value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = value; }
    inline UpdateAddonRequest& WithResolveConflicts(ResolveConflicts value) { SetResolveConflicts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateAddonRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of configuration values for the add-on that's created. The values
     * that you provide are validated against the schema returned by
     * <code>DescribeAddonConfiguration</code>.</p>
     */
    inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
    inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
    template<typename ConfigurationValuesT = Aws::String>
    void SetConfigurationValues(ConfigurationValuesT&& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = std::forward<ConfigurationValuesT>(value); }
    template<typename ConfigurationValuesT = Aws::String>
    UpdateAddonRequest& WithConfigurationValues(ConfigurationValuesT&& value) { SetConfigurationValues(std::forward<ConfigurationValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of EKS Pod Identity associations to be updated. Each association
     * maps a Kubernetes service account to an IAM role. If this value is left blank,
     * no change. If an empty array is provided, existing associations owned by the
     * add-on are deleted.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
     * an IAM Role to an Amazon EKS add-on using EKS Pod Identity</a> in the <i>Amazon
     * EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<AddonPodIdentityAssociations>& GetPodIdentityAssociations() const { return m_podIdentityAssociations; }
    inline bool PodIdentityAssociationsHasBeenSet() const { return m_podIdentityAssociationsHasBeenSet; }
    template<typename PodIdentityAssociationsT = Aws::Vector<AddonPodIdentityAssociations>>
    void SetPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = std::forward<PodIdentityAssociationsT>(value); }
    template<typename PodIdentityAssociationsT = Aws::Vector<AddonPodIdentityAssociations>>
    UpdateAddonRequest& WithPodIdentityAssociations(PodIdentityAssociationsT&& value) { SetPodIdentityAssociations(std::forward<PodIdentityAssociationsT>(value)); return *this;}
    template<typename PodIdentityAssociationsT = AddonPodIdentityAssociations>
    UpdateAddonRequest& AddPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.emplace_back(std::forward<PodIdentityAssociationsT>(value)); return *this; }
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

    ResolveConflicts m_resolveConflicts{ResolveConflicts::NOT_SET};
    bool m_resolveConflictsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_configurationValues;
    bool m_configurationValuesHasBeenSet = false;

    Aws::Vector<AddonPodIdentityAssociations> m_podIdentityAssociations;
    bool m_podIdentityAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
