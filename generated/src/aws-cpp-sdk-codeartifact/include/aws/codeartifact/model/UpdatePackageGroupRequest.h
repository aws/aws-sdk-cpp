/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdatePackageGroupRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API UpdatePackageGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageGroup"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain which contains the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline UpdatePackageGroupRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline UpdatePackageGroupRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline UpdatePackageGroupRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}

    /**
     * <p> The pattern of the package group to be updated. </p>
     */
    inline UpdatePackageGroupRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}


    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline const Aws::String& GetContactInfo() const{ return m_contactInfo; }

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline bool ContactInfoHasBeenSet() const { return m_contactInfoHasBeenSet; }

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline void SetContactInfo(const Aws::String& value) { m_contactInfoHasBeenSet = true; m_contactInfo = value; }

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline void SetContactInfo(Aws::String&& value) { m_contactInfoHasBeenSet = true; m_contactInfo = std::move(value); }

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline void SetContactInfo(const char* value) { m_contactInfoHasBeenSet = true; m_contactInfo.assign(value); }

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline UpdatePackageGroupRequest& WithContactInfo(const Aws::String& value) { SetContactInfo(value); return *this;}

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline UpdatePackageGroupRequest& WithContactInfo(Aws::String&& value) { SetContactInfo(std::move(value)); return *this;}

    /**
     * <p> Contact information which you want to update the requested package group
     * with. </p>
     */
    inline UpdatePackageGroupRequest& WithContactInfo(const char* value) { SetContactInfo(value); return *this;}


    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline UpdatePackageGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline UpdatePackageGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description you want to update the requested package group with. </p>
     */
    inline UpdatePackageGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    Aws::String m_contactInfo;
    bool m_contactInfoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
