/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/model/StreamDescription.h>
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
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult() = default;
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complete description of the stream, including its creation date and time,
     * the DynamoDB table associated with the stream, the shard IDs within the stream,
     * and the beginning and ending sequence numbers of stream records within the
     * shards.</p>
     */
    inline const StreamDescription& GetStreamDescription() const { return m_streamDescription; }
    template<typename StreamDescriptionT = StreamDescription>
    void SetStreamDescription(StreamDescriptionT&& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = std::forward<StreamDescriptionT>(value); }
    template<typename StreamDescriptionT = StreamDescription>
    DescribeStreamResult& WithStreamDescription(StreamDescriptionT&& value) { SetStreamDescription(std::forward<StreamDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StreamDescription m_streamDescription;
    bool m_streamDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
