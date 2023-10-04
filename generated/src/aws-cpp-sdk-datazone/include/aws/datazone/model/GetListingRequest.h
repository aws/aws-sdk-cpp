/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class GetListingRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetListingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetListing"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p/>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline GetListingRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p/>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p/>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p/>
     */
    inline GetListingRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetListingRevision() const{ return m_listingRevision; }

    /**
     * <p/>
     */
    inline bool ListingRevisionHasBeenSet() const { return m_listingRevisionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetListingRevision(const Aws::String& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = value; }

    /**
     * <p/>
     */
    inline void SetListingRevision(Aws::String&& value) { m_listingRevisionHasBeenSet = true; m_listingRevision = std::move(value); }

    /**
     * <p/>
     */
    inline void SetListingRevision(const char* value) { m_listingRevisionHasBeenSet = true; m_listingRevision.assign(value); }

    /**
     * <p/>
     */
    inline GetListingRequest& WithListingRevision(const Aws::String& value) { SetListingRevision(value); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithListingRevision(Aws::String&& value) { SetListingRevision(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetListingRequest& WithListingRevision(const char* value) { SetListingRevision(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_listingRevision;
    bool m_listingRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
