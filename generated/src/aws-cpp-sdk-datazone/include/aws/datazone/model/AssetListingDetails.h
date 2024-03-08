/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ListingStatus.h>
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
   * <p>The details of an asset published in an Amazon DataZone catalog.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetListingDetails">AWS
   * API Reference</a></p>
   */
  class AssetListingDetails
  {
  public:
    AWS_DATAZONE_API AssetListingDetails();
    AWS_DATAZONE_API AssetListingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListingDetails& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListingDetails& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListingDetails& WithListingId(const char* value) { SetListingId(value); return *this;}


    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const ListingStatus& GetListingStatus() const{ return m_listingStatus; }

    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline bool ListingStatusHasBeenSet() const { return m_listingStatusHasBeenSet; }

    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetListingStatus(const ListingStatus& value) { m_listingStatusHasBeenSet = true; m_listingStatus = value; }

    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline void SetListingStatus(ListingStatus&& value) { m_listingStatusHasBeenSet = true; m_listingStatus = std::move(value); }

    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListingDetails& WithListingStatus(const ListingStatus& value) { SetListingStatus(value); return *this;}

    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline AssetListingDetails& WithListingStatus(ListingStatus&& value) { SetListingStatus(std::move(value)); return *this;}

  private:

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    ListingStatus m_listingStatus;
    bool m_listingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
