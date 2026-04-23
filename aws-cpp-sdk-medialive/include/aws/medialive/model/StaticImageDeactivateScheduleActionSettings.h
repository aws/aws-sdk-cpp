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
  class AWS_MEDIALIVE_API StaticImageDeactivateScheduleActionSettings
  {
  public:
    StaticImageDeactivateScheduleActionSettings();
    StaticImageDeactivateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    StaticImageDeactivateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_fadeOutHasBeenSet;

    int m_layer;
    bool m_layerHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
