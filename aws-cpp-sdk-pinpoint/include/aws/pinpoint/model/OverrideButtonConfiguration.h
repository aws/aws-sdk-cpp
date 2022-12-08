/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ButtonAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Override button configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/OverrideButtonConfiguration">AWS
   * API Reference</a></p>
   */
  class OverrideButtonConfiguration
  {
  public:
    AWS_PINPOINT_API OverrideButtonConfiguration();
    AWS_PINPOINT_API OverrideButtonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API OverrideButtonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline OverrideButtonConfiguration& WithButtonAction(const ButtonAction& value) { SetButtonAction(value); return *this;}

    /**
     * <p>Action triggered by the button.</p>
     */
    inline OverrideButtonConfiguration& WithButtonAction(ButtonAction&& value) { SetButtonAction(std::move(value)); return *this;}


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
    inline OverrideButtonConfiguration& WithLink(const Aws::String& value) { SetLink(value); return *this;}

    /**
     * <p>Button destination.</p>
     */
    inline OverrideButtonConfiguration& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}

    /**
     * <p>Button destination.</p>
     */
    inline OverrideButtonConfiguration& WithLink(const char* value) { SetLink(value); return *this;}

  private:

    ButtonAction m_buttonAction;
    bool m_buttonActionHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
