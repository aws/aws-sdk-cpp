/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/ContentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/model/GenericAttachment.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>If you configure a response card when creating your bots, Amazon Lex
   * substitutes the session attributes and slot values available, and then returns
   * it. The response card can also come from a Lambda function (
   * <code>dialogCodeHook</code> and <code>fulfillmentActivity</code> on an
   * intent).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/ResponseCard">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMESERVICE_API ResponseCard
  {
  public:
    ResponseCard();
    ResponseCard(const Aws::Utils::Json::JsonValue& jsonValue);
    ResponseCard& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Version of response card format.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of response card format.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of response card format.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of response card format.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version of response card format.</p>
     */
    inline ResponseCard& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of response card format.</p>
     */
    inline ResponseCard& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of response card format.</p>
     */
    inline ResponseCard& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>Content type of the response.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>Content type of the response.</p>
     */
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Content type of the response.</p>
     */
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Content type of the response.</p>
     */
    inline ResponseCard& WithContentType(const ContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Content type of the response.</p>
     */
    inline ResponseCard& WithContentType(ContentType&& value) { SetContentType(value); return *this;}

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline const Aws::Vector<GenericAttachment>& GetGenericAttachments() const{ return m_genericAttachments; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline void SetGenericAttachments(const Aws::Vector<GenericAttachment>& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = value; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline void SetGenericAttachments(Aws::Vector<GenericAttachment>&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = value; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& WithGenericAttachments(const Aws::Vector<GenericAttachment>& value) { SetGenericAttachments(value); return *this;}

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& WithGenericAttachments(Aws::Vector<GenericAttachment>&& value) { SetGenericAttachments(value); return *this;}

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& AddGenericAttachments(const GenericAttachment& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(value); return *this; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& AddGenericAttachments(GenericAttachment&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(value); return *this; }

  private:
    Aws::String m_version;
    bool m_versionHasBeenSet;
    ContentType m_contentType;
    bool m_contentTypeHasBeenSet;
    Aws::Vector<GenericAttachment> m_genericAttachments;
    bool m_genericAttachmentsHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
