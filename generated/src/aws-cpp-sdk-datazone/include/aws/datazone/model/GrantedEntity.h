/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ListingRevision.h>
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
   * <p>The details of a listing for which a subscription is granted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GrantedEntity">AWS
   * API Reference</a></p>
   */
  class GrantedEntity
  {
  public:
    AWS_DATAZONE_API GrantedEntity();
    AWS_DATAZONE_API GrantedEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GrantedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline const ListingRevision& GetListing() const{ return m_listing; }

    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline bool ListingHasBeenSet() const { return m_listingHasBeenSet; }

    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline void SetListing(const ListingRevision& value) { m_listingHasBeenSet = true; m_listing = value; }

    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline void SetListing(ListingRevision&& value) { m_listingHasBeenSet = true; m_listing = std::move(value); }

    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline GrantedEntity& WithListing(const ListingRevision& value) { SetListing(value); return *this;}

    /**
     * <p>The listing for which a subscription is granted.</p>
     */
    inline GrantedEntity& WithListing(ListingRevision&& value) { SetListing(std::move(value)); return *this;}

  private:

    ListingRevision m_listing;
    bool m_listingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
