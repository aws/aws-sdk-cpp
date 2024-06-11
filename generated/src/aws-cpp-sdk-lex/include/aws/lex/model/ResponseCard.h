/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ResponseCard
  {
  public:
    AWS_LEXRUNTIMESERVICE_API ResponseCard();
    AWS_LEXRUNTIMESERVICE_API ResponseCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API ResponseCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the response card format.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ResponseCard& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ResponseCard& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ResponseCard& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the response.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline ResponseCard& WithContentType(const ContentType& value) { SetContentType(value); return *this;}
    inline ResponseCard& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of attachment objects representing options.</p>
     */
    inline const Aws::Vector<GenericAttachment>& GetGenericAttachments() const{ return m_genericAttachments; }
    inline bool GenericAttachmentsHasBeenSet() const { return m_genericAttachmentsHasBeenSet; }
    inline void SetGenericAttachments(const Aws::Vector<GenericAttachment>& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = value; }
    inline void SetGenericAttachments(Aws::Vector<GenericAttachment>&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments = std::move(value); }
    inline ResponseCard& WithGenericAttachments(const Aws::Vector<GenericAttachment>& value) { SetGenericAttachments(value); return *this;}
    inline ResponseCard& WithGenericAttachments(Aws::Vector<GenericAttachment>&& value) { SetGenericAttachments(std::move(value)); return *this;}
    inline ResponseCard& AddGenericAttachments(const GenericAttachment& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(value); return *this; }
    inline ResponseCard& AddGenericAttachments(GenericAttachment&& value) { m_genericAttachmentsHasBeenSet = true; m_genericAttachments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Vector<GenericAttachment> m_genericAttachments;
    bool m_genericAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
