/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the action to deactivate the image in a specific layer.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticImageDeactivateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class StaticImageDeactivateScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API StaticImageDeactivateScheduleActionSettings();
    AWS_MEDIALIVE_API StaticImageDeactivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StaticImageDeactivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline int GetFadeOut() const{ return m_fadeOut; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline bool FadeOutHasBeenSet() const { return m_fadeOutHasBeenSet; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline void SetFadeOut(int value) { m_fadeOutHasBeenSet = true; m_fadeOut = value; }

    /**
     * The time in milliseconds for the image to fade out. Default is 0 (no fade-out).
     */
    inline StaticImageDeactivateScheduleActionSettings& WithFadeOut(int value) { SetFadeOut(value); return *this;}


    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline int GetLayer() const{ return m_layer; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline bool LayerHasBeenSet() const { return m_layerHasBeenSet; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline void SetLayer(int value) { m_layerHasBeenSet = true; m_layer = value; }

    /**
     * The image overlay layer to deactivate, 0 to 7. Default is 0.
     */
    inline StaticImageDeactivateScheduleActionSettings& WithLayer(int value) { SetLayer(value); return *this;}

  private:

    int m_fadeOut;
    bool m_fadeOutHasBeenSet = false;

    int m_layer;
    bool m_layerHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
