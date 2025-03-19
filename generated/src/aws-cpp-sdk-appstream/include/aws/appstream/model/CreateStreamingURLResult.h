/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppStream
{
namespace Model
{
  class CreateStreamingURLResult
  {
  public:
    AWS_APPSTREAM_API CreateStreamingURLResult() = default;
    AWS_APPSTREAM_API CreateStreamingURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateStreamingURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline const Aws::String& GetStreamingURL() const { return m_streamingURL; }
    template<typename StreamingURLT = Aws::String>
    void SetStreamingURL(StreamingURLT&& value) { m_streamingURLHasBeenSet = true; m_streamingURL = std::forward<StreamingURLT>(value); }
    template<typename StreamingURLT = Aws::String>
    CreateStreamingURLResult& WithStreamingURL(StreamingURLT&& value) { SetStreamingURL(std::forward<StreamingURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const { return m_expires; }
    template<typename ExpiresT = Aws::Utils::DateTime>
    void SetExpires(ExpiresT&& value) { m_expiresHasBeenSet = true; m_expires = std::forward<ExpiresT>(value); }
    template<typename ExpiresT = Aws::Utils::DateTime>
    CreateStreamingURLResult& WithExpires(ExpiresT&& value) { SetExpires(std::forward<ExpiresT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStreamingURLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamingURL;
    bool m_streamingURLHasBeenSet = false;

    Aws::Utils::DateTime m_expires{};
    bool m_expiresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
