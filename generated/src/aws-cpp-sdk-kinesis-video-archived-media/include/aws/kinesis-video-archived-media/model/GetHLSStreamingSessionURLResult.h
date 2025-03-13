/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class GetHLSStreamingSessionURLResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetHLSStreamingSessionURLResult() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetHLSStreamingSessionURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetHLSStreamingSessionURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline const Aws::String& GetHLSStreamingSessionURL() const { return m_hLSStreamingSessionURL; }
    template<typename HLSStreamingSessionURLT = Aws::String>
    void SetHLSStreamingSessionURL(HLSStreamingSessionURLT&& value) { m_hLSStreamingSessionURLHasBeenSet = true; m_hLSStreamingSessionURL = std::forward<HLSStreamingSessionURLT>(value); }
    template<typename HLSStreamingSessionURLT = Aws::String>
    GetHLSStreamingSessionURLResult& WithHLSStreamingSessionURL(HLSStreamingSessionURLT&& value) { SetHLSStreamingSessionURL(std::forward<HLSStreamingSessionURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHLSStreamingSessionURLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hLSStreamingSessionURL;
    bool m_hLSStreamingSessionURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
