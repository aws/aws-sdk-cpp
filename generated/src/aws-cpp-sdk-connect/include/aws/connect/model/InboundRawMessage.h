/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/EmailHeaderType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the raw email body content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InboundRawMessage">AWS
   * API Reference</a></p>
   */
  class InboundRawMessage
  {
  public:
    AWS_CONNECT_API InboundRawMessage();
    AWS_CONNECT_API InboundRawMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InboundRawMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email subject.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline InboundRawMessage& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline InboundRawMessage& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline InboundRawMessage& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message body.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline InboundRawMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline InboundRawMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline InboundRawMessage& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of content, that is, <code>text/plain</code> or
     * <code>text/html</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline InboundRawMessage& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InboundRawMessage& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InboundRawMessage& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Headers present in inbound email.</p>
     */
    inline const Aws::Map<EmailHeaderType, Aws::String>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Map<EmailHeaderType, Aws::String>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Map<EmailHeaderType, Aws::String>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline InboundRawMessage& WithHeaders(const Aws::Map<EmailHeaderType, Aws::String>& value) { SetHeaders(value); return *this;}
    inline InboundRawMessage& WithHeaders(Aws::Map<EmailHeaderType, Aws::String>&& value) { SetHeaders(std::move(value)); return *this;}
    inline InboundRawMessage& AddHeaders(const EmailHeaderType& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }
    inline InboundRawMessage& AddHeaders(EmailHeaderType&& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }
    inline InboundRawMessage& AddHeaders(const EmailHeaderType& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(key, std::move(value)); return *this; }
    inline InboundRawMessage& AddHeaders(EmailHeaderType&& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), std::move(value)); return *this; }
    inline InboundRawMessage& AddHeaders(EmailHeaderType&& key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }
    inline InboundRawMessage& AddHeaders(const EmailHeaderType& key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Map<EmailHeaderType, Aws::String> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
