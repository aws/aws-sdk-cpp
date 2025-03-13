/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{
  class GetAttachmentResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API GetAttachmentResult() = default;
    AWS_CONNECTPARTICIPANT_API GetAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API GetAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is the pre-signed URL that can be used for uploading the file to Amazon
     * S3 when used in response to <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_StartAttachmentUpload.html">StartAttachmentUpload</a>.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetAttachmentResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetUrlExpiry() const { return m_urlExpiry; }
    template<typename UrlExpiryT = Aws::String>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::String>
    GetAttachmentResult& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the attachment in bytes.</p>
     */
    inline long long GetAttachmentSizeInBytes() const { return m_attachmentSizeInBytes; }
    inline void SetAttachmentSizeInBytes(long long value) { m_attachmentSizeInBytesHasBeenSet = true; m_attachmentSizeInBytes = value; }
    inline GetAttachmentResult& WithAttachmentSizeInBytes(long long value) { SetAttachmentSizeInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_urlExpiry;
    bool m_urlExpiryHasBeenSet = false;

    long long m_attachmentSizeInBytes{0};
    bool m_attachmentSizeInBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
