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
    AWS_DATAZONE_API SubscribedProductListing();
    AWS_DATAZONE_API SubscribedProductListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedProductListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data assets of the data product listing.</p>
     */
    inline const Aws::Vector<AssetInDataProductListingItem>& GetAssetListings() const{ return m_assetListings; }
    inline bool AssetListingsHasBeenSet() const { return m_assetListingsHasBeenSet; }
    inline void SetAssetListings(const Aws::Vector<AssetInDataProductListingItem>& value) { m_assetListingsHasBeenSet = true; m_assetListings = value; }
    inline void SetAssetListings(Aws::Vector<AssetInDataProductListingItem>&& value) { m_assetListingsHasBeenSet = true; m_assetListings = std::move(value); }
    inline SubscribedProductListing& WithAssetListings(const Aws::Vector<AssetInDataProductListingItem>& value) { SetAssetListings(value); return *this;}
    inline SubscribedProductListing& WithAssetListings(Aws::Vector<AssetInDataProductListingItem>&& value) { SetAssetListings(std::move(value)); return *this;}
    inline SubscribedProductListing& AddAssetListings(const AssetInDataProductListingItem& value) { m_assetListingsHasBeenSet = true; m_assetListings.push_back(value); return *this; }
    inline SubscribedProductListing& AddAssetListings(AssetInDataProductListingItem&& value) { m_assetListingsHasBeenSet = true; m_assetListings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the data product listing.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SubscribedProductListing& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SubscribedProductListing& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SubscribedProductListing& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data product listing.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline SubscribedProductListing& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline SubscribedProductListing& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline SubscribedProductListing& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product listing.</p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }
    inline SubscribedProductListing& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}
    inline SubscribedProductListing& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}
    inline SubscribedProductListing& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product listing.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline SubscribedProductListing& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}
    inline SubscribedProductListing& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline SubscribedProductListing& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline SubscribedProductListing& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data product listing.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SubscribedProductListing& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SubscribedProductListing& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SubscribedProductListing& WithName(const char* value) { SetName(value); return *this;}
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
