/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class StartContactStreamingResult
  {
  public:
    AWS_CONNECT_API StartContactStreamingResult() = default;
    AWS_CONNECT_API StartContactStreamingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartContactStreamingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline const Aws::String& GetStreamingId() const { return m_streamingId; }
    template<typename StreamingIdT = Aws::String>
    void SetStreamingId(StreamingIdT&& value) { m_streamingIdHasBeenSet = true; m_streamingId = std::forward<StreamingIdT>(value); }
    template<typename StreamingIdT = Aws::String>
    StartContactStreamingResult& WithStreamingId(StreamingIdT&& value) { SetStreamingId(std::forward<StreamingIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartContactStreamingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamingId;
    bool m_streamingIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
