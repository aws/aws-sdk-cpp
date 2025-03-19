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
  class GetDASHStreamingSessionURLResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline const Aws::String& GetDASHStreamingSessionURL() const { return m_dASHStreamingSessionURL; }
    template<typename DASHStreamingSessionURLT = Aws::String>
    void SetDASHStreamingSessionURL(DASHStreamingSessionURLT&& value) { m_dASHStreamingSessionURLHasBeenSet = true; m_dASHStreamingSessionURL = std::forward<DASHStreamingSessionURLT>(value); }
    template<typename DASHStreamingSessionURLT = Aws::String>
    GetDASHStreamingSessionURLResult& WithDASHStreamingSessionURL(DASHStreamingSessionURLT&& value) { SetDASHStreamingSessionURL(std::forward<DASHStreamingSessionURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDASHStreamingSessionURLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dASHStreamingSessionURL;
    bool m_dASHStreamingSessionURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
