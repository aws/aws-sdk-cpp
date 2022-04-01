﻿/**
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
   * <p>The response received when attempting to send the custom verification
   * email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendCustomVerificationEmailResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SendCustomVerificationEmailResult
  {
  public:
    SendCustomVerificationEmailResult();
    SendCustomVerificationEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SendCustomVerificationEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline SendCustomVerificationEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SendCustomVerificationEmailResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SendCustomVerificationEmailResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
