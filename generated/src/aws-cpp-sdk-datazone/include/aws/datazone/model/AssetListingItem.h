/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetListingItemAdditionalAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
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
   * <p>The details of an asset published in an Amazon DataZone
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetListingItem">AWS
   * API Reference</a></p>
   */
  class AssetListingItem
  {
  public:
    AWS_DATAZONE_API AssetListingItem();
    AWS_DATAZONE_API AssetListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline const AssetListingItemAdditionalAttributes& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }

    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline void SetAdditionalAttributes(const AssetListingItemAdditionalAttributes& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }

    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline void SetAdditionalAttributes(AssetListingItemAdditionalAttributes&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }

    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline AssetListingItem& WithAdditionalAttributes(const AssetListingItemAdditionalAttributes& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>The additional attributes of an asset published in an Amazon DataZone
     * catalog.</p>
     */
    inline AssetListingItem& WithAdditionalAttributes(AssetListingItemAdditionalAttributes&& value) { SetAdditionalAttributes(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline AssetListingItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created.</p>
     */
    inline AssetListingItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline AssetListingItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline AssetListingItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an asset published in an Amazon DataZone catalog.</p>
     */
    inline AssetListingItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}


    /**
     * <p>The type of the inventory asset.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The type of the inventory asset.</p>
     */
    inline AssetListingItem& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline AssetListingItem& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline AssetListingItem& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline AssetListingItem& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>Glossary terms attached to the inventory asset.</p>
     */
    inline AssetListingItem& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline const Aws::String& GetListingCreatedBy() const{ return m_listingCreatedBy; }

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline bool ListingCreatedByHasBeenSet() const { return m_listingCreatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline void SetListingCreatedBy(const Aws::String& value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy = value; }

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline void SetListingCreatedBy(Aws::String&& value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline void SetListingCreatedBy(const char* value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline AssetListingItem& WithListingCreatedBy(const Aws::String& value) { SetListingCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline AssetListingItem& WithListingCreatedBy(Aws::String&& value) { SetListingCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline AssetListingItem& WithListingCreatedBy(const char* value) { SetListingCreatedBy(value); return *this;}


    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline AssetListingItem& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline AssetListingItem& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the listing (asset published in Amazon DataZone
     * catalog).</p>
     */
    inline AssetListingItem& WithListingId(const char* value) { SetListingId(value); return *this;}


    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline const Aws::String& GetListingRevision() const{ return m_listingRevision; }

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline bool ListingRevisionHasBeenSet() const { return m_listingRevisionHasBeenSet; }

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline void SetListingRevision(const Aws::String& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = value; }

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline void SetListingRevision(Aws::String&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::move(value); }

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline void SetListingRevision(const char* value) { m_listingRevisionHasBeenSet = true; m_listingRevision.assign(value); }

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline AssetListingItem& WithListingRevision(const Aws::String& value) { SetListingRevision(value); return *this;}

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline AssetListingItem& WithListingRevision(Aws::String&& value) { SetListingRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the listing (asset published in Amazon DataZone catalog).</p>
     */
    inline AssetListingItem& WithListingRevision(const char* value) { SetListingRevision(value); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline const Aws::String& GetListingUpdatedBy() const{ return m_listingUpdatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline bool ListingUpdatedByHasBeenSet() const { return m_listingUpdatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline void SetListingUpdatedBy(const Aws::String& value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline void SetListingUpdatedBy(Aws::String&& value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline void SetListingUpdatedBy(const char* value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline AssetListingItem& WithListingUpdatedBy(const Aws::String& value) { SetListingUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline AssetListingItem& WithListingUpdatedBy(Aws::String&& value) { SetListingUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline AssetListingItem& WithListingUpdatedBy(const char* value) { SetListingUpdatedBy(value); return *this;}


    /**
     * <p>The name of the inventory asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline AssetListingItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline AssetListingItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory asset.</p>
     */
    inline AssetListingItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline AssetListingItem& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline AssetListingItem& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project that owns the inventory asset.</p>
     */
    inline AssetListingItem& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}

  private:

    AssetListingItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_listingCreatedBy;
    bool m_listingCreatedByHasBeenSet = false;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    Aws::String m_listingRevision;
    bool m_listingRevisionHasBeenSet = false;

    Aws::String m_listingUpdatedBy;
    bool m_listingUpdatedByHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
