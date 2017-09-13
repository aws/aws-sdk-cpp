/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/Record.h>
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
namespace DynamoDBStreams
{
namespace Model
{
  /**
   * <p>Represents the output of a <i>GetRecords</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API GetRecordsResult
  {
  public:
    GetRecordsResult();
    GetRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_records = value; }

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_records = std::move(value); }

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline GetRecordsResult& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline GetRecordsResult& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline GetRecordsResult& AddRecords(const Record& value) { m_records.push_back(value); return *this; }

    /**
     * <p>The stream records from the shard, which were retrieved using the shard
     * iterator.</p>
     */
    inline GetRecordsResult& AddRecords(Record&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline const Aws::String& GetNextShardIterator() const{ return m_nextShardIterator; }

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline void SetNextShardIterator(const Aws::String& value) { m_nextShardIterator = value; }

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline void SetNextShardIterator(Aws::String&& value) { m_nextShardIterator = std::move(value); }

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline void SetNextShardIterator(const char* value) { m_nextShardIterator.assign(value); }

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline GetRecordsResult& WithNextShardIterator(const Aws::String& value) { SetNextShardIterator(value); return *this;}

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline GetRecordsResult& WithNextShardIterator(Aws::String&& value) { SetNextShardIterator(std::move(value)); return *this;}

    /**
     * <p>The next position in the shard from which to start sequentially reading
     * stream records. If set to <code>null</code>, the shard has been closed and the
     * requested iterator will not return any more data.</p>
     */
    inline GetRecordsResult& WithNextShardIterator(const char* value) { SetNextShardIterator(value); return *this;}

  private:

    Aws::Vector<Record> m_records;

    Aws::String m_nextShardIterator;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
