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
    AWS_DATAZONE_API DataProductListingItem() = default;
    AWS_DATAZONE_API DataProductListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional attributes of the asset of the data product.</p>
     */
    inline const DataProductListingItemAdditionalAttributes& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = DataProductListingItemAdditionalAttributes>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = DataProductListingItemAdditionalAttributes>
    DataProductListingItem& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset of the data product listing was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataProductListingItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataProductListingItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity ID of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    DataProductListingItem& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset of the asset of the data product. </p>
     */
    inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    template<typename EntityRevisionT = Aws::String>
    void SetEntityRevision(EntityRevisionT&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::forward<EntityRevisionT>(value); }
    template<typename EntityRevisionT = Aws::String>
    DataProductListingItem& WithEntityRevision(EntityRevisionT&& value) { SetEntityRevision(std::forward<EntityRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the asset of the asset of the data product. </p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    DataProductListingItem& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    DataProductListingItem& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data of the asset of the data product. </p>
     */
    inline const Aws::Vector<ListingSummaryItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<ListingSummaryItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<ListingSummaryItem>>
    DataProductListingItem& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = ListingSummaryItem>
    DataProductListingItem& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the listing was created.</p>
     */
    inline const Aws::String& GetListingCreatedBy() const { return m_listingCreatedBy; }
    inline bool ListingCreatedByHasBeenSet() const { return m_listingCreatedByHasBeenSet; }
    template<typename ListingCreatedByT = Aws::String>
    void SetListingCreatedBy(ListingCreatedByT&& value) { m_listingCreatedByHasBeenSet = true; m_listingCreatedBy = std::forward<ListingCreatedByT>(value); }
    template<typename ListingCreatedByT = Aws::String>
    DataProductListingItem& WithListingCreatedBy(ListingCreatedByT&& value) { SetListingCreatedBy(std::forward<ListingCreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the listing.</p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    DataProductListingItem& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the listing.</p>
     */
    inline const Aws::String& GetListingRevision() const { return m_listingRevision; }
    inline bool ListingRevisionHasBeenSet() const { return m_listingRevisionHasBeenSet; }
    template<typename ListingRevisionT = Aws::String>
    void SetListingRevision(ListingRevisionT&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::forward<ListingRevisionT>(value); }
    template<typename ListingRevisionT = Aws::String>
    DataProductListingItem& WithListingRevision(ListingRevisionT&& value) { SetListingRevision(std::forward<ListingRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the listing.</p>
     */
    inline const Aws::String& GetListingUpdatedBy() const { return m_listingUpdatedBy; }
    inline bool ListingUpdatedByHasBeenSet() const { return m_listingUpdatedByHasBeenSet; }
    template<typename ListingUpdatedByT = Aws::String>
    void SetListingUpdatedBy(ListingUpdatedByT&& value) { m_listingUpdatedByHasBeenSet = true; m_listingUpdatedBy = std::forward<ListingUpdatedByT>(value); }
    template<typename ListingUpdatedByT = Aws::String>
    DataProductListingItem& WithListingUpdatedBy(ListingUpdatedByT&& value) { SetListingUpdatedBy(std::forward<ListingUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset of the data product. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataProductListingItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the asset of the data product. </p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    DataProductListingItem& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}
  private:

    DataProductListingItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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
