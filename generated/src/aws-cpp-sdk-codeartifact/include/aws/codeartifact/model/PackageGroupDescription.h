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
    AWS_CODEARTIFACT_API PackageGroupDescription() = default;
    AWS_CODEARTIFACT_API PackageGroupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the package group. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PackageGroupDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group. </p>
     */
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    PackageGroupDescription& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain that contains the package group. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    PackageGroupDescription& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    PackageGroupDescription& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that represents the date and time the package group was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    PackageGroupDescription& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contact information of the package group. </p>
     */
    inline const Aws::String& GetContactInfo() const { return m_contactInfo; }
    inline bool ContactInfoHasBeenSet() const { return m_contactInfoHasBeenSet; }
    template<typename ContactInfoT = Aws::String>
    void SetContactInfo(ContactInfoT&& value) { m_contactInfoHasBeenSet = true; m_contactInfo = std::forward<ContactInfoT>(value); }
    template<typename ContactInfoT = Aws::String>
    PackageGroupDescription& WithContactInfo(ContactInfoT&& value) { SetContactInfo(std::forward<ContactInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the package group. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PackageGroupDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package group origin configuration that determines how package versions
     * can enter repositories.</p>
     */
    inline const PackageGroupOriginConfiguration& GetOriginConfiguration() const { return m_originConfiguration; }
    inline bool OriginConfigurationHasBeenSet() const { return m_originConfigurationHasBeenSet; }
    template<typename OriginConfigurationT = PackageGroupOriginConfiguration>
    void SetOriginConfiguration(OriginConfigurationT&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::forward<OriginConfigurationT>(value); }
    template<typename OriginConfigurationT = PackageGroupOriginConfiguration>
    PackageGroupDescription& WithOriginConfiguration(OriginConfigurationT&& value) { SetOriginConfiguration(std::forward<OriginConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The direct parent package group of the package group. </p>
     */
    inline const PackageGroupReference& GetParent() const { return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    template<typename ParentT = PackageGroupReference>
    void SetParent(ParentT&& value) { m_parentHasBeenSet = true; m_parent = std::forward<ParentT>(value); }
    template<typename ParentT = PackageGroupReference>
    PackageGroupDescription& WithParent(ParentT&& value) { SetParent(std::forward<ParentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
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
