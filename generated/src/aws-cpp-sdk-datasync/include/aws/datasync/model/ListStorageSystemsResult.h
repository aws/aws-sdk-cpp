/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/StorageSystemListEntry.h>
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
namespace DataSync
{
namespace Model
{
  class ListStorageSystemsResult
  {
  public:
    AWS_DATASYNC_API ListStorageSystemsResult() = default;
    AWS_DATASYNC_API ListStorageSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListStorageSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline const Aws::Vector<StorageSystemListEntry>& GetStorageSystems() const { return m_storageSystems; }
    template<typename StorageSystemsT = Aws::Vector<StorageSystemListEntry>>
    void SetStorageSystems(StorageSystemsT&& value) { m_storageSystemsHasBeenSet = true; m_storageSystems = std::forward<StorageSystemsT>(value); }
    template<typename StorageSystemsT = Aws::Vector<StorageSystemListEntry>>
    ListStorageSystemsResult& WithStorageSystems(StorageSystemsT&& value) { SetStorageSystems(std::forward<StorageSystemsT>(value)); return *this;}
    template<typename StorageSystemsT = StorageSystemListEntry>
    ListStorageSystemsResult& AddStorageSystems(StorageSystemsT&& value) { m_storageSystemsHasBeenSet = true; m_storageSystems.emplace_back(std::forward<StorageSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStorageSystemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStorageSystemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StorageSystemListEntry> m_storageSystems;
    bool m_storageSystemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
