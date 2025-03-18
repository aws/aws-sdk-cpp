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
    AWS_TRANSFER_API StartDirectoryListingResult() = default;
    AWS_TRANSFER_API StartDirectoryListingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API StartDirectoryListingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a unique identifier for the directory listing call.</p>
     */
    inline const Aws::String& GetListingId() const { return m_listingId; }
    template<typename ListingIdT = Aws::String>
    void SetListingId(ListingIdT&& value) { m_listingIdHasBeenSet = true; m_listingId = std::forward<ListingIdT>(value); }
    template<typename ListingIdT = Aws::String>
    StartDirectoryListingResult& WithListingId(ListingIdT&& value) { SetListingId(std::forward<ListingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the file name where the results are stored. This is a combination of
     * the connector ID and the listing ID:
     * <code>&lt;connector-id&gt;-&lt;listing-id&gt;.json</code>.</p>
     */
    inline const Aws::String& GetOutputFileName() const { return m_outputFileName; }
    template<typename OutputFileNameT = Aws::String>
    void SetOutputFileName(OutputFileNameT&& value) { m_outputFileNameHasBeenSet = true; m_outputFileName = std::forward<OutputFileNameT>(value); }
    template<typename OutputFileNameT = Aws::String>
    StartDirectoryListingResult& WithOutputFileName(OutputFileNameT&& value) { SetOutputFileName(std::forward<OutputFileNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDirectoryListingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;

    Aws::String m_outputFileName;
    bool m_outputFileNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
