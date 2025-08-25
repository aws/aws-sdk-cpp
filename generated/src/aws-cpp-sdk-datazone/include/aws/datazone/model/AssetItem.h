/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetItemAdditionalAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A Amazon DataZone inventory asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetItem">AWS
   * API Reference</a></p>
   */
  class AssetItem
  {
  public:
    AWS_DATAZONE_API AssetItem() = default;
    AWS_DATAZONE_API AssetItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional attributes of a Amazon DataZone inventory asset. </p>
     */
    inline const AssetItemAdditionalAttributes& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = AssetItemAdditionalAttributes>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = AssetItemAdditionalAttributes>
    AssetItem& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone inventory asset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AssetItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the inventory asset.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    AssetItem& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AssetItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the inventory asset
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    AssetItem& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetExternalIdentifier() const { return m_externalIdentifier; }
    inline bool ExternalIdentifierHasBeenSet() const { return m_externalIdentifierHasBeenSet; }
    template<typename ExternalIdentifierT = Aws::String>
    void SetExternalIdentifier(ExternalIdentifierT&& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = std::forward<ExternalIdentifierT>(value); }
    template<typename ExternalIdentifierT = Aws::String>
    AssetItem& WithExternalIdentifier(ExternalIdentifierT&& value) { SetExternalIdentifier(std::forward<ExternalIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the first revision of the inventory asset was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const { return m_firstRevisionCreatedAt; }
    inline bool FirstRevisionCreatedAtHasBeenSet() const { return m_firstRevisionCreatedAtHasBeenSet; }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    void SetFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { m_firstRevisionCreatedAtHasBeenSet = true; m_firstRevisionCreatedAt = std::forward<FirstRevisionCreatedAtT>(value); }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    AssetItem& WithFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { SetFirstRevisionCreatedAt(std::forward<FirstRevisionCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the first revision of the inventory
     * asset.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const { return m_firstRevisionCreatedBy; }
    inline bool FirstRevisionCreatedByHasBeenSet() const { return m_firstRevisionCreatedByHasBeenSet; }
    template<typename FirstRevisionCreatedByT = Aws::String>
    void SetFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy = std::forward<FirstRevisionCreatedByT>(value); }
    template<typename FirstRevisionCreatedByT = Aws::String>
    AssetItem& WithFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { SetFirstRevisionCreatedBy(std::forward<FirstRevisionCreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    AssetItem& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    AssetItem& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The restricted glossary terms accociated with an asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGovernedGlossaryTerms() const { return m_governedGlossaryTerms; }
    inline bool GovernedGlossaryTermsHasBeenSet() const { return m_governedGlossaryTermsHasBeenSet; }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms = std::forward<GovernedGlossaryTermsT>(value); }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    AssetItem& WithGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { SetGovernedGlossaryTerms(std::forward<GovernedGlossaryTermsT>(value)); return *this;}
    template<typename GovernedGlossaryTermsT = Aws::String>
    AssetItem& AddGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms.emplace_back(std::forward<GovernedGlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>the identifier of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    AssetItem& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project that owns the inventory
     * asset.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    AssetItem& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the asset type of the specified Amazon DataZone inventory
     * asset.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const { return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    template<typename TypeIdentifierT = Aws::String>
    void SetTypeIdentifier(TypeIdentifierT&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::forward<TypeIdentifierT>(value); }
    template<typename TypeIdentifierT = Aws::String>
    AssetItem& WithTypeIdentifier(TypeIdentifierT&& value) { SetTypeIdentifier(std::forward<TypeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the inventory asset type.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    AssetItem& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}
  private:

    AssetItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_externalIdentifier;
    bool m_externalIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_firstRevisionCreatedAt{};
    bool m_firstRevisionCreatedAtHasBeenSet = false;

    Aws::String m_firstRevisionCreatedBy;
    bool m_firstRevisionCreatedByHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<Aws::String> m_governedGlossaryTerms;
    bool m_governedGlossaryTermsHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
