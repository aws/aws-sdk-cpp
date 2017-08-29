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
#include <aws/dynamodbstreams/model/StreamDescription.h>
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
   * <p>Represents the output of a <i>DescribeStream</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API DescribeStreamResult
  {
  public:
    DescribeStreamResult();
    DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline const StreamDescription& GetStreamDescription() const{ return m_streamDescription; }

    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline void SetStreamDescription(const StreamDescription& value) { m_streamDescription = value; }

    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline void SetStreamDescription(StreamDescription&& value) { m_streamDescription = std::move(value); }

    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline DescribeStreamResult& WithStreamDescription(const StreamDescription& value) { SetStreamDescription(value); return *this;}

    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline DescribeStreamResult& WithStreamDescription(StreamDescription&& value) { SetStreamDescription(std::move(value)); return *this;}

  private:

    StreamDescription m_streamDescription;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
