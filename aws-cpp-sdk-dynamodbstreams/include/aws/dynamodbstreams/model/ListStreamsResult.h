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
    AWS_DYNAMODBSTREAMS_API ListStreamsResult();
    AWS_DYNAMODBSTREAMS_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODBSTREAMS_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline const Aws::Vector<Stream>& GetStreams() const{ return m_streams; }

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline void SetStreams(const Aws::Vector<Stream>& value) { m_streams = value; }

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline void SetStreams(Aws::Vector<Stream>&& value) { m_streams = std::move(value); }

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline ListStreamsResult& WithStreams(const Aws::Vector<Stream>& value) { SetStreams(value); return *this;}

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline ListStreamsResult& WithStreams(Aws::Vector<Stream>&& value) { SetStreams(std::move(value)); return *this;}

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline ListStreamsResult& AddStreams(const Stream& value) { m_streams.push_back(value); return *this; }

    /**
     * <p>A list of stream descriptors associated with the current account and
     * endpoint.</p>
     */
    inline ListStreamsResult& AddStreams(Stream&& value) { m_streams.push_back(std::move(value)); return *this; }


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
    inline const Aws::String& GetLastEvaluatedStreamArn() const{ return m_lastEvaluatedStreamArn; }

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
    inline void SetLastEvaluatedStreamArn(const Aws::String& value) { m_lastEvaluatedStreamArn = value; }

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
    inline void SetLastEvaluatedStreamArn(Aws::String&& value) { m_lastEvaluatedStreamArn = std::move(value); }

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
    inline void SetLastEvaluatedStreamArn(const char* value) { m_lastEvaluatedStreamArn.assign(value); }

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
    inline ListStreamsResult& WithLastEvaluatedStreamArn(const Aws::String& value) { SetLastEvaluatedStreamArn(value); return *this;}

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
    inline ListStreamsResult& WithLastEvaluatedStreamArn(Aws::String&& value) { SetLastEvaluatedStreamArn(std::move(value)); return *this;}

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
    inline ListStreamsResult& WithLastEvaluatedStreamArn(const char* value) { SetLastEvaluatedStreamArn(value); return *this;}

  private:

    Aws::Vector<Stream> m_streams;

    Aws::String m_lastEvaluatedStreamArn;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
