/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the output of a <code>DescribeStream</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/DescribeStreamOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStreamResult
  {
  public:
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult();
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
