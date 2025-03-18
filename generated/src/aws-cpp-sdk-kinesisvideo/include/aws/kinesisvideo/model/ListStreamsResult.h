/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/StreamInfo.h>
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
namespace KinesisVideo
{
namespace Model
{
  class ListStreamsResult
  {
  public:
    AWS_KINESISVIDEO_API ListStreamsResult() = default;
    AWS_KINESISVIDEO_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline const Aws::Vector<StreamInfo>& GetStreamInfoList() const { return m_streamInfoList; }
    template<typename StreamInfoListT = Aws::Vector<StreamInfo>>
    void SetStreamInfoList(StreamInfoListT&& value) { m_streamInfoListHasBeenSet = true; m_streamInfoList = std::forward<StreamInfoListT>(value); }
    template<typename StreamInfoListT = Aws::Vector<StreamInfo>>
    ListStreamsResult& WithStreamInfoList(StreamInfoListT&& value) { SetStreamInfoList(std::forward<StreamInfoListT>(value)); return *this;}
    template<typename StreamInfoListT = StreamInfo>
    ListStreamsResult& AddStreamInfoList(StreamInfoListT&& value) { m_streamInfoListHasBeenSet = true; m_streamInfoList.emplace_back(std::forward<StreamInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
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

    Aws::Vector<StreamInfo> m_streamInfoList;
    bool m_streamInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
