/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/MessageBody.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing the textual content of the requested archived email
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessageContentResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveMessageContentResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveMessageContentResult();
    AWS_MAILMANAGER_API GetArchiveMessageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveMessageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The textual body content of the email message.</p>
     */
    inline const MessageBody& GetBody() const{ return m_body; }
    inline void SetBody(const MessageBody& value) { m_body = value; }
    inline void SetBody(MessageBody&& value) { m_body = std::move(value); }
    inline GetArchiveMessageContentResult& WithBody(const MessageBody& value) { SetBody(value); return *this;}
    inline GetArchiveMessageContentResult& WithBody(MessageBody&& value) { SetBody(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetArchiveMessageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetArchiveMessageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetArchiveMessageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MessageBody m_body;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
