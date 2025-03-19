/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/Record.h>
#include <aws/kinesis/model/ChildShard.h>
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
namespace Kinesis
{
namespace Model
{
  /**
   * <p>Represents the output for <a>GetRecords</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/GetRecordsOutput">AWS
   * API Reference</a></p>
   */
  class GetRecordsResult
  {
  public:
    AWS_KINESIS_API GetRecordsResult() = default;
    AWS_KINESIS_API GetRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API GetRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data records retrieved from the shard.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    GetRecordsResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    GetRecordsResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next position in the shard from which to start sequentially reading data
     * records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator does not return any more data. </p>
     */
    inline const Aws::String& GetNextShardIterator() const { return m_nextShardIterator; }
    template<typename NextShardIteratorT = Aws::String>
    void SetNextShardIterator(NextShardIteratorT&& value) { m_nextShardIteratorHasBeenSet = true; m_nextShardIterator = std::forward<NextShardIteratorT>(value); }
    template<typename NextShardIteratorT = Aws::String>
    GetRecordsResult& WithNextShardIterator(NextShardIteratorT&& value) { SetNextShardIterator(std::forward<NextShardIteratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds the <a>GetRecords</a> response is from the tip of
     * the stream, indicating how far behind current time the consumer is. A value of
     * zero indicates that record processing is caught up, and there are no new records
     * to process at this moment.</p>
     */
    inline long long GetMillisBehindLatest() const { return m_millisBehindLatest; }
    inline void SetMillisBehindLatest(long long value) { m_millisBehindLatestHasBeenSet = true; m_millisBehindLatest = value; }
    inline GetRecordsResult& WithMillisBehindLatest(long long value) { SetMillisBehindLatest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the current shard's child shards, returned in the
     * <code>GetRecords</code> API's response only when the end of the current shard is
     * reached.</p>
     */
    inline const Aws::Vector<ChildShard>& GetChildShards() const { return m_childShards; }
    template<typename ChildShardsT = Aws::Vector<ChildShard>>
    void SetChildShards(ChildShardsT&& value) { m_childShardsHasBeenSet = true; m_childShards = std::forward<ChildShardsT>(value); }
    template<typename ChildShardsT = Aws::Vector<ChildShard>>
    GetRecordsResult& WithChildShards(ChildShardsT&& value) { SetChildShards(std::forward<ChildShardsT>(value)); return *this;}
    template<typename ChildShardsT = ChildShard>
    GetRecordsResult& AddChildShards(ChildShardsT&& value) { m_childShardsHasBeenSet = true; m_childShards.emplace_back(std::forward<ChildShardsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::String m_nextShardIterator;
    bool m_nextShardIteratorHasBeenSet = false;

    long long m_millisBehindLatest{0};
    bool m_millisBehindLatestHasBeenSet = false;

    Aws::Vector<ChildShard> m_childShards;
    bool m_childShardsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
