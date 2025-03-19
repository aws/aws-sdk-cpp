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
    AWS_DATAZONE_API AssetListingDetails() = default;
    AWS_DATAZONE_API AssetListingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    AssetListingDetails& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an asset published in an Amazon DataZone catalog. </p>
     */
    inline ListingStatus GetListingStatus() const { return m_listingStatus; }
    inline bool ListingStatusHasBeenSet() const { return m_listingStatusHasBeenSet; }
    inline void SetListingStatus(ListingStatus value) { m_listingStatusHasBeenSet = true; m_listingStatus = value; }
    inline AssetListingDetails& WithListingStatus(ListingStatus value) { SetListingStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    ListingStatus m_listingStatus{ListingStatus::NOT_SET};
    bool m_listingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
