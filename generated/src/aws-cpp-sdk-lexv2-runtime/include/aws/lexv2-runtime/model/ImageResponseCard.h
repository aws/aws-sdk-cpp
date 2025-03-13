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
    AWS_LEXRUNTIMEV2_API ImageResponseCard() = default;
    AWS_LEXRUNTIMEV2_API ImageResponseCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ImageResponseCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title to display on the response card. The format of the title is
     * determined by the platform displaying the response card.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ImageResponseCard& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle to display on the response card. The format of the subtitle is
     * determined by the platform displaying the response card.</p>
     */
    inline const Aws::String& GetSubtitle() const { return m_subtitle; }
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }
    template<typename SubtitleT = Aws::String>
    void SetSubtitle(SubtitleT&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::forward<SubtitleT>(value); }
    template<typename SubtitleT = Aws::String>
    ImageResponseCard& WithSubtitle(SubtitleT&& value) { SetSubtitle(std::forward<SubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image to display on the response card. The image URL must be
     * publicly available so that the platform displaying the response card has access
     * to the image.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    ImageResponseCard& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of buttons that should be displayed on the response card. The
     * arrangement of the buttons is determined by the platform that displays the
     * button.</p>
     */
    inline const Aws::Vector<Button>& GetButtons() const { return m_buttons; }
    inline bool ButtonsHasBeenSet() const { return m_buttonsHasBeenSet; }
    template<typename ButtonsT = Aws::Vector<Button>>
    void SetButtons(ButtonsT&& value) { m_buttonsHasBeenSet = true; m_buttons = std::forward<ButtonsT>(value); }
    template<typename ButtonsT = Aws::Vector<Button>>
    ImageResponseCard& WithButtons(ButtonsT&& value) { SetButtons(std::forward<ButtonsT>(value)); return *this;}
    template<typename ButtonsT = Button>
    ImageResponseCard& AddButtons(ButtonsT&& value) { m_buttonsHasBeenSet = true; m_buttons.emplace_back(std::forward<ButtonsT>(value)); return *this; }
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
