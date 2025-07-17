/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/Metadata.h>
#include <aws/mailmanager/model/Envelope.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing details about the requested archived email
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessageResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveMessageResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveMessageResult() = default;
    AWS_MAILMANAGER_API GetArchiveMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline const Aws::String& GetMessageDownloadLink() const { return m_messageDownloadLink; }
    template<typename MessageDownloadLinkT = Aws::String>
    void SetMessageDownloadLink(MessageDownloadLinkT&& value) { m_messageDownloadLinkHasBeenSet = true; m_messageDownloadLink = std::forward<MessageDownloadLinkT>(value); }
    template<typename MessageDownloadLinkT = Aws::String>
    GetArchiveMessageResult& WithMessageDownloadLink(MessageDownloadLinkT&& value) { SetMessageDownloadLink(std::forward<MessageDownloadLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata about the email.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    GetArchiveMessageResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMTP envelope information of the email.</p>
     */
    inline const Envelope& GetEnvelope() const { return m_envelope; }
    template<typename EnvelopeT = Envelope>
    void SetEnvelope(EnvelopeT&& value) { m_envelopeHasBeenSet = true; m_envelope = std::forward<EnvelopeT>(value); }
    template<typename EnvelopeT = Envelope>
    GetArchiveMessageResult& WithEnvelope(EnvelopeT&& value) { SetEnvelope(std::forward<EnvelopeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchiveMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageDownloadLink;
    bool m_messageDownloadLinkHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Envelope m_envelope;
    bool m_envelopeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
