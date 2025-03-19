/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AssetInDataProductListingItem.h>
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
   * <p>The data product listing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedProductListing">AWS
   * API Reference</a></p>
   */
  class SubscribedProductListing
  {
  public:
    AWS_DATAZONE_API SubscribedProductListing() = default;
    AWS_DATAZONE_API SubscribedProductListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedProductListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data assets of the data product listing.</p>
     */
    inline const Aws::Vector<AssetInDataProductListingItem>& GetAssetListings() const { return m_assetListings; }
    inline bool AssetListingsHasBeenSet() const { return m_assetListingsHasBeenSet; }
    template<typename AssetListingsT = Aws::Vector<AssetInDataProductListingItem>>
    void SetAssetListings(AssetListingsT&& value) { m_assetListingsHasBeenSet = true; m_assetListings = std::forward<AssetListingsT>(value); }
    template<typename AssetListingsT = Aws::Vector<AssetInDataProductListingItem>>
    SubscribedProductListing& WithAssetListings(AssetListingsT&& value) { SetAssetListings(std::forward<AssetListingsT>(value)); return *this;}
    template<typename AssetListingsT = AssetInDataProductListingItem>
    SubscribedProductListing& AddAssetListings(AssetListingsT&& value) { m_assetListingsHasBeenSet = true; m_assetListings.emplace_back(std::forward<AssetListingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the data product listing.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SubscribedProductListing& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data product listing.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    SubscribedProductListing& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product listing.</p>
     */
    inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    template<typename EntityRevisionT = Aws::String>
    void SetEntityRevision(EntityRevisionT&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::forward<EntityRevisionT>(value); }
    template<typename EntityRevisionT = Aws::String>
    SubscribedProductListing& WithEntityRevision(EntityRevisionT&& value) { SetEntityRevision(std::forward<EntityRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product listing.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    SubscribedProductListing& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    SubscribedProductListing& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data product listing.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SubscribedProductListing& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetInDataProductListingItem> m_assetListings;
    bool m_assetListingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
