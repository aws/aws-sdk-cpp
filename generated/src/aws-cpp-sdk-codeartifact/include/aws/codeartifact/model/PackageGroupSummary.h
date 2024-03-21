/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeartifact/model/PackageGroupOriginConfiguration.h>
#include <aws/codeartifact/model/PackageGroupReference.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p>Details about a package group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupSummary">AWS
   * API Reference</a></p>
   */
  class PackageGroupSummary
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupSummary();
    AWS_CODEARTIFACT_API PackageGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN of the package group. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline PackageGroupSummary& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline PackageGroupSummary& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline PackageGroupSummary& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p> The domain that contains the package group. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline PackageGroupSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline PackageGroupSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The domain that contains the package group. </p>
     */
    inline PackageGroupSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline PackageGroupSummary& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PackageGroupSummary& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PackageGroupSummary& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline PackageGroupSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline PackageGroupSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p> The contact information of the package group. </p>
     */
    inline const Aws::String& GetContactInfo() const{ return m_contactInfo; }

    /**
     * <p> The contact information of the package group. </p>
     */
    inline bool ContactInfoHasBeenSet() const { return m_contactInfoHasBeenSet; }

    /**
     * <p> The contact information of the package group. </p>
     */
    inline void SetContactInfo(const Aws::String& value) { m_contactInfoHasBeenSet = true; m_contactInfo = value; }

    /**
     * <p> The contact information of the package group. </p>
     */
    inline void SetContactInfo(Aws::String&& value) { m_contactInfoHasBeenSet = true; m_contactInfo = std::move(value); }

    /**
     * <p> The contact information of the package group. </p>
     */
    inline void SetContactInfo(const char* value) { m_contactInfoHasBeenSet = true; m_contactInfo.assign(value); }

    /**
     * <p> The contact information of the package group. </p>
     */
    inline PackageGroupSummary& WithContactInfo(const Aws::String& value) { SetContactInfo(value); return *this;}

    /**
     * <p> The contact information of the package group. </p>
     */
    inline PackageGroupSummary& WithContactInfo(Aws::String&& value) { SetContactInfo(std::move(value)); return *this;}

    /**
     * <p> The contact information of the package group. </p>
     */
    inline PackageGroupSummary& WithContactInfo(const char* value) { SetContactInfo(value); return *this;}


    /**
     * <p> The description of the package group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the package group. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the package group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the package group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the package group. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the package group. </p>
     */
    inline PackageGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the package group. </p>
     */
    inline PackageGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the package group. </p>
     */
    inline PackageGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline const PackageGroupOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }

    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline bool OriginConfigurationHasBeenSet() const { return m_originConfigurationHasBeenSet; }

    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline void SetOriginConfiguration(const PackageGroupOriginConfiguration& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = value; }

    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline void SetOriginConfiguration(PackageGroupOriginConfiguration&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::move(value); }

    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline PackageGroupSummary& WithOriginConfiguration(const PackageGroupOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}

    /**
     * <p>Details about the package origin configuration of a package group.</p>
     */
    inline PackageGroupSummary& WithOriginConfiguration(PackageGroupOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}


    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline const PackageGroupReference& GetParent() const{ return m_parent; }

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline void SetParent(const PackageGroupReference& value) { m_parentHasBeenSet = true; m_parent = value; }

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline void SetParent(PackageGroupReference&& value) { m_parentHasBeenSet = true; m_parent = std::move(value); }

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline PackageGroupSummary& WithParent(const PackageGroupReference& value) { SetParent(value); return *this;}

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline PackageGroupSummary& WithParent(PackageGroupReference&& value) { SetParent(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_contactInfo;
    bool m_contactInfoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PackageGroupOriginConfiguration m_originConfiguration;
    bool m_originConfigurationHasBeenSet = false;

    PackageGroupReference m_parent;
    bool m_parentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
