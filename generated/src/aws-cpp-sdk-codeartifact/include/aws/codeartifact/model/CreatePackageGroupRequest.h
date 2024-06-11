﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/Tag.h>
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
  class CreatePackageGroupRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API CreatePackageGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackageGroup"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain in which you want to create a package group. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreatePackageGroupRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreatePackageGroupRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline CreatePackageGroupRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline CreatePackageGroupRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern of the package group to create. The pattern is also the
     * identifier of the package group. </p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }
    inline CreatePackageGroupRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}
    inline CreatePackageGroupRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contact information for the created package group. </p>
     */
    inline const Aws::String& GetContactInfo() const{ return m_contactInfo; }
    inline bool ContactInfoHasBeenSet() const { return m_contactInfoHasBeenSet; }
    inline void SetContactInfo(const Aws::String& value) { m_contactInfoHasBeenSet = true; m_contactInfo = value; }
    inline void SetContactInfo(Aws::String&& value) { m_contactInfoHasBeenSet = true; m_contactInfo = std::move(value); }
    inline void SetContactInfo(const char* value) { m_contactInfoHasBeenSet = true; m_contactInfo.assign(value); }
    inline CreatePackageGroupRequest& WithContactInfo(const Aws::String& value) { SetContactInfo(value); return *this;}
    inline CreatePackageGroupRequest& WithContactInfo(Aws::String&& value) { SetContactInfo(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& WithContactInfo(const char* value) { SetContactInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the package group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePackageGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePackageGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tag key-value pairs for the package group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePackageGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePackageGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePackageGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePackageGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
