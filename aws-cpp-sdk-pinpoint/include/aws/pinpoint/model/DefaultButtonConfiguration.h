/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ButtonAction.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Default button configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DefaultButtonConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultButtonConfiguration
  {
  public:
    AWS_PINPOINT_API DefaultButtonConfiguration();
    AWS_PINPOINT_API DefaultButtonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API DefaultButtonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The background color of the button.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>The background color of the button.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>The background color of the button.</p>
     */
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>The background color of the button.</p>
     */
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>The background color of the button.</p>
     */
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }

    /**
     * <p>The background color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>The background color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}

    /**
     * <p>The background color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}


    /**
     * <p>The border radius of the button.</p>
     */
    inline int GetBorderRadius() const{ return m_borderRadius; }

    /**
     * <p>The border radius of the button.</p>
     */
    inline bool BorderRadiusHasBeenSet() const { return m_borderRadiusHasBeenSet; }

    /**
     * <p>The border radius of the button.</p>
     */
    inline void SetBorderRadius(int value) { m_borderRadiusHasBeenSet = true; m_borderRadius = value; }

    /**
     * <p>The border radius of the button.</p>
     */
    inline DefaultButtonConfiguration& WithBorderRadius(int value) { SetBorderRadius(value); return *this;}


    /**
     * <p>Action triggered by the button.</p>
     */
    inline const ButtonAction& GetButtonAction() const{ return m_buttonAction; }

    /**
     * <p>Action triggered by the button.</p>
     */
    inline bool ButtonActionHasBeenSet() const { return m_buttonActionHasBeenSet; }

    /**
     * <p>Action triggered by the button.</p>
     */
    inline void SetButtonAction(const ButtonAction& value) { m_buttonActionHasBeenSet = true; m_buttonAction = value; }

    /**
     * <p>Action triggered by the button.</p>
     */
    inline void SetButtonAction(ButtonAction&& value) { m_buttonActionHasBeenSet = true; m_buttonAction = std::move(value); }

    /**
     * <p>Action triggered by the button.</p>
     */
    inline DefaultButtonConfiguration& WithButtonAction(const ButtonAction& value) { SetButtonAction(value); return *this;}

    /**
     * <p>Action triggered by the button.</p>
     */
    inline DefaultButtonConfiguration& WithButtonAction(ButtonAction&& value) { SetButtonAction(std::move(value)); return *this;}


    /**
     * <p>Button destination.</p>
     */
    inline const Aws::String& GetLink() const{ return m_link; }

    /**
     * <p>Button destination.</p>
     */
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }

    /**
     * <p>Button destination.</p>
     */
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }

    /**
     * <p>Button destination.</p>
     */
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }

    /**
     * <p>Button destination.</p>
     */
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }

    /**
     * <p>Button destination.</p>
     */
    inline DefaultButtonConfiguration& WithLink(const Aws::String& value) { SetLink(value); return *this;}

    /**
     * <p>Button destination.</p>
     */
    inline DefaultButtonConfiguration& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}

    /**
     * <p>Button destination.</p>
     */
    inline DefaultButtonConfiguration& WithLink(const char* value) { SetLink(value); return *this;}


    /**
     * <p>Button text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Button text.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Button text.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Button text.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Button text.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Button text.</p>
     */
    inline DefaultButtonConfiguration& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Button text.</p>
     */
    inline DefaultButtonConfiguration& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Button text.</p>
     */
    inline DefaultButtonConfiguration& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The text color of the button.</p>
     */
    inline const Aws::String& GetTextColor() const{ return m_textColor; }

    /**
     * <p>The text color of the button.</p>
     */
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }

    /**
     * <p>The text color of the button.</p>
     */
    inline void SetTextColor(const Aws::String& value) { m_textColorHasBeenSet = true; m_textColor = value; }

    /**
     * <p>The text color of the button.</p>
     */
    inline void SetTextColor(Aws::String&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }

    /**
     * <p>The text color of the button.</p>
     */
    inline void SetTextColor(const char* value) { m_textColorHasBeenSet = true; m_textColor.assign(value); }

    /**
     * <p>The text color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithTextColor(const Aws::String& value) { SetTextColor(value); return *this;}

    /**
     * <p>The text color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithTextColor(Aws::String&& value) { SetTextColor(std::move(value)); return *this;}

    /**
     * <p>The text color of the button.</p>
     */
    inline DefaultButtonConfiguration& WithTextColor(const char* value) { SetTextColor(value); return *this;}

  private:

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_borderRadius;
    bool m_borderRadiusHasBeenSet = false;

    ButtonAction m_buttonAction;
    bool m_buttonActionHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
