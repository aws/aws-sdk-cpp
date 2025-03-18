/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StorageProfileSummary.h>
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
namespace deadline
{
namespace Model
{
  class ListStorageProfilesForQueueResult
  {
  public:
    AWS_DEADLINE_API ListStorageProfilesForQueueResult() = default;
    AWS_DEADLINE_API ListStorageProfilesForQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListStorageProfilesForQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The storage profiles in the queue.</p>
     */
    inline const Aws::Vector<StorageProfileSummary>& GetStorageProfiles() const { return m_storageProfiles; }
    template<typename StorageProfilesT = Aws::Vector<StorageProfileSummary>>
    void SetStorageProfiles(StorageProfilesT&& value) { m_storageProfilesHasBeenSet = true; m_storageProfiles = std::forward<StorageProfilesT>(value); }
    template<typename StorageProfilesT = Aws::Vector<StorageProfileSummary>>
    ListStorageProfilesForQueueResult& WithStorageProfiles(StorageProfilesT&& value) { SetStorageProfiles(std::forward<StorageProfilesT>(value)); return *this;}
    template<typename StorageProfilesT = StorageProfileSummary>
    ListStorageProfilesForQueueResult& AddStorageProfiles(StorageProfilesT&& value) { m_storageProfilesHasBeenSet = true; m_storageProfiles.emplace_back(std::forward<StorageProfilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStorageProfilesForQueueResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStorageProfilesForQueueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StorageProfileSummary> m_storageProfiles;
    bool m_storageProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
