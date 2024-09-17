/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ListingItem.h>
#include <aws/datazone/model/ListingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class GetListingResult
  {
  public:
    AWS_DATAZONE_API GetListingResult();
    AWS_DATAZONE_API GetListingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetListingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the listing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetListingResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetListingResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the listing.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetListingResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetListingResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetListingResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the listing.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetListingResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetListingResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetListingResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetListingResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetListingResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetListingResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the listing.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetListingResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetListingResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetListingResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a listing.</p>
     */
    inline const ListingItem& GetItem() const{ return m_item; }
    inline void SetItem(const ListingItem& value) { m_item = value; }
    inline void SetItem(ListingItem&& value) { m_item = std::move(value); }
    inline GetListingResult& WithItem(const ListingItem& value) { SetItem(value); return *this;}
    inline GetListingResult& WithItem(ListingItem&& value) { SetItem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of a listing.</p>
     */
    inline const Aws::String& GetListingRevision() const{ return m_listingRevision; }
    inline void SetListingRevision(const Aws::String& value) { m_listingRevision = value; }
    inline void SetListingRevision(Aws::String&& value) { m_listingRevision = std::move(value); }
    inline void SetListingRevision(const char* value) { m_listingRevision.assign(value); }
    inline GetListingResult& WithListingRevision(const Aws::String& value) { SetListingRevision(value); return *this;}
    inline GetListingResult& WithListingRevision(Aws::String&& value) { SetListingRevision(std::move(value)); return *this;}
    inline GetListingResult& WithListingRevision(const char* value) { SetListingRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the listing.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetListingResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetListingResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetListingResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the listing.</p>
     */
    inline const ListingStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ListingStatus& value) { m_status = value; }
    inline void SetStatus(ListingStatus&& value) { m_status = std::move(value); }
    inline GetListingResult& WithStatus(const ListingStatus& value) { SetStatus(value); return *this;}
    inline GetListingResult& WithStatus(ListingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the listing was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetListingResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetListingResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the listing.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetListingResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetListingResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetListingResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetListingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetListingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetListingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_id;

    ListingItem m_item;

    Aws::String m_listingRevision;

    Aws::String m_name;

    ListingStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
