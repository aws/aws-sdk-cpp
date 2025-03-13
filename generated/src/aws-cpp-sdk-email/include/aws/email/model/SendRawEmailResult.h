/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /**
   * <p>Represents a unique message ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendRawEmailResult
  {
  public:
    AWS_SES_API SendRawEmailResult() = default;
    AWS_SES_API SendRawEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API SendRawEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The unique message identifier returned from the <code>SendRawEmail</code>
     * action. </p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    SendRawEmailResult& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SendRawEmailResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
