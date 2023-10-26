/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The identifiers of the provider service, from Data Exchange.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderMarketplaceConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderMarketplaceConfiguration
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderMarketplaceConfiguration();
    AWS_ENTITYRESOLUTION_API ProviderMarketplaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderMarketplaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The asset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The dataset ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p>The listing ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithListingId(const char* value) { SetListingId(value); return *this;}


    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID on Data Exchange.</p>
     */
    inline ProviderMarketplaceConfiguration& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
