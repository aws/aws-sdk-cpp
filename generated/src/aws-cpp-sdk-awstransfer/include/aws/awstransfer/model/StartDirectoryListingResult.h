/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{
  class StartDirectoryListingResult
  {
  public:
    AWS_TRANSFER_API StartDirectoryListingResult();
    AWS_TRANSFER_API StartDirectoryListingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API StartDirectoryListingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline void SetListingId(const Aws::String& value) { m_listingId = value; }

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline void SetListingId(Aws::String&& value) { m_listingId = std::move(value); }

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline void SetListingId(const char* value) { m_listingId.assign(value); }

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline StartDirectoryListingResult& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline StartDirectoryListingResult& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}

    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline StartDirectoryListingResult& WithListingId(const char* value) { SetListingId(value); return *this;}


    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline const Aws::String& GetOutputFileName() const{ return m_outputFileName; }

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline void SetOutputFileName(const Aws::String& value) { m_outputFileName = value; }

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline void SetOutputFileName(Aws::String&& value) { m_outputFileName = std::move(value); }

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline void SetOutputFileName(const char* value) { m_outputFileName.assign(value); }

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline StartDirectoryListingResult& WithOutputFileName(const Aws::String& value) { SetOutputFileName(value); return *this;}

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline StartDirectoryListingResult& WithOutputFileName(Aws::String&& value) { SetOutputFileName(std::move(value)); return *this;}

    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline StartDirectoryListingResult& WithOutputFileName(const char* value) { SetOutputFileName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDirectoryListingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDirectoryListingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDirectoryListingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_listingId;

    Aws::String m_outputFileName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
