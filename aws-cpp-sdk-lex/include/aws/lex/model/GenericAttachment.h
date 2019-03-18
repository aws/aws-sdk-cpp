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
  class AWS_LEXRUNTIMESERVICE_API GenericAttachment
  {
  public:
    GenericAttachment();
    GenericAttachment(Aws::Utils::Json::JsonView jsonValue);
    GenericAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the option.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the option.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the option.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the option.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the option.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the option.</p>
     */
    inline GenericAttachment& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the option.</p>
     */
    inline GenericAttachment& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the option.</p>
     */
    inline GenericAttachment& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline const Aws::String& GetSubTitle() const{ return m_subTitle; }

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline bool SubTitleHasBeenSet() const { return m_subTitleHasBeenSet; }

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline void SetSubTitle(const Aws::String& value) { m_subTitleHasBeenSet = true; m_subTitle = value; }

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline void SetSubTitle(Aws::String&& value) { m_subTitleHasBeenSet = true; m_subTitle = std::move(value); }

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline void SetSubTitle(const char* value) { m_subTitleHasBeenSet = true; m_subTitle.assign(value); }

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline GenericAttachment& WithSubTitle(const Aws::String& value) { SetSubTitle(value); return *this;}

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline GenericAttachment& WithSubTitle(Aws::String&& value) { SetSubTitle(std::move(value)); return *this;}

    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline GenericAttachment& WithSubTitle(const char* value) { SetSubTitle(value); return *this;}


    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline const Aws::String& GetAttachmentLinkUrl() const{ return m_attachmentLinkUrl; }

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline bool AttachmentLinkUrlHasBeenSet() const { return m_attachmentLinkUrlHasBeenSet; }

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline void SetAttachmentLinkUrl(const Aws::String& value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl = value; }

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline void SetAttachmentLinkUrl(Aws::String&& value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl = std::move(value); }

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline void SetAttachmentLinkUrl(const char* value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl.assign(value); }

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline GenericAttachment& WithAttachmentLinkUrl(const Aws::String& value) { SetAttachmentLinkUrl(value); return *this;}

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline GenericAttachment& WithAttachmentLinkUrl(Aws::String&& value) { SetAttachmentLinkUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline GenericAttachment& WithAttachmentLinkUrl(const char* value) { SetAttachmentLinkUrl(value); return *this;}


    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline GenericAttachment& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline GenericAttachment& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline GenericAttachment& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The list of options to show to the user.</p>
     */
    inline const Aws::Vector<Button>& GetButtons() const{ return m_buttons; }

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline bool ButtonsHasBeenSet() const { return m_buttonsHasBeenSet; }

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline void SetButtons(const Aws::Vector<Button>& value) { m_buttonsHasBeenSet = true; m_buttons = value; }

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline void SetButtons(Aws::Vector<Button>&& value) { m_buttonsHasBeenSet = true; m_buttons = std::move(value); }

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline GenericAttachment& WithButtons(const Aws::Vector<Button>& value) { SetButtons(value); return *this;}

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline GenericAttachment& WithButtons(Aws::Vector<Button>&& value) { SetButtons(std::move(value)); return *this;}

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline GenericAttachment& AddButtons(const Button& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(value); return *this; }

    /**
     * <p>The list of options to show to the user.</p>
     */
    inline GenericAttachment& AddButtons(Button&& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_subTitle;
    bool m_subTitleHasBeenSet;

    Aws::String m_attachmentLinkUrl;
    bool m_attachmentLinkUrlHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::Vector<Button> m_buttons;
    bool m_buttonsHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
