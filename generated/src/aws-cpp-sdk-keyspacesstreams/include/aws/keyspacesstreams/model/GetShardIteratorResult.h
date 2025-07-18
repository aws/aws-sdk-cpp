/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
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
namespace KeyspacesStreams
{
namespace Model
{
  class GetShardIteratorResult
  {
  public:
    AWS_KEYSPACESSTREAMS_API GetShardIteratorResult() = default;
    AWS_KEYSPACESSTREAMS_API GetShardIteratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACESSTREAMS_API GetShardIteratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier for the shard iterator. This value is used in the
     * <code>GetRecords</code> operation to retrieve data records from the specified
     * shard. Each shard iterator expires 15 minutes after it is returned to the
     * requester. </p>
     */
    inline const Aws::String& GetShardIterator() const { return m_shardIterator; }
    template<typename ShardIteratorT = Aws::String>
    void SetShardIterator(ShardIteratorT&& value) { m_shardIteratorHasBeenSet = true; m_shardIterator = std::forward<ShardIteratorT>(value); }
    template<typename ShardIteratorT = Aws::String>
    GetShardIteratorResult& WithShardIterator(ShardIteratorT&& value) { SetShardIterator(std::forward<ShardIteratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetShardIteratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shardIterator;
    bool m_shardIteratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
