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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/ContentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/model/GenericAttachment.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>If you configure a response card when creating your bots, Amazon Lex
   * substitutes the session attributes and slot values that are available, and then
   * returns it. The response card can also come from a Lambda function (
   * <code>dialogCodeHook</code> and <code>fulfillmentActivity</code> on an
   * intent).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/ResponseCard">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMESERVICE_API ResponseCard
  {
  public:
    ResponseCard();
    ResponseCard(Aws::Utils::Json::JsonView jsonValue);
    ResponseCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the response card format.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the response card format.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the response card format.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the response card format.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the response card format.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the response card format.</p>
     */
    inline ResponseCard& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the response card format.</p>
     */
    inline ResponseCard& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the response card format.</p>
     */
    inline ResponseCard& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The content type of the response.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the response.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the response.</p>
     */
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the response.</p>
     */
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the response.</p>
     */
    inline ResponseCard& WithContentType(const ContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the response.</p>
     */
    inline ResponseCard& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline const Aws::Vector<GenericAttachment>& GetGenericAttachments() const{ return m_genericAttachments; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline bool GenericAttachmentsHasBeenSet() const { return m_genericAttachmentsHasBeenSet; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline void SetGenericAttachments(const Aws::Vector<GenericAttachment>& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = value; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline void SetGenericAttachments(Aws::Vector<GenericAttachment>&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = std::move(value); }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& WithGenericAttachments(const Aws::Vector<GenericAttachment>& value) { SetGenericAttachments(value); return *this;}

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& WithGenericAttachments(Aws::Vector<GenericAttachment>&& value) { SetGenericAttachments(std::move(value)); return *this;}

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& AddGenericAttachments(const GenericAttachment& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(value); return *this; }

    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline ResponseCard& AddGenericAttachments(GenericAttachment&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(std::move(value)); return *this; }

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
