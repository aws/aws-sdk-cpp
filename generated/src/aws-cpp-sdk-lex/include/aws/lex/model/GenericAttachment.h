/**
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
    AWS_LEXRUNTIMESERVICE_API GenericAttachment() = default;
    AWS_LEXRUNTIMESERVICE_API GenericAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API GenericAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the option.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GenericAttachment& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle shown below the title.</p>
     */
    inline const Aws::String& GetSubTitle() const { return m_subTitle; }
    inline bool SubTitleHasBeenSet() const { return m_subTitleHasBeenSet; }
    template<typename SubTitleT = Aws::String>
    void SetSubTitle(SubTitleT&& value) { m_subTitleHasBeenSet = true; m_subTitle = std::forward<SubTitleT>(value); }
    template<typename SubTitleT = Aws::String>
    GenericAttachment& WithSubTitle(SubTitleT&& value) { SetSubTitle(std::forward<SubTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an attachment to the response card.</p>
     */
    inline const Aws::String& GetAttachmentLinkUrl() const { return m_attachmentLinkUrl; }
    inline bool AttachmentLinkUrlHasBeenSet() const { return m_attachmentLinkUrlHasBeenSet; }
    template<typename AttachmentLinkUrlT = Aws::String>
    void SetAttachmentLinkUrl(AttachmentLinkUrlT&& value) { m_attachmentLinkUrlHasBeenSet = true; m_attachmentLinkUrl = std::forward<AttachmentLinkUrlT>(value); }
    template<typename AttachmentLinkUrlT = Aws::String>
    GenericAttachment& WithAttachmentLinkUrl(AttachmentLinkUrlT&& value) { SetAttachmentLinkUrl(std::forward<AttachmentLinkUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image that is displayed to the user.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    GenericAttachment& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of options to show to the user.</p>
     */
    inline const Aws::Vector<Button>& GetButtons() const { return m_buttons; }
    inline bool ButtonsHasBeenSet() const { return m_buttonsHasBeenSet; }
    template<typename ButtonsT = Aws::Vector<Button>>
    void SetButtons(ButtonsT&& value) { m_buttonsHasBeenSet = true; m_buttons = std::forward<ButtonsT>(value); }
    template<typename ButtonsT = Aws::Vector<Button>>
    GenericAttachment& WithButtons(ButtonsT&& value) { SetButtons(std::forward<ButtonsT>(value)); return *this;}
    template<typename ButtonsT = Button>
    GenericAttachment& AddButtons(ButtonsT&& value) { m_buttonsHasBeenSet = true; m_buttons.emplace_back(std::forward<ButtonsT>(value)); return *this; }
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
