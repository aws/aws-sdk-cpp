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
  class AWS_KINESIS_API ListShardsResult
  {
  public:
    ListShardsResult();
    ListShardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListShardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shards = value; }

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shards = std::move(value); }

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline ListShardsResult& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline ListShardsResult& WithShards(Aws::Vector<Shard>&& value) { SetShards(std::move(value)); return *this;}

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline ListShardsResult& AddShards(const Shard& value) { m_shards.push_back(value); return *this; }

    /**
     * <p>An array of JSON objects. Each object represents one shard and specifies the
     * IDs of the shard, the shard's parent, and the shard that's adjacent to the
     * shard's parent. Each object also contains the starting and ending hash keys and
     * the starting and ending sequence numbers for the shard.</p>
     */
    inline ListShardsResult& AddShards(Shard&& value) { m_shards.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline ListShardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline ListShardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards. For
     * more information about the use of this pagination token when calling the
     * <code>ListShards</code> operation, see <a>ListShardsInput$NextToken</a>.</p>
     * <important> <p>Tokens expire after 300 seconds. When you obtain a value for
     * <code>NextToken</code> in the response to a call to <code>ListShards</code>, you
     * have 300 seconds to use that value. If you specify an expired token in a call to
     * <code>ListShards</code>, you get <code>ExpiredNextTokenException</code>.</p>
     * </important>
     */
    inline ListShardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Shard> m_shards;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
