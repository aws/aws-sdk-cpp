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
  class CreateListingChangeSetResult
  {
  public:
    AWS_DATAZONE_API CreateListingChangeSetResult();
    AWS_DATAZONE_API CreateListingChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateListingChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p/>
     */
    inline void SetListingId(const Aws::String& value) { m_listingId = value; }

    /**
     * <p/>
     */
    inline void SetListingId(Aws::String&& value) { m_listingId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetListingId(const char* value) { m_listingId.assign(value); }

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingId(const char* value) { SetListingId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetListingRevision() const{ return m_listingRevision; }

    /**
     * <p/>
     */
    inline void SetListingRevision(const Aws::String& value) { m_listingRevision = value; }

    /**
     * <p/>
     */
    inline void SetListingRevision(Aws::String&& value) { m_listingRevision = std::move(value); }

    /**
     * <p/>
     */
    inline void SetListingRevision(const char* value) { m_listingRevision.assign(value); }

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingRevision(const Aws::String& value) { SetListingRevision(value); return *this;}

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingRevision(Aws::String&& value) { SetListingRevision(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithListingRevision(const char* value) { SetListingRevision(value); return *this;}


    /**
     * <p/>
     */
    inline const ListingStatus& GetStatus() const{ return m_status; }

    /**
     * <p/>
     */
    inline void SetStatus(const ListingStatus& value) { m_status = value; }

    /**
     * <p/>
     */
    inline void SetStatus(ListingStatus&& value) { m_status = std::move(value); }

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithStatus(const ListingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p/>
     */
    inline CreateListingChangeSetResult& WithStatus(ListingStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateListingChangeSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateListingChangeSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateListingChangeSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_listingId;

    Aws::String m_listingRevision;

    ListingStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
