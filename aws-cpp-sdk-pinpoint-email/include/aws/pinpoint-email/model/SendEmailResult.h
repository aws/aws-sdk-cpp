/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A unique message ID that you receive when Amazon Pinpoint accepts an email
   * for sending.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendEmailResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API SendEmailResult
  {
  public:
    SendEmailResult();
    SendEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline SendEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline SendEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the message that is generated when Amazon Pinpoint
     * accepts the message.</p> <note> <p>It is possible for Amazon Pinpoint to accept
     * a message without sending it. This can happen when the message you're trying to
     * send has an attachment doesn't pass a virus check, or when you send a templated
     * email that contains invalid personalization content, for example.</p> </note>
     */
    inline SendEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
