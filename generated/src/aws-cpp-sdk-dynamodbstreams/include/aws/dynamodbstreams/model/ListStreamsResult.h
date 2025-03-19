/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodbstreams/model/Stream.h>
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
   * <p>Represents the output of a <code>ListStreams</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ListStreamsOutput">AWS
   * API Reference</a></p>
   */
  class ListStreamsResult
  {
  public:
    AWS_DYNAMODBSTREAMS_API ListStreamsResult() = default;
    AWS_DYNAMODBSTREAMS_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline const Aws::Vector<Stream>& GetStreams() const { return m_streams; }
    template<typename StreamsT = Aws::Vector<Stream>>
    void SetStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams = std::forward<StreamsT>(value); }
    template<typename StreamsT = Aws::Vector<Stream>>
    ListStreamsResult& WithStreams(StreamsT&& value) { SetStreams(std::forward<StreamsT>(value)); return *this;}
    template<typename StreamsT = Stream>
    ListStreamsResult& AddStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams.emplace_back(std::forward<StreamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stream ARN of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <code>LastEvaluatedStreamArn</code> is
     * empty, then the "last page" of results has been processed and there is no more
     * data to be retrieved.</p> <p>If <code>LastEvaluatedStreamArn</code> is not
     * empty, it does not necessarily mean that there is more data in the result set.
     * The only way to know when you have reached the end of the result set is when
     * <code>LastEvaluatedStreamArn</code> is empty.</p>
     */
    inline const Aws::String& GetLastEvaluatedStreamArn() const { return m_lastEvaluatedStreamArn; }
    template<typename LastEvaluatedStreamArnT = Aws::String>
    void SetLastEvaluatedStreamArn(LastEvaluatedStreamArnT&& value) { m_lastEvaluatedStreamArnHasBeenSet = true; m_lastEvaluatedStreamArn = std::forward<LastEvaluatedStreamArnT>(value); }
    template<typename LastEvaluatedStreamArnT = Aws::String>
    ListStreamsResult& WithLastEvaluatedStreamArn(LastEvaluatedStreamArnT&& value) { SetLastEvaluatedStreamArn(std::forward<LastEvaluatedStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Stream> m_streams;
    bool m_streamsHasBeenSet = false;

    Aws::String m_lastEvaluatedStreamArn;
    bool m_lastEvaluatedStreamArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
