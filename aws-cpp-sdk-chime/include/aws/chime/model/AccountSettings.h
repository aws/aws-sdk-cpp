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
#include <aws/chime/Chime_EXPORTS.h>

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
namespace Chime
{
namespace Model
{

  /**
   * <p>Settings related to the Amazon Chime account. This includes settings that
   * start or stop remote control of shared screens, or start or stop the dial-out
   * option in the Amazon Chime web application. For more information about these
   * settings, see <a
   * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
   * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API AccountSettings
  {
  public:
    AccountSettings();
    AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Setting that stops or starts remote control of shared screens during
     * meetings.</p>
     */
    inline bool GetDisableRemoteControl() const{ return m_disableRemoteControl; }

    /**
     * <p>Setting that stops or starts remote control of shared screens during
     * meetings.</p>
     */
    inline bool DisableRemoteControlHasBeenSet() const { return m_disableRemoteControlHasBeenSet; }

    /**
     * <p>Setting that stops or starts remote control of shared screens during
     * meetings.</p>
     */
    inline void SetDisableRemoteControl(bool value) { m_disableRemoteControlHasBeenSet = true; m_disableRemoteControl = value; }

    /**
     * <p>Setting that stops or starts remote control of shared screens during
     * meetings.</p>
     */
    inline AccountSettings& WithDisableRemoteControl(bool value) { SetDisableRemoteControl(value); return *this;}


    /**
     * <p>Setting that allows meeting participants to choose the <b>Call me at a phone
     * number</b> option. For more information, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ug/chime-join-meeting.html">Join
     * a Meeting without the Amazon Chime App</a>.</p>
     */
    inline bool GetEnableDialOut() const{ return m_enableDialOut; }

    /**
     * <p>Setting that allows meeting participants to choose the <b>Call me at a phone
     * number</b> option. For more information, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ug/chime-join-meeting.html">Join
     * a Meeting without the Amazon Chime App</a>.</p>
     */
    inline bool EnableDialOutHasBeenSet() const { return m_enableDialOutHasBeenSet; }

    /**
     * <p>Setting that allows meeting participants to choose the <b>Call me at a phone
     * number</b> option. For more information, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ug/chime-join-meeting.html">Join
     * a Meeting without the Amazon Chime App</a>.</p>
     */
    inline void SetEnableDialOut(bool value) { m_enableDialOutHasBeenSet = true; m_enableDialOut = value; }

    /**
     * <p>Setting that allows meeting participants to choose the <b>Call me at a phone
     * number</b> option. For more information, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ug/chime-join-meeting.html">Join
     * a Meeting without the Amazon Chime App</a>.</p>
     */
    inline AccountSettings& WithEnableDialOut(bool value) { SetEnableDialOut(value); return *this;}

  private:

    bool m_disableRemoteControl;
    bool m_disableRemoteControlHasBeenSet;

    bool m_enableDialOut;
    bool m_enableDialOutHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
