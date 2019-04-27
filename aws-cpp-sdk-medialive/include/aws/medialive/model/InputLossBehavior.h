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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/InputLossImageType.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Input Loss Behavior<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputLossBehavior">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputLossBehavior
  {
  public:
    InputLossBehavior();
    InputLossBehavior(Aws::Utils::Json::JsonView jsonValue);
    InputLossBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Documentation update needed
     */
    inline int GetBlackFrameMsec() const{ return m_blackFrameMsec; }

    /**
     * Documentation update needed
     */
    inline bool BlackFrameMsecHasBeenSet() const { return m_blackFrameMsecHasBeenSet; }

    /**
     * Documentation update needed
     */
    inline void SetBlackFrameMsec(int value) { m_blackFrameMsecHasBeenSet = true; m_blackFrameMsec = value; }

    /**
     * Documentation update needed
     */
    inline InputLossBehavior& WithBlackFrameMsec(int value) { SetBlackFrameMsec(value); return *this;}


    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline const Aws::String& GetInputLossImageColor() const{ return m_inputLossImageColor; }

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline bool InputLossImageColorHasBeenSet() const { return m_inputLossImageColorHasBeenSet; }

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline void SetInputLossImageColor(const Aws::String& value) { m_inputLossImageColorHasBeenSet = true; m_inputLossImageColor = value; }

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline void SetInputLossImageColor(Aws::String&& value) { m_inputLossImageColorHasBeenSet = true; m_inputLossImageColor = std::move(value); }

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline void SetInputLossImageColor(const char* value) { m_inputLossImageColorHasBeenSet = true; m_inputLossImageColor.assign(value); }

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline InputLossBehavior& WithInputLossImageColor(const Aws::String& value) { SetInputLossImageColor(value); return *this;}

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline InputLossBehavior& WithInputLossImageColor(Aws::String&& value) { SetInputLossImageColor(std::move(value)); return *this;}

    /**
     * When input loss image type is "color" this field specifies the color to use.
     * Value: 6 hex characters representing the values of RGB.
     */
    inline InputLossBehavior& WithInputLossImageColor(const char* value) { SetInputLossImageColor(value); return *this;}


    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline const InputLocation& GetInputLossImageSlate() const{ return m_inputLossImageSlate; }

    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline bool InputLossImageSlateHasBeenSet() const { return m_inputLossImageSlateHasBeenSet; }

    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline void SetInputLossImageSlate(const InputLocation& value) { m_inputLossImageSlateHasBeenSet = true; m_inputLossImageSlate = value; }

    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline void SetInputLossImageSlate(InputLocation&& value) { m_inputLossImageSlateHasBeenSet = true; m_inputLossImageSlate = std::move(value); }

    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline InputLossBehavior& WithInputLossImageSlate(const InputLocation& value) { SetInputLossImageSlate(value); return *this;}

    /**
     * When input loss image type is "slate" these fields specify the parameters for
     * accessing the slate.
     */
    inline InputLossBehavior& WithInputLossImageSlate(InputLocation&& value) { SetInputLossImageSlate(std::move(value)); return *this;}


    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline const InputLossImageType& GetInputLossImageType() const{ return m_inputLossImageType; }

    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline bool InputLossImageTypeHasBeenSet() const { return m_inputLossImageTypeHasBeenSet; }

    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline void SetInputLossImageType(const InputLossImageType& value) { m_inputLossImageTypeHasBeenSet = true; m_inputLossImageType = value; }

    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline void SetInputLossImageType(InputLossImageType&& value) { m_inputLossImageTypeHasBeenSet = true; m_inputLossImageType = std::move(value); }

    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline InputLossBehavior& WithInputLossImageType(const InputLossImageType& value) { SetInputLossImageType(value); return *this;}

    /**
     * Indicates whether to substitute a solid color or a slate into the output after
     * input loss exceeds blackFrameMsec.
     */
    inline InputLossBehavior& WithInputLossImageType(InputLossImageType&& value) { SetInputLossImageType(std::move(value)); return *this;}


    /**
     * Documentation update needed
     */
    inline int GetRepeatFrameMsec() const{ return m_repeatFrameMsec; }

    /**
     * Documentation update needed
     */
    inline bool RepeatFrameMsecHasBeenSet() const { return m_repeatFrameMsecHasBeenSet; }

    /**
     * Documentation update needed
     */
    inline void SetRepeatFrameMsec(int value) { m_repeatFrameMsecHasBeenSet = true; m_repeatFrameMsec = value; }

    /**
     * Documentation update needed
     */
    inline InputLossBehavior& WithRepeatFrameMsec(int value) { SetRepeatFrameMsec(value); return *this;}

  private:

    int m_blackFrameMsec;
    bool m_blackFrameMsecHasBeenSet;

    Aws::String m_inputLossImageColor;
    bool m_inputLossImageColorHasBeenSet;

    InputLocation m_inputLossImageSlate;
    bool m_inputLossImageSlateHasBeenSet;

    InputLossImageType m_inputLossImageType;
    bool m_inputLossImageTypeHasBeenSet;

    int m_repeatFrameMsec;
    bool m_repeatFrameMsecHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
