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
    AWS_DATAZONE_API AssetItem();
    AWS_DATAZONE_API AssetItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional attributes of a Amazon DataZone inventory asset. </p>
     */
    inline const AssetItemAdditionalAttributes& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const AssetItemAdditionalAttributes& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(AssetItemAdditionalAttributes&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline AssetItem& WithAdditionalAttributes(const AssetItemAdditionalAttributes& value) { SetAdditionalAttributes(value); return *this;}
    inline AssetItem& WithAdditionalAttributes(AssetItemAdditionalAttributes&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone inventory asset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssetItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssetItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the inventory asset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline AssetItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline AssetItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline AssetItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of an Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssetItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssetItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssetItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the inventory asset
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline AssetItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline AssetItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline AssetItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetExternalIdentifier() const{ return m_externalIdentifier; }
    inline bool ExternalIdentifierHasBeenSet() const { return m_externalIdentifierHasBeenSet; }
    inline void SetExternalIdentifier(const Aws::String& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = value; }
    inline void SetExternalIdentifier(Aws::String&& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = std::move(value); }
    inline void SetExternalIdentifier(const char* value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier.assign(value); }
    inline AssetItem& WithExternalIdentifier(const Aws::String& value) { SetExternalIdentifier(value); return *this;}
    inline AssetItem& WithExternalIdentifier(Aws::String&& value) { SetExternalIdentifier(std::move(value)); return *this;}
    inline AssetItem& WithExternalIdentifier(const char* value) { SetExternalIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the first revision of the inventory asset was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const{ return m_firstRevisionCreatedAt; }
    inline bool FirstRevisionCreatedAtHasBeenSet() const { return m_firstRevisionCreatedAtHasBeenSet; }
    inline void SetFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { m_firstRevisionCreatedAtHasBeenSet = true; m_firstRevisionCreatedAt = value; }
    inline void SetFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { m_firstRevisionCreatedAtHasBeenSet = true; m_firstRevisionCreatedAt = std::move(value); }
    inline AssetItem& WithFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { SetFirstRevisionCreatedAt(value); return *this;}
    inline AssetItem& WithFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { SetFirstRevisionCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the first revision of the inventory
     * asset.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const{ return m_firstRevisionCreatedBy; }
    inline bool FirstRevisionCreatedByHasBeenSet() const { return m_firstRevisionCreatedByHasBeenSet; }
    inline void SetFirstRevisionCreatedBy(const Aws::String& value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy = value; }
    inline void SetFirstRevisionCreatedBy(Aws::String&& value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy = std::move(value); }
    inline void SetFirstRevisionCreatedBy(const char* value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy.assign(value); }
    inline AssetItem& WithFirstRevisionCreatedBy(const Aws::String& value) { SetFirstRevisionCreatedBy(value); return *this;}
    inline AssetItem& WithFirstRevisionCreatedBy(Aws::String&& value) { SetFirstRevisionCreatedBy(std::move(value)); return *this;}
    inline AssetItem& WithFirstRevisionCreatedBy(const char* value) { SetFirstRevisionCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline AssetItem& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline AssetItem& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline AssetItem& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline AssetItem& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline AssetItem& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>the identifier of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline AssetItem& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AssetItem& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AssetItem& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone inventory asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project that owns the inventory
     * asset.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline AssetItem& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline AssetItem& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline AssetItem& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the asset type of the specified Amazon DataZone inventory
     * asset.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }
    inline AssetItem& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}
    inline AssetItem& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}
    inline AssetItem& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the inventory asset type.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }
    inline AssetItem& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}
    inline AssetItem& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}
    inline AssetItem& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}
    ///@}
  private:

    AssetItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_externalIdentifier;
    bool m_externalIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_firstRevisionCreatedAt;
    bool m_firstRevisionCreatedAtHasBeenSet = false;

    Aws::String m_firstRevisionCreatedBy;
    bool m_firstRevisionCreatedByHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

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
