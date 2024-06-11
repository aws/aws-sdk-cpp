﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/model/Button.h>
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
   * <p>Represents an option rendered to the user when a prompt is shown. It could be
   * an image, a button, a link, or text. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/GenericAttachment">AWS
   * API Reference</a></p>
   */
  class GenericAttachment
  {
  public:
    AWS_LEXRUNTIMESERVICE_API GenericAttachment();
    AWS_LEXRUNTIMESERVICE_API GenericAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API GenericAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the option.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline GenericAttachment& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline GenericAttachment& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline GenericAttachment& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline const Aws::String& GetSubTitle() const{ return m_subTitle; }
    inline bool SubTitleHasBeenSet() const { return m_subTitleHasBeenSet; }
    inline void SetSubTitle(const Aws::String& value) { m_subTitleHasBeenSet = true; m_subTitle = value; }
    inline void SetSubTitle(Aws::String&& value) { m_subTitleHasBeenSet = true; m_subTitle = std::move(value); }
    inline void SetSubTitle(const char* value) { m_subTitleHasBeenSet = true; m_subTitle.assign(value); }
    inline GenericAttachment& WithSubTitle(const Aws::String& value) { SetSubTitle(value); return *this;}
    inline GenericAttachment& WithSubTitle(Aws::String&& value) { SetSubTitle(std::move(value)); return *this;}
    inline GenericAttachment& WithSubTitle(const char* value) { SetSubTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline const Aws::String& GetAttachmentLinkUrl() const{ return m_attachmentLinkUrl; }
    inline bool AttachmentLinkUrlHasBeenSet() const { return m_attachmentLinkUrlHasBeenSet; }
    inline void SetAttachmentLinkUrl(const Aws::String& value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl = value; }
    inline void SetAttachmentLinkUrl(Aws::String&& value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl = std::move(value); }
    inline void SetAttachmentLinkUrl(const char* value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl.assign(value); }
    inline GenericAttachment& WithAttachmentLinkUrl(const Aws::String& value) { SetAttachmentLinkUrl(value); return *this;}
    inline GenericAttachment& WithAttachmentLinkUrl(Aws::String&& value) { SetAttachmentLinkUrl(std::move(value)); return *this;}
    inline GenericAttachment& WithAttachmentLinkUrl(const char* value) { SetAttachmentLinkUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }
    inline GenericAttachment& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}
    inline GenericAttachment& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}
    inline GenericAttachment& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of options to show to the user.</p>
     */
    inline const Aws::Vector<Button>& GetButtons() const{ return m_buttons; }
    inline bool ButtonsHasBeenSet() const { return m_buttonsHasBeenSet; }
    inline void SetButtons(const Aws::Vector<Button>& value) { m_buttonsHasBeenSet = true; m_buttons = value; }
    inline void SetButtons(Aws::Vector<Button>&& value) { m_buttonsHasBeenSet = true; m_buttons = std::move(value); }
    inline GenericAttachment& WithButtons(const Aws::Vector<Button>& value) { SetButtons(value); return *this;}
    inline GenericAttachment& WithButtons(Aws::Vector<Button>&& value) { SetButtons(std::move(value)); return *this;}
    inline GenericAttachment& AddButtons(const Button& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(value); return *this; }
    inline GenericAttachment& AddButtons(Button&& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_subTitle;
    bool m_subTitleHasBeenSet = false;

    Aws::String m_attachmentLinkUrl;
    bool m_attachmentLinkUrlHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::Vector<Button> m_buttons;
    bool m_buttonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
