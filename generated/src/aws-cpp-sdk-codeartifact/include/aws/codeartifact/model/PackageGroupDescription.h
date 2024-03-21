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
   * <p> The description of the package group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupDescription">AWS
   * API Reference</a></p>
   */
  class PackageGroupDescription
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupDescription();
    AWS_CODEARTIFACT_API PackageGroupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PackageGroupDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupDescription& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline PackageGroupDescription& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline PackageGroupDescription& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline PackageGroupDescription& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline PackageGroupDescription& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline PackageGroupDescription& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline PackageGroupDescription& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline PackageGroupDescription& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PackageGroupDescription& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PackageGroupDescription& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline PackageGroupDescription& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline PackageGroupDescription& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline PackageGroupDescription& WithContactInfo(const Aws::String& value) { SetContactInfo(value); return *this;}

    /**
     * <p> The contact information of the package group. </p>
     */
    inline PackageGroupDescription& WithContactInfo(Aws::String&& value) { SetContactInfo(std::move(value)); return *this;}

    /**
     * <p> The contact information of the package group. </p>
     */
    inline PackageGroupDescription& WithContactInfo(const char* value) { SetContactInfo(value); return *this;}


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
    inline PackageGroupDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the package group. </p>
     */
    inline PackageGroupDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the package group. </p>
     */
    inline PackageGroupDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline const PackageGroupOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }

    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline bool OriginConfigurationHasBeenSet() const { return m_originConfigurationHasBeenSet; }

    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline void SetOriginConfiguration(const PackageGroupOriginConfiguration& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = value; }

    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline void SetOriginConfiguration(PackageGroupOriginConfiguration&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::move(value); }

    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline PackageGroupDescription& WithOriginConfiguration(const PackageGroupOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}

    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline PackageGroupDescription& WithOriginConfiguration(PackageGroupOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}


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
    inline PackageGroupDescription& WithParent(const PackageGroupReference& value) { SetParent(value); return *this;}

    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline PackageGroupDescription& WithParent(PackageGroupReference&& value) { SetParent(std::move(value)); return *this;}

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
