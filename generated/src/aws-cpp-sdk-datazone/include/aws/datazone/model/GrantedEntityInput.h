/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ListingRevisionInput.h>
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
   * <p>The details of a listing for which a subscription is to be
   * granted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GrantedEntityInput">AWS
   * API Reference</a></p>
   */
  class GrantedEntityInput
  {
  public:
    AWS_DATAZONE_API GrantedEntityInput() = default;
    AWS_DATAZONE_API GrantedEntityInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GrantedEntityInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The listing for which a subscription is to be granted.</p>
     */
    inline const ListingRevisionInput& GetListing() const { return m_listing; }
    inline bool ListingHasBeenSet() const { return m_listingHasBeenSet; }
    template<typename ListingT = ListingRevisionInput>
    void SetListing(ListingT&& value) { m_listingHasBeenSet = true; m_listing = std::forward<ListingT>(value); }
    template<typename ListingT = ListingRevisionInput>
    GrantedEntityInput& WithListing(ListingT&& value) { SetListing(std::forward<ListingT>(value)); return *this;}
    ///@}
  private:

    ListingRevisionInput m_listing;
    bool m_listingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
