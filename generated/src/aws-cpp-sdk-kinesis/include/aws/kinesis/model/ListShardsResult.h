/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/Shard.h>
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
  class ListShardsResult
  {
  public:
    AWS_KINESIS_API ListShardsResult() = default;
    AWS_KINESIS_API ListShardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API ListShardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const { return m_shards; }
    template<typename ShardsT = Aws::Vector<Shard>>
    void SetShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards = std::forward<ShardsT>(value); }
    template<typename ShardsT = Aws::Vector<Shard>>
    ListShardsResult& WithShards(ShardsT&& value) { SetShards(std::forward<ShardsT>(value)); return *this;}
    template<typename ShardsT = Shard>
    ListShardsResult& AddShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards.emplace_back(std::forward<ShardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     *  <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListShardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListShardsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
