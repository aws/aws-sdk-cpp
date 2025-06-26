/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/Record.h>
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
namespace KeyspacesStreams
{
namespace Model
{
  class GetRecordsResult
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetRecordsResult() = default;
    AWS_KEYSPACESSTREAMS_API GetRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACESSTREAMS_API GetRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of change data records retrieved from the specified shard. Each
     * record represents a single data modification (insert, update, or delete) to a
     * row in the Amazon Keyspaces table. Records include the primary key columns and
     * information about what data was modified. </p>
     */
    inline const Aws::Vector<Record>& GetChangeRecords() const { return m_changeRecords; }
    template<typename ChangeRecordsT = Aws::Vector<Record>>
    void SetChangeRecords(ChangeRecordsT&& value) { m_changeRecordsHasBeenSet = true; m_changeRecords = std::forward<ChangeRecordsT>(value); }
    template<typename ChangeRecordsT = Aws::Vector<Record>>
    GetRecordsResult& WithChangeRecords(ChangeRecordsT&& value) { SetChangeRecords(std::forward<ChangeRecordsT>(value)); return *this;}
    template<typename ChangeRecordsT = Record>
    GetRecordsResult& AddChangeRecords(ChangeRecordsT&& value) { m_changeRecordsHasBeenSet = true; m_changeRecords.emplace_back(std::forward<ChangeRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The next position in the shard from which to start sequentially reading data
     * records. If null, the shard has been closed and the requested iterator doesn't
     * return any more data. </p>
     */
    inline const Aws::String& GetNextShardIterator() const { return m_nextShardIterator; }
    template<typename NextShardIteratorT = Aws::String>
    void SetNextShardIterator(NextShardIteratorT&& value) { m_nextShardIteratorHasBeenSet = true; m_nextShardIterator = std::forward<NextShardIteratorT>(value); }
    template<typename NextShardIteratorT = Aws::String>
    GetRecordsResult& WithNextShardIterator(NextShardIteratorT&& value) { SetNextShardIterator(std::forward<NextShardIteratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Record> m_changeRecords;
    bool m_changeRecordsHasBeenSet = false;

    Aws::String m_nextShardIterator;
    bool m_nextShardIteratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
