/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/Button.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>A card that is shown to the user by a messaging platform. You define the
   * contents of the card, the card is displayed by the platform. </p> <p>When you
   * use a response card, the response from the user is constrained to the text
   * associated with a button on the card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ImageResponseCard">AWS
   * API Reference</a></p>
   */
  class ImageResponseCard
  {
  public:
    AWS_LEXRUNTIMEV2_API ImageResponseCard();
    AWS_LEXRUNTIMEV2_API ImageResponseCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ImageResponseCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title to display on the response card. The format of the title is
     * determined by the platform displaying the response card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ImageResponseCard& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ImageResponseCard& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ImageResponseCard& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle to display on the response card. The format of the subtitle is
     * determined by the platform displaying the response card.</p>
     */
    inline const Aws::String& GetSubtitle() const{ return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    inline void SetSubtitle(const Aws::String& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }
    inline void SetSubtitle(Aws::String&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }
    inline void SetSubtitle(const char* value) { m_subtitleHasBeenSet = true; m_subtitle.assign(value); }
    inline ImageResponseCard& WithSubtitle(const Aws::String& value) { SetSubtitle(value); return *this;}
    inline ImageResponseCard& WithSubtitle(Aws::String&& value) { SetSubtitle(std::move(value)); return *this;}
    inline ImageResponseCard& WithSubtitle(const char* value) { SetSubtitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image to display on the response card. The image URL must be
     * publicly available so that the platform displaying the response card has access
     * to the image.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }
    inline ImageResponseCard& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}
    inline ImageResponseCard& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}
    inline ImageResponseCard& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of buttons that should be displayed on the response card. The
     * arrangement of the buttons is determined by the platform that displays the
     * button.</p>
     */
    inline const Aws::Vector<Button>& GetButtons() const{ return m_buttons; }
    inline bool ButtonsHasBeenSet() const { return m_buttonsHasBeenSet; }
    inline void SetButtons(const Aws::Vector<Button>& value) { m_buttonsHasBeenSet = true; m_buttons = value; }
    inline void SetButtons(Aws::Vector<Button>&& value) { m_buttonsHasBeenSet = true; m_buttons = std::move(value); }
    inline ImageResponseCard& WithButtons(const Aws::Vector<Button>& value) { SetButtons(value); return *this;}
    inline ImageResponseCard& WithButtons(Aws::Vector<Button>&& value) { SetButtons(std::move(value)); return *this;}
    inline ImageResponseCard& AddButtons(const Button& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(value); return *this; }
    inline ImageResponseCard& AddButtons(Button&& value) { m_buttonsHasBeenSet = true; m_buttons.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_subtitle;
    bool m_subtitleHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::Vector<Button> m_buttons;
    bool m_buttonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
