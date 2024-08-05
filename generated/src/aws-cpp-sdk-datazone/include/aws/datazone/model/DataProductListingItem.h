/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DataProductListingItemAdditionalAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
#include <aws/datazone/model/ListingSummaryItem.h>
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
   * <p>The asset of the data product listing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataProductListingItem">AWS
   * API Reference</a></p>
   */
  class DataProductListingItem
  {
  public:
    AWS_DATAZONE_API DataProductListingItem();
    AWS_DATAZONE_API DataProductListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional attributes of the asset of the data product.</p>
     */
    inline const DataProductListingItemAdditionalAttributes& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const DataProductListingItemAdditionalAttributes& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(DataProductListingItemAdditionalAttributes&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline DataProductListingItem& WithAdditionalAttributes(const DataProductListingItemAdditionalAttributes& value) { SetAdditionalAttributes(value); return *this;}
    inline DataProductListingItem& WithAdditionalAttributes(DataProductListingItemAdditionalAttributes&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset of the data product listing was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DataProductListingItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DataProductListingItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataProductListingItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataProductListingItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataProductListingItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity ID of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline DataProductListingItem& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline DataProductListingItem& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline DataProductListingItem& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }
    inline DataProductListingItem& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}
    inline DataProductListingItem& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}
    inline DataProductListingItem& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the asset of the asset of the data product. </p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline DataProductListingItem& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}
    inline DataProductListingItem& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline DataProductListingItem& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline DataProductListingItem& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data of the asset of the data product. </p>
     */
    inline const Aws::Vector<ListingSummaryItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ListingSummaryItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ListingSummaryItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline DataProductListingItem& WithItems(const Aws::Vector<ListingSummaryItem>& value) { SetItems(value); return *this;}
    inline DataProductListingItem& WithItems(Aws::Vector<ListingSummaryItem>&& value) { SetItems(std::move(value)); return *this;}
    inline DataProductListingItem& AddItems(const ListingSummaryItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline DataProductListingItem& AddItems(ListingSummaryItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the listing was created.</p>
     */
    inline const Aws::String& GetListingCreatedBy() const{ return m_listingCreatedBy; }
    inline bool ListingCreatedByHasBeenSet() const { return m_listingCreatedByHasBeenSet; }
    inline void SetListingCreatedBy(const Aws::String& value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy = value; }
    inline void SetListingCreatedBy(Aws::String&& value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy = std::move(value); }
    inline void SetListingCreatedBy(const char* value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy.assign(value); }
    inline DataProductListingItem& WithListingCreatedBy(const Aws::String& value) { SetListingCreatedBy(value); return *this;}
    inline DataProductListingItem& WithListingCreatedBy(Aws::String&& value) { SetListingCreatedBy(std::move(value)); return *this;}
    inline DataProductListingItem& WithListingCreatedBy(const char* value) { SetListingCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the listing.</p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }
    inline DataProductListingItem& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}
    inline DataProductListingItem& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}
    inline DataProductListingItem& WithListingId(const char* value) { SetListingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the listing.</p>
     */
    inline const Aws::String& GetListingRevision() const{ return m_listingRevision; }
    inline bool ListingRevisionHasBeenSet() const { return m_listingRevisionHasBeenSet; }
    inline void SetListingRevision(const Aws::String& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = value; }
    inline void SetListingRevision(Aws::String&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::move(value); }
    inline void SetListingRevision(const char* value) { m_listingRevisionHasBeenSet = true; m_listingRevision.assign(value); }
    inline DataProductListingItem& WithListingRevision(const Aws::String& value) { SetListingRevision(value); return *this;}
    inline DataProductListingItem& WithListingRevision(Aws::String&& value) { SetListingRevision(std::move(value)); return *this;}
    inline DataProductListingItem& WithListingRevision(const char* value) { SetListingRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the listing.</p>
     */
    inline const Aws::String& GetListingUpdatedBy() const{ return m_listingUpdatedBy; }
    inline bool ListingUpdatedByHasBeenSet() const { return m_listingUpdatedByHasBeenSet; }
    inline void SetListingUpdatedBy(const Aws::String& value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy = value; }
    inline void SetListingUpdatedBy(Aws::String&& value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy = std::move(value); }
    inline void SetListingUpdatedBy(const char* value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy.assign(value); }
    inline DataProductListingItem& WithListingUpdatedBy(const Aws::String& value) { SetListingUpdatedBy(value); return *this;}
    inline DataProductListingItem& WithListingUpdatedBy(Aws::String&& value) { SetListingUpdatedBy(std::move(value)); return *this;}
    inline DataProductListingItem& WithListingUpdatedBy(const char* value) { SetListingUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset of the data product. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataProductListingItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataProductListingItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataProductListingItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the asset of the data product. </p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline DataProductListingItem& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline DataProductListingItem& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline DataProductListingItem& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}
  private:

    DataProductListingItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<ListingSummaryItem> m_items;
    bool m_itemsHasBeenSet = false;

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
