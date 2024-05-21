/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
   * <p>The response containing details about the requested archived email
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessageResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveMessageResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveMessageResult();
    AWS_MAILMANAGER_API GetArchiveMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline const Aws::String& GetMessageDownloadLink() const{ return m_messageDownloadLink; }

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline void SetMessageDownloadLink(const Aws::String& value) { m_messageDownloadLink = value; }

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline void SetMessageDownloadLink(Aws::String&& value) { m_messageDownloadLink = std::move(value); }

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline void SetMessageDownloadLink(const char* value) { m_messageDownloadLink.assign(value); }

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline GetArchiveMessageResult& WithMessageDownloadLink(const Aws::String& value) { SetMessageDownloadLink(value); return *this;}

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline GetArchiveMessageResult& WithMessageDownloadLink(Aws::String&& value) { SetMessageDownloadLink(std::move(value)); return *this;}

    /**
     * <p>A pre-signed URL to temporarily download the full message content.</p>
     */
    inline GetArchiveMessageResult& WithMessageDownloadLink(const char* value) { SetMessageDownloadLink(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetArchiveMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetArchiveMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetArchiveMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_messageDownloadLink;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
