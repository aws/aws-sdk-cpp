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
    AWS_CODEARTIFACT_API UpdatePackageGroupOriginConfigurationRequest();

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
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pattern of the package group for which to update the origin
     * configuration. </p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The origin configuration settings that determine how package versions can
     * enter repositories. </p>
     */
    inline const Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>& GetRestrictions() const{ return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    inline void SetRestrictions(const Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }
    inline void SetRestrictions(Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithRestrictions(const Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>& value) { SetRestrictions(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithRestrictions(Aws::Map<PackageGroupOriginRestrictionType, PackageGroupOriginRestrictionMode>&& value) { SetRestrictions(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& AddRestrictions(const PackageGroupOriginRestrictionType& key, const PackageGroupOriginRestrictionMode& value) { m_restrictionsHasBeenSet = true; m_restrictions.emplace(key, value); return *this; }
    inline UpdatePackageGroupOriginConfigurationRequest& AddRestrictions(PackageGroupOriginRestrictionType&& key, const PackageGroupOriginRestrictionMode& value) { m_restrictionsHasBeenSet = true; m_restrictions.emplace(std::move(key), value); return *this; }
    inline UpdatePackageGroupOriginConfigurationRequest& AddRestrictions(const PackageGroupOriginRestrictionType& key, PackageGroupOriginRestrictionMode&& value) { m_restrictionsHasBeenSet = true; m_restrictions.emplace(key, std::move(value)); return *this; }
    inline UpdatePackageGroupOriginConfigurationRequest& AddRestrictions(PackageGroupOriginRestrictionType&& key, PackageGroupOriginRestrictionMode&& value) { m_restrictionsHasBeenSet = true; m_restrictions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository name and restrictions to add to the allowed repository list of
     * the specified package group.</p>
     */
    inline const Aws::Vector<PackageGroupAllowedRepository>& GetAddAllowedRepositories() const{ return m_addAllowedRepositories; }
    inline bool AddAllowedRepositoriesHasBeenSet() const { return m_addAllowedRepositoriesHasBeenSet; }
    inline void SetAddAllowedRepositories(const Aws::Vector<PackageGroupAllowedRepository>& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories = value; }
    inline void SetAddAllowedRepositories(Aws::Vector<PackageGroupAllowedRepository>&& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories = std::move(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithAddAllowedRepositories(const Aws::Vector<PackageGroupAllowedRepository>& value) { SetAddAllowedRepositories(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithAddAllowedRepositories(Aws::Vector<PackageGroupAllowedRepository>&& value) { SetAddAllowedRepositories(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& AddAddAllowedRepositories(const PackageGroupAllowedRepository& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories.push_back(value); return *this; }
    inline UpdatePackageGroupOriginConfigurationRequest& AddAddAllowedRepositories(PackageGroupAllowedRepository&& value) { m_addAllowedRepositoriesHasBeenSet = true; m_addAllowedRepositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository name and restrictions to remove from the allowed repository
     * list of the specified package group.</p>
     */
    inline const Aws::Vector<PackageGroupAllowedRepository>& GetRemoveAllowedRepositories() const{ return m_removeAllowedRepositories; }
    inline bool RemoveAllowedRepositoriesHasBeenSet() const { return m_removeAllowedRepositoriesHasBeenSet; }
    inline void SetRemoveAllowedRepositories(const Aws::Vector<PackageGroupAllowedRepository>& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories = value; }
    inline void SetRemoveAllowedRepositories(Aws::Vector<PackageGroupAllowedRepository>&& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories = std::move(value); }
    inline UpdatePackageGroupOriginConfigurationRequest& WithRemoveAllowedRepositories(const Aws::Vector<PackageGroupAllowedRepository>& value) { SetRemoveAllowedRepositories(value); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& WithRemoveAllowedRepositories(Aws::Vector<PackageGroupAllowedRepository>&& value) { SetRemoveAllowedRepositories(std::move(value)); return *this;}
    inline UpdatePackageGroupOriginConfigurationRequest& AddRemoveAllowedRepositories(const PackageGroupAllowedRepository& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories.push_back(value); return *this; }
    inline UpdatePackageGroupOriginConfigurationRequest& AddRemoveAllowedRepositories(PackageGroupAllowedRepository&& value) { m_removeAllowedRepositoriesHasBeenSet = true; m_removeAllowedRepositories.push_back(std::move(value)); return *this; }
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
