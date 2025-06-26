/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/Stream.h>
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
  class ListStreamsResult
  {
  public:
    AWS_KEYSPACESSTREAMS_API ListStreamsResult() = default;
    AWS_KEYSPACESSTREAMS_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACESSTREAMS_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of stream objects, each containing summary information about a
     * stream including its ARN, status, and associated table information. This list
     * includes all streams that match the request criteria. </p>
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
     * <p> A pagination token that can be used in a subsequent <code>ListStreams</code>
     * request. This token is returned if the response contains more streams than can
     * be returned in a single response based on the <code>MaxResults</code> parameter.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
