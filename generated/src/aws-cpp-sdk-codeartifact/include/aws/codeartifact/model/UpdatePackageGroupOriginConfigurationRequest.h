/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionMode.h>
#include <aws/codeartifact/model/PackageGroupAllowedRepository.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class UpdatePackageGroupOriginConfigurationRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageGroupOriginConfiguration"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain which contains the package group for which to update
     * the origin configuration. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UpdatePackageGroupOriginConfigurationRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    UpdatePackageGroupOriginConfigurationRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pattern of the package group for which to update the origin
     * configuration. </p>
     */
    inline const Aws::String& GetPackageGroup() const { return m_packageGroup; }
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }
    template<typename PackageGroupT = Aws::String>
    void SetPackageGroup(PackageGroupT&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::forward<PackageGroupT>(value); }
    template<typename PackageGroupT = Aws::String>
    UpdatePackageGroupOriginConfigurationRequest& WithPackageGroup(PackageGroupT&& value) { SetPackageGroup(std::forward<PackageGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The origin configuration settings that determine how package versions can
     * enter repositories. </p>
     */
    inline const Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>>
    UpdatePackageGroupOriginConfigurationRequest& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& AddRestrictions(PackageGroupOriginRestrictionType key, PackageGroupOriginRestrictionMode value) {
      m_restrictionsHasBeenSet = true; m_restrictions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The repository name and restrictions to add to the allowed repository list of
     * the specified package group.</p>
     */
    inline const Aws::Vector<PackageGroupAllowedRepository>& GetAddAllowedRepositories() const { return m_addAllowedRepositories; }
    inline bool AddAllowedRepositoriesHasBeenSet() const { return m_addAllowedRepositoriesHasBeenSet; }
    template<typename AddAllowedRepositoriesT = Aws::Vector<PackageGroupAllowedRepository>>
    void SetAddAllowedRepositories(AddAllowedRepositoriesT&& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories = std::forward<AddAllowedRepositoriesT>(value); }
    template<typename AddAllowedRepositoriesT = Aws::Vector<PackageGroupAllowedRepository>>
    UpdatePackageGroupOriginConfigurationRequest& WithAddAllowedRepositories(AddAllowedRepositoriesT&& value) { SetAddAllowedRepositories(std::forward<AddAllowedRepositoriesT>(value)); return *this;}
    template<typename AddAllowedRepositoriesT = PackageGroupAllowedRepository>
    UpdatePackageGroupOriginConfigurationRequest& AddAddAllowedRepositories(AddAllowedRepositoriesT&& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories.emplace_back(std::forward<AddAllowedRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository name and restrictions to remove from the allowed repository
     * list of the specified package group.</p>
     */
    inline const Aws::Vector<PackageGroupAllowedRepository>& GetRemoveAllowedRepositories() const { return m_removeAllowedRepositories; }
    inline bool RemoveAllowedRepositoriesHasBeenSet() const { return m_removeAllowedRepositoriesHasBeenSet; }
    template<typename RemoveAllowedRepositoriesT = Aws::Vector<PackageGroupAllowedRepository>>
    void SetRemoveAllowedRepositories(RemoveAllowedRepositoriesT&& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories = std::forward<RemoveAllowedRepositoriesT>(value); }
    template<typename RemoveAllowedRepositoriesT = Aws::Vector<PackageGroupAllowedRepository>>
    UpdatePackageGroupOriginConfigurationRequest& WithRemoveAllowedRepositories(RemoveAllowedRepositoriesT&& value) { SetRemoveAllowedRepositories(std::forward<RemoveAllowedRepositoriesT>(value)); return *this;}
    template<typename RemoveAllowedRepositoriesT = PackageGroupAllowedRepository>
    UpdatePackageGroupOriginConfigurationRequest& AddRemoveAllowedRepositories(RemoveAllowedRepositoriesT&& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories.emplace_back(std::forward<RemoveAllowedRepositoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode> m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::Vector<PackageGroupAllowedRepository> m_addAllowedRepositories;
    bool m_addAllowedRepositoriesHasBeenSet = false;

    Aws::Vector<PackageGroupAllowedRepository> m_removeAllowedRepositories;
    bool m_removeAllowedRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
